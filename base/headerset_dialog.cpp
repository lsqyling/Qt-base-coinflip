//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_headerset_dialog.h" resolved

#include "headerset_dialog.h"
#include "ui_headerset_dialog.h"


headerset_dialog::headerset_dialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::headerset_dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("设置表头");
    model_ = new QStringListModel(this);
    ui->listView->setModel(model_);



}

headerset_dialog::~headerset_dialog()
{
    delete ui;
}

QStringList headerset_dialog::str_list() const
{
    return model_->stringList();
}

void headerset_dialog::set_str_list(const QStringList &list)
{
    model_->setStringList(list);
}
