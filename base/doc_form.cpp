//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_doc_form.h" resolved

#include "doc_form.h"
#include "ui_doc_form.h"


doc_form::doc_form(QWidget *parent) :
        QWidget(parent), ui(new Ui::doc_form)
{
    ui->setupUi(this);
}

doc_form::~doc_form()
{
    delete ui;
}
