//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_custom_dialog_box_window.h" resolved

#include "custom_dialog_box_window.h"
#include "ui_custom_dialog_box_window.h"
#include "ui_cell_dialog.h"
#include "colrow_dialog.h"
#include "fmt/core.h"


custom_dialog_box_window::custom_dialog_box_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::custom_dialog_box_window)
{
    ui->setupUi(this);
    this->setWindowTitle("自定义对话框的应用");

    model_ = new QStandardItemModel(this);
    selection_ = new QItemSelectionModel(model_);

    ui->tableView->setModel(model_);
    ui->tableView->setSelectionModel(selection_);


    on_action_triggered();

}

custom_dialog_box_window::~custom_dialog_box_window()
{
    delete ui;
}

void custom_dialog_box_window::on_action_triggered()
{
    connect(ui->actionRowColNum, &QAction::triggered,
            [=, this] {
        colrow_dialog *dialog = new colrow_dialog(this);
        dialog->set_col_row_num(model_->columnCount(), model_->rowCount());

        int ret = dialog->exec();
        if (ret == QDialog::Accepted)
        {
            int row = dialog->row_count();
            int col = dialog->col_count();
            model_->setRowCount(row);
            model_->setColumnCount(col);
        }
        delete dialog;
    });

    connect(ui->actionSheetHeaderTitle, &QAction::triggered,
            [=, this] {

        if (headerset_dialog_ == nullptr)
            headerset_dialog_ = new headerset_dialog(this);
        if (headerset_dialog_->str_list().size() != model_->columnCount())
        {
            QStringList list;
            for (int i = 0; i < model_->columnCount(); ++i)
            {
                list << model_->headerData(i, Qt::Horizontal).toString();
            }
            headerset_dialog_->set_str_list(list);
        }
        int ret = headerset_dialog_->exec();
        if (ret == QDialog::Accepted)
        {
            model_->setHorizontalHeaderLabels(headerset_dialog_->str_list());
        }
    });

    connect(ui->actionCellPos, &QAction::triggered,
            [=, this] {
        ui->actionCellPos->setEnabled(false);
        cell_dialog_ = new cell_dialog(this);
        cell_dialog_->setAttribute(Qt::WA_DeleteOnClose);
        auto flags = cell_dialog_->windowFlags();
        cell_dialog_->setWindowFlags(flags | Qt::WindowStaysOnTopHint);
        cell_dialog_->ui->spinBoxRow->setMaximum(model_->rowCount());
        cell_dialog_->ui->spinBoxCol->setMaximum(model_->columnCount());
        auto index = selection_->currentIndex();
        if (index.isValid())
        {
            cell_dialog_->ui->spinBoxRow->setValue(index.row());
            cell_dialog_->ui->spinBoxCol->setValue(index.column());
        }
        cell_dialog_->show();
    });


    connect(ui->tableView, qOverload<const QModelIndex &>(&QTableView::clicked),
            [=, this](const QModelIndex &index) {

        if (cell_dialog_)
        {
            cell_dialog_->ui->spinBoxRow->setValue(index.row());
            cell_dialog_->ui->spinBoxCol->setValue(index.column());
        }
    });








}
