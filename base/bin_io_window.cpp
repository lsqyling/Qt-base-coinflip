//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_bin_io_window.h" resolved
#include <QFileDialog>
#include <QDataStream>
#include <QFile>
#include "bin_io_window.h"
#include "ui_bin_io_window.h"
#include "QTextStream"


bin_io_window::bin_io_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::bin_io_window)
{
    ui->setupUi(this);
    this->setWindowTitle("二进制文件的读写");
    this->setCentralWidget(ui->tabWidget);

    model_ = new QStandardItemModel(this);
    selection_ = new QItemSelectionModel(model_);
    ui->tableView->setModel(model_);

    QStringList headerlist;
    headerlist << "测深(m)" << "垂深(m)" << "方位(°)" << "总位移(m)" << "固井质量" << "测井取样";
    model_->setHorizontalHeaderLabels(headerlist);

//    ui->tableView->setItemDelegateForColumn(0, spinbox);

    reset_table(5);
    on_actions_triggered();
}





bin_io_window::~bin_io_window()
{
    delete ui;
}

void bin_io_window::on_actions_triggered()
{
    connect(ui->actionTableReset, &QAction::triggered,
            [=, this] {
                 reset_table(10);
    });

    connect(ui->actionStmOpen, &QAction::triggered,
            [=, this] {
        QString filename = QFileDialog::getOpenFileName(this, "打开stm文件", "../",
                                                        "文件(*.stm)");
        if (filename.isEmpty())
            return ;
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly))
        {
            QDataStream stream(&file);
            int rowcount, colcount;
            stream >> rowcount;
            stream >> colcount;
            reset_table(rowcount);
            QString str;
//            sheet header
            for (int i = 0; i < colcount; ++i)
                stream >> str;
//            data
            int depth;
            double vertical_depth, pos, displacement;
            QString quality;
            bool is_sampled;
            QStandardItem *item;
            QModelIndex index;
            for (int i = 0; i < rowcount; ++i)
            {
                stream >> depth;
                index = model_->index(i, 0);
                item = model_->itemFromIndex(index);
                item->setData(depth, Qt::DisplayRole);

                stream >> vertical_depth;
                index = model_->index(i, 1);
                item = model_->itemFromIndex(index);
                item->setData(vertical_depth, Qt::DisplayRole);

                stream >> pos;
                index = model_->index(i, 2);
                item = model_->itemFromIndex(index);
                item->setData(pos, Qt::DisplayRole);

                stream >> displacement;
                index = model_->index(i, 3);
                item = model_->itemFromIndex(index);
                item->setData(displacement, Qt::DisplayRole);

                stream >> quality;
                index = model_->index(i, 4);
                item = model_->itemFromIndex(index);
                item->setData(quality, Qt::DisplayRole);

                stream >> is_sampled;
                item = model_->item(i, 5);
                if (is_sampled)
                    item->setCheckState(Qt::Checked);
                else
                    item->setCheckState(Qt::Unchecked);
            }
        }
    });

    connect(ui->actionTextOpen, &QAction::triggered,
            [=, this] {
        QString filename = QFileDialog::getOpenFileName(this, "打开txt文件", "../",
                                                        "文件(*.txt)");
        if (filename.isEmpty())
            return ;
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream stream(&file);
//            sheet header
            QString line;
            QStringList lines;
            while (!stream.atEnd())
            {
                line = stream.readLine();
                lines.append(line);
            }
            reset_table(lines.count() - 1);
            QStandardItem *item;
            for (int i = 1, j; i < lines.count(); ++i)
            {
                auto list = lines[i].split(QRegExp("\\s+"), Qt::SkipEmptyParts);
                for (j = 0; j < list.count() - 1; ++j)
                {
                    item = new QStandardItem(list[j]);
                    model_->setItem(i-1, j, item);
                }
                if (list[j] == "0")
                    model_->item(i-1, j)->setCheckState(Qt::Unchecked);
                else
                    model_->item(i-1, j)->setCheckState(Qt::Checked);
            }
        }
    });

    connect(ui->actionStmSave, &QAction::triggered,
            [=, this] {
        QString filename = QFileDialog::getSaveFileName(this, "保存stm文件", "../",
                                                        "文件(*.stm)");
        if (filename.isEmpty())
            return ;
        QFile file(filename);
        if (file.open(QIODevice::WriteOnly | QIODevice::Truncate))
        {
            QDataStream stream(&file);
            int rowcount = model_->rowCount();
            int colcount = model_->columnCount();
            stream << rowcount;
            stream << colcount;
//            sheet header
            for (int i = 0; i < colcount; ++i)
                stream << model_->horizontalHeaderItem(i)->text();
//            data
            int depth;
            double vertical_depth, pos, displacement;
            QString quality;
            bool is_sampled;
            QStandardItem *item;
            for (int i = 0; i < rowcount; ++i)
            {

                item = model_->item(i, 0);
                depth = item->data(Qt::DisplayRole).toInt();
                stream << depth;

                item = model_->item(i, 1);
                vertical_depth = item->data(Qt::DisplayRole).toDouble();
                stream << vertical_depth;

                item = model_->item(i, 2);
                pos = item->data(Qt::DisplayRole).toDouble();
                stream << pos;

                item = model_->item(i, 3);
                displacement = item->data(Qt::DisplayRole).toDouble();
                stream << displacement;

                item = model_->item(i, 4);
                quality = item->data(Qt::DisplayRole).toString();
                stream << quality;

                is_sampled = model_->item(i, 5)->checkState() == Qt::Checked;
                stream << is_sampled;
            }
        }
    });









}

void bin_io_window::reset_table(int rows)
{
    model_->removeRows(0, model_->rowCount());
    model_->setRowCount(rows);
    QString str = model_->headerData(model_->columnCount() - 1, Qt::Horizontal, Qt::DisplayRole).toString();
    for (int i = 0; i < rows; ++i)
    {
        auto index = model_->index(i, model_->columnCount() - 1);
        auto item = model_->itemFromIndex(index);
        item->setData(str, Qt::DisplayRole);
        item->setCheckable(true);
        item->setEditable(false);
    }
}
