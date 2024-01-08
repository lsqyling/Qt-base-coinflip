//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_qstring_window.h" resolved

#include "qstring_window.h"
#include "ui_qstring_window.h"
#include "fmt/core.h"


qstring_window::qstring_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::qstring_window)
{
    ui->setupUi(this);
    this->setWindowTitle("QString数字转换与进制转换");

}

qstring_window::~qstring_window()
{
    delete ui;
}

void qstring_window::on_pushButtonCalc_clicked()
{
    int quantity = ui->lineEditQuantity->text().toInt();
    double price = ui->lineEditPrice->text().toDouble();
    ui->lineEditTotal->setText(QString::number(quantity * price, 'f', 2));
}

void qstring_window::on_pushButtonBit_clicked()
{
    bool ok;
    int val = ui->lineEditBit->text().toInt(&ok, 2);
    ui->lineEditOct->setText(QString::number(val, 8));
    ui->lineEditHex->setText(QString::number(val, 16).toUpper());
}

void qstring_window::on_pushButtonOct_clicked()
{
    bool ok;
    int val = ui->lineEditOct->text().toInt(&ok, 8);
    ui->lineEditBit->setText(QString::number(val, 2));
    ui->lineEditHex->setText(QString::number(val, 16).toUpper());

}

void qstring_window::on_pushButtonHex_clicked()
{
    bool ok;
    int val = ui->lineEditHex->text().toInt(&ok, 16);
    ui->lineEditBit->setText(QString::number(val, 2));
    ui->lineEditOct->setText(QString::number(val, 8));

}
