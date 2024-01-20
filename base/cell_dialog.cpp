//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_cell_dialog.h" resolved

#include "cell_dialog.h"
#include "ui_cell_dialog.h"
#include "custom_dialog_box_window.h"
#include "ui_custom_dialog_box_window.h"


cell_dialog::cell_dialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::cell_dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("定位单元格");

    on_button_clicked();
}

cell_dialog::~cell_dialog()
{
    delete ui;
}


void cell_dialog::closeEvent(QCloseEvent *event)
{
    if (auto *parent = dynamic_cast<custom_dialog_box_window *>(parentWidget()))
    {
        parent->ui->actionCellPos->setEnabled(true);
        parent->cell_dialog_ = nullptr;
    }
}

void cell_dialog::on_button_clicked()
{
    connect(ui->pushButtonFont, &QPushButton::clicked,
            [=, this] {

        int row = ui->spinBoxRow->value();
        int col = ui->spinBoxCol->value();
        if (auto parent = dynamic_cast<custom_dialog_box_window *>(parentWidget()))
        {
            auto index = parent->model_->index(row, col);
            parent->model_->setData(index, ui->lineEditText->text(), Qt::DisplayRole);
            parent->selection_->clearSelection();
            parent->selection_->setCurrentIndex(index, QItemSelectionModel::Select);
        }
        if (ui->checkBoxRowAdd->isChecked())
            ui->spinBoxRow->setValue(ui->spinBoxRow->value() + 1);
        if (ui->checkBoxColAdd->isChecked())
            ui->spinBoxCol->setValue(ui->spinBoxCol->value() + 1);

    });





}
