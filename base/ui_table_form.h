/********************************************************************************
** Form generated from reading UI file 'table_form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_FORM_H
#define UI_TABLE_FORM_H

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

class Ui_table_form
{
public:
    QAction *actionSheetSize;
    QAction *actionSheetHeader;
    QAction *actionClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *table_form)
    {
        if (table_form->objectName().isEmpty())
            table_form->setObjectName(QString::fromUtf8("table_form"));
        table_form->resize(1033, 600);
        actionSheetSize = new QAction(table_form);
        actionSheetSize->setObjectName(QString::fromUtf8("actionSheetSize"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon_multi_window/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionSheetSize->setIcon(icon);
        actionSheetHeader = new QAction(table_form);
        actionSheetHeader->setObjectName(QString::fromUtf8("actionSheetHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icon_multi_window/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionSheetHeader->setIcon(icon1);
        actionClose = new QAction(table_form);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icon_multi_window/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        centralwidget = new QWidget(table_form);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        table_form->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(table_form);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        table_form->setStatusBar(statusbar);
        toolBar = new QToolBar(table_form);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        table_form->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionSheetSize);
        toolBar->addAction(actionSheetHeader);
        toolBar->addSeparator();
        toolBar->addAction(actionClose);

        retranslateUi(table_form);

        QMetaObject::connectSlotsByName(table_form);
    } // setupUi

    void retranslateUi(QMainWindow *table_form)
    {
        table_form->setWindowTitle(QCoreApplication::translate("table_form", "table_form", nullptr));
        actionSheetSize->setText(QCoreApplication::translate("table_form", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
        actionSheetHeader->setText(QCoreApplication::translate("table_form", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
        actionClose->setText(QCoreApplication::translate("table_form", "\345\205\263\351\227\255", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("table_form", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class table_form: public Ui_table_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_FORM_H
