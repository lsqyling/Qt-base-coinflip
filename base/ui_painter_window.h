/********************************************************************************
** Form generated from reading UI file 'painter_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTER_WINDOW_H
#define UI_PAINTER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_painter_window
{
public:

    void setupUi(QWidget *painter_window)
    {
        if (painter_window->objectName().isEmpty())
            painter_window->setObjectName(QString::fromUtf8("painter_window"));
        painter_window->resize(881, 531);

        retranslateUi(painter_window);

        QMetaObject::connectSlotsByName(painter_window);
    } // setupUi

    void retranslateUi(QWidget *painter_window)
    {
        painter_window->setWindowTitle(QCoreApplication::translate("painter_window", "painter_window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class painter_window: public Ui_painter_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER_WINDOW_H
