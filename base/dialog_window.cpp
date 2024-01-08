//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_dialog_window.h" resolved

#include "dialog_window.h"
#include "ui_dialog_window.h"


dialog_window::dialog_window(QWidget *parent) :
        QDialog(parent), ui(new Ui::dialog_window)
{
    ui->setupUi(this);
    connect(ui->radioButtonRed, &QRadioButton::clicked, this, &dialog_window::on_radio_button_selected);
    connect(ui->radioButtonGreen, &QRadioButton::clicked, this, &dialog_window::on_radio_button_selected);
    connect(ui->radioButtonBlue, &QRadioButton::clicked, this, &dialog_window::on_radio_button_selected);

    set_check_box_clicked();

}

dialog_window::~dialog_window()
{
    delete ui;
}

void dialog_window::on_radio_button_selected()
{

    QPalette plt = ui->plainTextEdit->palette();
    if (ui->radioButtonRed->isChecked())
        plt.setColor(QPalette::Text, Qt::red);
    else if (ui->radioButtonGreen->isChecked())
        plt.setColor(QPalette::Text, Qt::green);
    else if (ui->radioButtonBlue->isChecked())
        plt.setColor(QPalette::Text, Qt::blue);
    else
        plt.setColor(QPalette::Text, Qt::black);
    ui->plainTextEdit->setPalette(plt);
}

void dialog_window::set_check_box_clicked()
{
    connect(ui->checkBoxBold, &QCheckBox::clicked, [=, this]() {
        QFont font = ui->plainTextEdit->font();
        font.setBold(ui->checkBoxBold->isChecked());
        ui->plainTextEdit->setFont(font);
    });
    connect(ui->checkBoxUnderline, &QCheckBox::clicked, [=, this]() {
        QFont font = ui->plainTextEdit->font();
        font.setUnderline(ui->checkBoxUnderline->isChecked());
        ui->plainTextEdit->setFont(font);
    });
    connect(ui->checkBoxItalic, &QCheckBox::clicked, [=, this]() {
        QFont font = ui->plainTextEdit->font();
        font.setItalic(ui->checkBoxItalic->isChecked());
        ui->plainTextEdit->setFont(font);
    });
}
