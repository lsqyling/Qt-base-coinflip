//
// Created by 10580 on 2023/12/23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_login_window.h" resolved

#include "login_window.h"
#include "ui_login_window.h"


login_window::login_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::login_window)
{
    ui->setupUi(this);
}

login_window::~login_window()
{
    delete ui;
}
/**这是一个注释*//**这是一个注释*//**这是一个注释*//**这是一个注释*//**这是一个注释*//**这是一个注释*//**这是一个注释*/