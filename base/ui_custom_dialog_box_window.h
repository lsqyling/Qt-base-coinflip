/********************************************************************************
** Form generated from reading UI file 'custom_dialog_box_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_DIALOG_BOX_WINDOW_H
#define UI_CUSTOM_DIALOG_BOX_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_custom_dialog_box_window
{
public:
    QAction *actionRowColNum;
    QAction *actionSheetHeaderTitle;
    QAction *actionCellPos;
    QAction *actionQuit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *custom_dialog_box_window)
    {
        if (custom_dialog_box_window->objectName().isEmpty())
            custom_dialog_box_window->setObjectName(QString::fromUtf8("custom_dialog_box_window"));
        custom_dialog_box_window->resize(920, 574);
        actionRowColNum = new QAction(custom_dialog_box_window);
        actionRowColNum->setObjectName(QString::fromUtf8("actionRowColNum"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/icon/row_col.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionRowColNum->setIcon(icon);
        actionSheetHeaderTitle = new QAction(custom_dialog_box_window);
        actionSheetHeaderTitle->setObjectName(QString::fromUtf8("actionSheetHeaderTitle"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/icon/sheet_header.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionSheetHeaderTitle->setIcon(icon1);
        actionCellPos = new QAction(custom_dialog_box_window);
        actionCellPos->setObjectName(QString::fromUtf8("actionCellPos"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../images/icon/cell_pos.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCellPos->setIcon(icon2);
        actionQuit = new QAction(custom_dialog_box_window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../images/icon/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon3);
        centralwidget = new QWidget(custom_dialog_box_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        custom_dialog_box_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(custom_dialog_box_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        custom_dialog_box_window->setStatusBar(statusbar);
        toolBar = new QToolBar(custom_dialog_box_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        custom_dialog_box_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionRowColNum);
        toolBar->addAction(actionSheetHeaderTitle);
        toolBar->addAction(actionCellPos);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(custom_dialog_box_window);
        QObject::connect(actionQuit, SIGNAL(triggered()), custom_dialog_box_window, SLOT(close()));

        QMetaObject::connectSlotsByName(custom_dialog_box_window);
    } // setupUi

    void retranslateUi(QMainWindow *custom_dialog_box_window)
    {
        custom_dialog_box_window->setWindowTitle(QCoreApplication::translate("custom_dialog_box_window", "custom_dialog_box_window", nullptr));
        actionRowColNum->setText(QCoreApplication::translate("custom_dialog_box_window", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
        actionSheetHeaderTitle->setText(QCoreApplication::translate("custom_dialog_box_window", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        actionCellPos->setText(QCoreApplication::translate("custom_dialog_box_window", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
        actionQuit->setText(QCoreApplication::translate("custom_dialog_box_window", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("custom_dialog_box_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class custom_dialog_box_window: public Ui_custom_dialog_box_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_DIALOG_BOX_WINDOW_H
