//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_colrow_dialog.h" resolved

#include "colrow_dialog.h"
#include "ui_colrow_dialog.h"
#include "QMessageBox"


colrow_dialog::colrow_dialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::colrow_dialog)
{
    ui->setupUi(this);
}

colrow_dialog::~colrow_dialog()
{

    QMessageBox::information(this, "", "设置大小对话框已退出");
    delete ui;
}

int colrow_dialog::col_count() const
{
    return ui->spinBoxColNum->value();
}

int colrow_dialog::row_count() const
{
    return ui->spinBoxRowNum->value();
}

void colrow_dialog::set_col_row_num(int col, int row)
{
    ui->spinBoxColNum->setValue(col);
    ui->spinBoxRowNum->setValue(row);

}
