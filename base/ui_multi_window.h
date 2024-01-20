/********************************************************************************
** Form generated from reading UI file 'multi_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTI_WINDOW_H
#define UI_MULTI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_multi_window
{
public:
    QAction *actionWidgetInside;
    QAction *actionWidgetDetached;
    QAction *actionQuit;
    QAction *actionMainWindowInside;
    QAction *actionMainWindowDetached;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *multi_window)
    {
        if (multi_window->objectName().isEmpty())
            multi_window->setObjectName(QString::fromUtf8("multi_window"));
        multi_window->resize(961, 641);
        actionWidgetInside = new QAction(multi_window);
        actionWidgetInside->setObjectName(QString::fromUtf8("actionWidgetInside"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon_multi_window/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionWidgetInside->setIcon(icon);
        actionWidgetDetached = new QAction(multi_window);
        actionWidgetDetached->setObjectName(QString::fromUtf8("actionWidgetDetached"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icon_multi_window/804.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionWidgetDetached->setIcon(icon1);
        actionQuit = new QAction(multi_window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icon_multi_window/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionMainWindowInside = new QAction(multi_window);
        actionMainWindowInside->setObjectName(QString::fromUtf8("actionMainWindowInside"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icon_multi_window/2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMainWindowInside->setIcon(icon3);
        actionMainWindowDetached = new QAction(multi_window);
        actionMainWindowDetached->setObjectName(QString::fromUtf8("actionMainWindowDetached"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icon_multi_window/3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionMainWindowDetached->setIcon(icon4);
        centralwidget = new QWidget(multi_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(220, 90, 391, 231));
        tabWidget->setTabsClosable(true);
        multi_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(multi_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        multi_window->setStatusBar(statusbar);
        toolBar = new QToolBar(multi_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        multi_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionWidgetInside);
        toolBar->addAction(actionWidgetDetached);
        toolBar->addAction(actionMainWindowInside);
        toolBar->addAction(actionMainWindowDetached);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(multi_window);
        QObject::connect(actionQuit, SIGNAL(triggered()), multi_window, SLOT(close()));

        QMetaObject::connectSlotsByName(multi_window);
    } // setupUi

    void retranslateUi(QMainWindow *multi_window)
    {
        multi_window->setWindowTitle(QCoreApplication::translate("multi_window", "multi_window", nullptr));
        actionWidgetInside->setText(QCoreApplication::translate("multi_window", "\345\265\214\345\205\245\345\274\217Widget", nullptr));
#if QT_CONFIG(tooltip)
        actionWidgetInside->setToolTip(QCoreApplication::translate("multi_window", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWidgetDetached->setText(QCoreApplication::translate("multi_window", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", nullptr));
        actionQuit->setText(QCoreApplication::translate("multi_window", "\351\200\200\345\207\272", nullptr));
        actionMainWindowInside->setText(QCoreApplication::translate("multi_window", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
        actionMainWindowDetached->setText(QCoreApplication::translate("multi_window", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("multi_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class multi_window: public Ui_multi_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTI_WINDOW_H
