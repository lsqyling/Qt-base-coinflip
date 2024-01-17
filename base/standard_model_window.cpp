//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_standard_model_window.h" resolved
#include <QTextStream>
#include <QFileDialog>
#include "standard_model_window.h"
#include "ui_standard_model_window.h"
#include "fmt/core.h"


standard_model_window::standard_model_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::standard_model_window)
{
    ui->setupUi(this);
    this->setWindowTitle("StandardModel应用");
    model_ = new QStandardItemModel(10, ColNum, this);
    selection_ = new QItemSelectionModel(model_);


    ui->tableView->setModel(model_);
    ui->tableView->setSelectionModel(selection_);
    ui->tableView->setItemDelegateForColumn(0, &delegate_);

    on_status_bar_show();
    on_action_triggered();
}

standard_model_window::~standard_model_window()
{
    delete ui;
}

void standard_model_window::on_status_bar_show()
{
    label_curr_file_ = new QLabel("当前文件");
    label_cell_pos_ = new QLabel("当前单元格");
    label_cell_text_ = new QLabel("单元格内容");
    ui->statusbar->addWidget(label_curr_file_);
    ui->statusbar->addWidget(label_cell_pos_);
    ui->statusbar->addWidget(label_cell_text_);

    connect(selection_, qOverload<const QModelIndex &, const QModelIndex &>(&QItemSelectionModel::currentChanged),
            [=, this](const QModelIndex &curr, const QModelIndex &prev) {
        if (!curr.isValid())
            return ;
        label_cell_pos_->setText(QString::asprintf("当前单元格：%d行，%d列", curr.row(), curr.column()));
        auto item = model_->itemFromIndex(curr);
        label_cell_text_->setText("单元格内容：" + item->text());
        auto font = item->font();
        ui->actionFontBold->setChecked(font.bold());
    });





}

void standard_model_window::on_action_triggered()
{
    connect(ui->actionOpenFiles, &QAction::triggered,
            [=, this] {
//                auto curr_path = QCoreApplication::applicationDirPath();
                auto filename = QFileDialog::getOpenFileName(this, "打开一个文件", "../images/data",
                                                             "水井数据文件(*.txt);;所有文件(*.*)");
                if (filename.isEmpty()) return;
                QStringList file_content;
                {
                    QFile file(filename);
                    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
                    {
                        QTextStream ts(&file);
                        ui->plainTextEdit->clear();
                        while (!ts.atEnd())
                        {
                            auto str = ts.readLine();
                            ui->plainTextEdit->appendPlainText(str);
                            file_content.append(str);
                        }
                    }
                }
                label_curr_file_->setText("当前文件：" + filename);
//                fmt::print(stderr, "file_content size: {}\n", file_content.size());
                init_model_from_file(file_content);
                ui->tableView->resizeRowsToContents();
                ui->tableView->resizeColumnsToContents();

                ui->actionSaveFile->setEnabled(true);
                ui->actionAddRow->setEnabled(true);
                ui->actionInsertRow->setEnabled(true);
                ui->actionDelRow->setEnabled(true);

            });

    connect(ui->actionSaveFile, &QAction::triggered,
            [=, this] {
//                auto curr_path = QCoreApplication::applicationDirPath();
                auto filename = QFileDialog::getSaveFileName(this, "选择一个文件", "../images/data",
                                                             "水井数据文件(*.txt);;所有文件(*.*)");
//                fmt::print(stderr, "{}\n", curr_path.toStdString());

                if (filename.isEmpty()) return;
                    QFile file(filename);
                    if (!file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text))
                        return ;

                    QTextStream ts(&file);
                    ui->plainTextEdit->clear();
                    QString str;
                for (int i = 0; i < model_->columnCount(); ++i)
                {
                    auto item = model_->horizontalHeaderItem(i);
                    str += item->text() + "\t\t";
                }
                ts << str << "\n";
                ui->plainTextEdit->appendPlainText(str);
                for (int i = 0, j; i < model_->rowCount(); ++i)
                {
                    str.clear();
                    for (j = 0; j < model_->columnCount() - 1; ++j)
                    {
                        auto item = model_->item(i, j);
                        str += item->text() + "\t\t";
                    }
                    auto item = model_->item(i, j);
                    if (item->checkState() == Qt::Checked)
                        str += "1";
                    else
                        str += "0";
                    ts << str << "\n";
                    ui->plainTextEdit->appendPlainText(str);
                }
            });

    connect(ui->actionModelDataView, &QAction::triggered,
            [=, this] {
                ui->plainTextEdit->clear();
                QString str;
                for (int i = 0; i < model_->columnCount(); ++i)
                {
                    auto item = model_->horizontalHeaderItem(i);
                    str += item->text() + "\t";
                }
                ui->plainTextEdit->appendPlainText(str);
                for (int i = 0, j; i < model_->rowCount(); ++i)
                {
                    str.clear();
                    for (j = 0; j < model_->columnCount() - 1; ++j)
                    {
                        auto item = model_->item(i, j);
                        str += item->text() + "\t";
                    }
                    auto item = model_->item(i, j);
                    if (item->checkState() == Qt::Checked)
                        str += "1";
                    else
                        str += "0";
                    ui->plainTextEdit->appendPlainText(str);
                }
            });

    connect(ui->actionAddRow, &QAction::triggered,
            [=, this] {
                QList<QStandardItem *> items;
                QStandardItem *item;
                for (int i = 0; i < ColNum - 1; ++i)
                {
                    item = new QStandardItem("0");
                    items << item;
                }
                QString str = model_->headerData(model_->columnCount() - 1, Qt::Horizontal, Qt::DisplayRole).toString();
                item = new QStandardItem(str);
                item->setCheckState(Qt::Checked);
                items << item;
                model_->appendRow(items);
                selection_->clearSelection();
                auto index = model_->index(model_->rowCount() - 1, 0);
                selection_->setCurrentIndex(index, QItemSelectionModel::Select);
            });

    connect(ui->actionInsertRow, &QAction::triggered,
            [=, this] {
                QList<QStandardItem *> items;
                QStandardItem *item;
                for (int i = 0; i < ColNum - 1; ++i)
                {
                    item = new QStandardItem("0");
                    items << item;
                }
                QString str = model_->headerData(model_->columnCount() - 1, Qt::Horizontal, Qt::DisplayRole).toString();
                item = new QStandardItem(str);
                item->setCheckState(Qt::Checked);
                items << item;

                int cur_row = selection_->currentIndex().row();
                model_->insertRow(cur_row, items);
                selection_->clearSelection();

                auto index = model_->index(cur_row, 0);
                selection_->setCurrentIndex(index, QItemSelectionModel::Select);
            });

    connect(ui->actionDelRow, &QAction::triggered,
            [=, this] {
                auto index = selection_->currentIndex();
                if (index.row() == model_->rowCount() - 1)
                    model_->removeRow(index.row());
                else
                {
                    model_->removeRow(index.row());
                    selection_->setCurrentIndex(index, QItemSelectionModel::Select);
                }
            });

