//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_small_widget.h" resolved

#include "small_widget.h"
#include "ui_small_widget.h"


small_widget::small_widget(QWidget *parent) :
        QWidget(parent), ui(new Ui::small_widget)
{
    ui->setupUi(this);
//    spinbox 移动

    void (QSpinBox:: *spin_signal)(int) = &QSpinBox::valueChanged;
    connect(ui->spinBox, spin_signal, ui->horizontalScrollBar, &QScrollBar::setValue);
//    horizontal scroll bar
    connect(ui->horizontalScrollBar, &QScrollBar::valueChanged, ui->spinBox, &QSpinBox::setValue);

}


int small_widget::get_value() const
{
    return ui->spinBox->value();
}

void small_widget::set_value(int num)
{
    ui->spinBox->setValue(num);
}

small_widget::~small_widget()
{
    delete ui;
}
