//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_class_info_window.h" resolved

#include "class_info_window.h"
#include "ui_class_info_window.h"
#include "QMetaProperty"


class_info_window::class_info_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::class_info_window)
{
    ui->setupUi(this);

    ui->spinBoxBoy->setProperty("is_boy", true);
    ui->spinBoxGirl->setProperty("is_boy", false);

    boy_ = new person("张三");
    boy_->setProperty("score", 95);
    boy_->setProperty("age", 10);
    boy_->setProperty("sex", "boy");

    girl_ = new person("翠花");
    girl_->setProperty("score", 88);
    girl_->setProperty("age", 12);
    girl_->setProperty("sex", "girl");

    connect(boy_, &person::age_changed, this, &class_info_window::on_age_changed);
    connect(girl_, &person::age_changed, this, &class_info_window::on_age_changed);

    connect(ui->spinBoxGirl, qOverload<int>(&QSpinBox::valueChanged),
            this, qOverload<int>(&class_info_window::on_spin_box_value_changed));

    connect(ui->spinBoxBoy, qOverload<int>(&QSpinBox::valueChanged),
            this, qOverload<int>(&class_info_window::on_spin_box_value_changed));


}

class_info_window::~class_info_window()
{
    delete ui;
}


void class_info_window::on_pushButtonBoy_clicked()
{
    boy_->increment_age();

}

void class_info_window::on_pushButtonGirl_clicked()
{
    girl_->increment_age();

}

void class_info_window::on_pushButtonMeta_clicked()
{
    auto meta = girl_->metaObject();
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("======元对象信息======\n");
    ui->plainTextEdit->appendPlainText(QString("类命名：%1\n").arg(meta->className()));
    ui->plainTextEdit->appendPlainText("Property");
    for (int i = meta->propertyOffset(); i < meta->propertyCount(); ++i)
    {
        auto pro = meta->property(i);
        auto pname = pro.name();
        auto pvalue = girl_->property(pname).toString();
        ui->plainTextEdit->appendPlainText(QString("属性名称：%1，属性值：%2").arg(pname).arg(pvalue));
    }
    ui->plainTextEdit->appendPlainText("\nClassInfo");
    for (int i = meta->classInfoOffset(); i < meta->classInfoCount(); ++i)
    {
        auto info = meta->classInfo(i);
        ui->plainTextEdit->appendPlainText(QString("Name=%1, Value = %2").arg(info.name()).arg(info.value()));
    }
}

void class_info_window::on_spin_box_value_changed(int val)
{
    auto spin_box = qobject_cast<QSpinBox *>(sender());
    if (spin_box->property("is_boy").toBool())
        boy_->set_age(spin_box->value());
    else
        girl_->set_age(spin_box->value());
}

void class_info_window::on_age_changed(int val)
{
    auto *p = qobject_cast<person *>(sender());
    QString name = p->property("name").toString();
    QString sex = p->property("sex").toString();
    int age = p->age_of();
    ui->plainTextEdit->appendPlainText(name + ", " + sex + QString::asprintf(", 年龄=%d", age));
}
