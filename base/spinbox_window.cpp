//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_spinbox_window.h" resolved

#include "spinbox_window.h"
#include "ui_spinbox_window.h"


spinbox_window::spinbox_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::spinbox_window)
{
    ui->setupUi(this);
    this->setWindowTitle("SpinBox测试");

    on_button_calc();
    on_spin_box_by_price_total();
    on_button_base_conversion();

}

spinbox_window::~spinbox_window()
{
    delete ui;
}

void spinbox_window::on_button_calc()
{
    connect(ui->pushButtonCalc, &QPushButton::clicked, [=, this] {
        int quantity = ui->spinBoxQuantity->value();
        double price = ui->doubleSpinBoxPrice->value();
        ui->doubleSpinBoxTotal->setValue(quantity * price);
    });
}

void spinbox_window::on_spin_box_by_price_total()
{
    connect(ui->spinBoxQuantity, qOverload<int>(&QSpinBox::valueChanged),
            [=, this](int value) {
        double price = ui->doubleSpinBoxPrice->value();
        ui->doubleSpinBoxTotal->setValue(price * value);
    });


    connect(ui->doubleSpinBoxPrice, qOverload<double>(&QDoubleSpinBox::valueChanged),
            [=, this](double value) {
        int quantity = ui->spinBoxQuantity->value();
        ui->doubleSpinBoxTotal->setValue(quantity * value);
    });


}

void spinbox_window::on_button_base_conversion()
{
    connect(ui->pushButtonDec, &QPushButton::clicked, [=, this] {
        int val = ui->spinBoxDec->value();
        ui->spinBoxBit->setValue(val);
        ui->spinBoxHex->setValue(val);
    });
    connect(ui->pushButtonBit, &QPushButton::clicked, [=, this] {
        int val = ui->spinBoxBit->value();
        ui->spinBoxDec->setValue(val);
        ui->spinBoxHex->setValue(val);
    });
    connect(ui->pushButtonHex, &QPushButton::clicked, [=, this] {
        int val = ui->spinBoxHex->value();
        ui->spinBoxBit->setValue(val);
        ui->spinBoxDec->setValue(val);
    });


}
