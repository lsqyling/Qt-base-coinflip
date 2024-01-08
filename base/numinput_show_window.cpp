//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_numinput_show_window.h" resolved

#include "numinput_show_window.h"
#include "ui_numinput_show_window.h"


numinput_show_window::numinput_show_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::numinput_show_window)
{
    ui->setupUi(this);
    this->setWindowTitle("数值输入和显示Misc");

    on_horizontal_slider_rgb();
    on_horizontal_slider_H();
    on_vertical_slider_V();
    on_dial_value_changed();
    on_radio_button_checked();

}

numinput_show_window::~numinput_show_window()
{
    delete ui;
}

void numinput_show_window::on_horizontal_slider_rgb()
{
    connect(ui->horizontalSliderRed, qOverload<int>(&QSlider::valueChanged),
            [=, this](int value) {
                QColor color;
                QPalette plt = ui->textEdit->palette();
                color.setRed(value);
                plt.setColor(QPalette::Base, color);
                ui->textEdit->setPalette(plt);
            });

    connect(ui->horizontalSliderGreen, qOverload<int>(&QSlider::valueChanged),
            [=, this](int value) {
                QColor color;
                QPalette plt = ui->textEdit->palette();
                color.setGreen(value);
                plt.setColor(QPalette::Base, color);
                ui->textEdit->setPalette(plt);
            });

    connect(ui->horizontalSliderBlue, qOverload<int>(&QSlider::valueChanged),
            [=, this](int value) {
                QColor color;
                QPalette plt = ui->textEdit->palette();
                color.setBlue(value);
                plt.setColor(QPalette::Base, color);
                ui->textEdit->setPalette(plt);
            });
    connect(ui->horizontalSliderAlpha, qOverload<int>(&QSlider::valueChanged),
            [=, this](int value) {
                QColor color;
                QPalette plt = ui->textEdit->palette();
                color.setAlpha(value);
                plt.setColor(QPalette::Base, color);
                ui->textEdit->setPalette(plt);
            });


}

void numinput_show_window::on_horizontal_slider_H()
{
    connect(ui->horizontalSliderH, qOverload<int>(&QSlider::valueChanged),
            [=, this](int value) {
        ui->progressBarH->setValue(value);
        ui->horizontalScrollBarH->setValue(value);
    });
}

void numinput_show_window::on_vertical_slider_V()
{
    connect(ui->verticalSliderV, qOverload<int>(&QSlider::valueChanged),
            [=, this](int value) {
        ui->progressBarV->setValue(value);
        ui->verticalScrollBarV->setValue(value);
    });

}

void numinput_show_window::on_dial_value_changed()
{
    connect(ui->dialDisplay, qOverload<int>(&QDial::valueChanged),
            [=, this](int value) {
        ui->lcdNumber->display(value);
    });
}

void numinput_show_window::on_radio_button_checked()
{
    connect(ui->radioButtonDec, &QRadioButton::clicked,
            [=, this] {
                ui->lcdNumber->setDecMode();
            });
    connect(ui->radioButtonBit, &QRadioButton::clicked,
            [=, this] {
                ui->lcdNumber->setDigitCount(4);
                ui->lcdNumber->setBinMode();
            });
    connect(ui->radioButtonOct, &QRadioButton::clicked,
            [=, this] {
                ui->lcdNumber->setOctMode();
            });
    connect(ui->radioButtonHex, &QRadioButton::clicked,
            [=, this] {
                ui->lcdNumber->setHexMode();
            });

}
