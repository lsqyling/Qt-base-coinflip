//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_pen_dialog.h" resolved
#include <QColorDialog>
#include "pen_dialog.h"
#include "ui_pen_dialog.h"


pen_dialog::pen_dialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::pen_dialog)
{
    ui->setupUi(this);

    ui->comboBoxLineType->addItem("NoPen", 0);
    ui->comboBoxLineType->addItem("SolidLine", 1);
    ui->comboBoxLineType->addItem("DashLine", 2);
    ui->comboBoxLineType->addItem("DotLine", 3);
    ui->comboBoxLineType->addItem("DashDotLine", 4);
    ui->comboBoxLineType->addItem("DashDotDotLine", 5);
    ui->comboBoxLineType->addItem("CustomDashLine", 6);

    on_button_color();






}

pen_dialog::~pen_dialog()
{
    delete ui;
}

QPen pen_dialog::getpen()
{
    pen_.setStyle(Qt::PenStyle(ui->comboBoxLineType->currentIndex()));
    pen_.setWidth(ui->spinBoxLineWidth->value());
    auto color = ui->pushButtonColor->palette().color(QPalette::Button);
    pen_.setColor(color);
    return pen_;
}

void pen_dialog::setpen(QPen pen)
{
    pen_ = pen;
    ui->spinBoxLineWidth->setValue(pen.width());
    int index = static_cast<int>(pen.style());
    ui->comboBoxLineType->setCurrentIndex(index);
    ui->pushButtonColor->setAutoFillBackground(true);
    QColor color = pen.color();
    auto str = QString::asprintf("background-color: rgb(%d,%d,%d)",
                                 color.red(), color.green(), color.blue());
    ui->pushButtonColor->setStyleSheet(str);

}

void pen_dialog::on_button_color()
{
    connect(ui->pushButtonColor, &QPushButton::clicked,
            [=, this] {
        QColor color = pen_.color();
        color = QColorDialog::getColor(color);
        if (color.isValid())
        {
            auto str = QString::asprintf("background-color: rgb(%d,%d,%d)",
                                         color.red(), color.green(), color.blue());
            ui->pushButtonColor->setStyleSheet(str);
        }
    });
}

QPen pen_dialog::get_pen(QPen init, bool &ok)
{
    pen_dialog dialog;
    dialog.setpen(init);
    QPen pen;
    int ret = dialog.exec();
    if (ret == QDialog::Accepted)
    {
        pen = dialog.getpen();
        ok = true;
    }
    else
    {
        pen = init;
        ok = false;
    }
    return pen;
}
