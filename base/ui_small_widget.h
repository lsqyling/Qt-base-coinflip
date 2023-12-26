/********************************************************************************
** Form generated from reading UI file 'small_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALL_WIDGET_H
#define UI_SMALL_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_small_widget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QScrollBar *horizontalScrollBar;

    void setupUi(QWidget *small_widget)
    {
        if (small_widget->objectName().isEmpty())
            small_widget->setObjectName("small_widget");
        small_widget->resize(432, 46);
        horizontalLayout = new QHBoxLayout(small_widget);
        horizontalLayout->setObjectName("horizontalLayout");
        spinBox = new QSpinBox(small_widget);
        spinBox->setObjectName("spinBox");

        horizontalLayout->addWidget(spinBox);

        horizontalScrollBar = new QScrollBar(small_widget);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalScrollBar);


        retranslateUi(small_widget);

        QMetaObject::connectSlotsByName(small_widget);
    } // setupUi

    void retranslateUi(QWidget *small_widget)
    {
        small_widget->setWindowTitle(QCoreApplication::translate("small_widget", "small_widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class small_widget: public Ui_small_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALL_WIDGET_H
