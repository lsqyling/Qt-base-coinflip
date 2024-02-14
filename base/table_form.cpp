//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_table_form.h" resolved

#include "table_form.h"
#include "ui_table_form.h"


table_form::table_form(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::table_form)
{
    ui->setupUi(this);
}

table_form::~table_form()
{
    delete ui;
}
