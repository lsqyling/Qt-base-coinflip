/********************************************************************************
** Form generated from reading UI file 'paint_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_WIDGET_H
#define UI_PAINT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paint_widget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *paint_widget)
    {
        if (paint_widget->objectName().isEmpty())
            paint_widget->setObjectName("paint_widget");
        paint_widget->resize(823, 566);
        pushButton = new QPushButton(paint_widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 430, 93, 28));

        retranslateUi(paint_widget);

        QMetaObject::connectSlotsByName(paint_widget);
    } // setupUi

    void retranslateUi(QWidget *paint_widget)
    {
        paint_widget->setWindowTitle(QCoreApplication::translate("paint_widget", "paint_widget", nullptr));
        pushButton->setText(QCoreApplication::translate("paint_widget", "\347\247\273\345\212\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paint_widget: public Ui_paint_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_WIDGET_H