connect(ui->actionPosLeft, &QAction::triggered,
            [=, this] {
                action_alignment(Qt::AlignLeft);
            });

connect(ui->actionPosCenter, &QAction::triggered,
            [=, this] {
                action_alignment(Qt::AlignCenter);
            });

connect(ui->actionPosRight, &QAction::triggered,
            [=, this] {
                action_alignment(Qt::AlignRight);
            });




connect(ui->actionFontBold, qOverload<bool>(&QAction::triggered),
            [=, this](bool clicked) {
                if (!selection_->hasSelection())
                    return ;
                auto section_list = selection_->selectedIndexes();
                for (auto index : section_list)
                {
                    auto item = model_->itemFromIndex(index);
                    auto font = item->font();
                    font.setBold(clicked);
                    item->setFont(font);
                }
            });








}

void standard_model_window::init_model_from_file(const QStringList &list)
{
    model_->setRowCount(list.size() - 1);
//    set sheet header
    auto &header = list.at(0);
    QStringList headerlist = header.split(QRegExp("\\s+"), Qt::SkipEmptyParts);
    model_->setHorizontalHeaderLabels(headerlist);
//    set sheet data
    for (int i = 1, j; i < list.size(); ++i)
    {
        auto &line = list.at(i);
        QStringList tmplist = line.split(QRegExp("\\s+"), Qt::SkipEmptyParts);
        for (j = 0; j < ColNum - 1; ++j)
        {
            auto item = new QStandardItem(tmplist.at(j));
            model_->setItem(i-1, j, item);
        }
        auto item = new QStandardItem(headerlist.at(j));
        if (tmplist.at(j) == "0")
            item->setCheckState(Qt::Unchecked);
        else
            item->setCheckState(Qt::Checked);
        model_->setItem(i-1, j, item);
    }
}

void standard_model_window::action_alignment(Qt::Alignment alignment)
{
    if (!selection_->hasSelection())
        return ;
    auto section_list = selection_->selectedIndexes();
    for (auto index : section_list)
    {
        auto item = model_->itemFromIndex(index);
        item->setTextAlignment(alignment);
    }
}
