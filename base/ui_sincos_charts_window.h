/********************************************************************************
** Form generated from reading UI file 'sincos_charts_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINCOS_CHARTS_WINDOW_H
#define UI_SINCOS_CHARTS_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sincos_charts_window
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sincos_charts_window)
    {
        if (sincos_charts_window->objectName().isEmpty())
            sincos_charts_window->setObjectName(QString::fromUtf8("sincos_charts_window"));
        sincos_charts_window->resize(400, 300);
        centralwidget = new QWidget(sincos_charts_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sincos_charts_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sincos_charts_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 17));
        sincos_charts_window->setMenuBar(menubar);
        statusbar = new QStatusBar(sincos_charts_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sincos_charts_window->setStatusBar(statusbar);

        retranslateUi(sincos_charts_window);

        QMetaObject::connectSlotsByName(sincos_charts_window);
    } // setupUi

    void retranslateUi(QMainWindow *sincos_charts_window)
    {
        sincos_charts_window->setWindowTitle(QCoreApplication::translate("sincos_charts_window", "sincos_charts_window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sincos_charts_window: public Ui_sincos_charts_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINCOS_CHARTS_WINDOW_H
