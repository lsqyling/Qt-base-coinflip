/********************************************************************************
** Form generated from reading UI file 'bin_io_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIN_IO_WINDOW_H
#define UI_BIN_IO_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bin_io_window
{
public:
    QAction *actionTableReset;
    QAction *actionStmOpen;
    QAction *actionStmSave;
    QAction *actionDataOpen;
    QAction *actionDataSave;
    QAction *actionQuit;
    QAction *actionTextOpen;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *bin_io_window)
    {
        if (bin_io_window->objectName().isEmpty())
            bin_io_window->setObjectName(QString::fromUtf8("bin_io_window"));
        bin_io_window->resize(1062, 601);
        actionTableReset = new QAction(bin_io_window);
        actionTableReset->setObjectName(QString::fromUtf8("actionTableReset"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/text_io/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionTableReset->setIcon(icon);
        actionStmOpen = new QAction(bin_io_window);
        actionStmOpen->setObjectName(QString::fromUtf8("actionStmOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/text_io/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionStmOpen->setIcon(icon1);
        actionStmSave = new QAction(bin_io_window);
        actionStmSave->setObjectName(QString::fromUtf8("actionStmSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/text_io/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionStmSave->setIcon(icon2);
        actionDataOpen = new QAction(bin_io_window);
        actionDataOpen->setObjectName(QString::fromUtf8("actionDataOpen"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/text_io/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionDataOpen->setIcon(icon3);
        actionDataSave = new QAction(bin_io_window);
        actionDataSave->setObjectName(QString::fromUtf8("actionDataSave"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/text_io/066.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actionDataSave->setIcon(icon4);
        actionQuit = new QAction(bin_io_window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/text_io/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon5);
        actionTextOpen = new QAction(bin_io_window);
        actionTextOpen->setObjectName(QString::fromUtf8("actionTextOpen"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/text_io/29.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionTextOpen->setIcon(icon6);
        centralwidget = new QWidget(bin_io_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(160, 80, 541, 301));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        bin_io_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(bin_io_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        bin_io_window->setStatusBar(statusbar);
        toolBar = new QToolBar(bin_io_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        bin_io_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionTableReset);
        toolBar->addAction(actionTextOpen);
        toolBar->addAction(actionStmOpen);
        toolBar->addAction(actionStmSave);
        toolBar->addAction(actionDataOpen);
        toolBar->addAction(actionDataSave);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(bin_io_window);
        QObject::connect(actionQuit, SIGNAL(triggered()), bin_io_window, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(bin_io_window);
    } // setupUi

    void retranslateUi(QMainWindow *bin_io_window)
    {
        bin_io_window->setWindowTitle(QCoreApplication::translate("bin_io_window", "bin_io_window", nullptr));
        actionTableReset->setText(QCoreApplication::translate("bin_io_window", "\350\241\250\346\240\274\345\244\215\344\275\215", nullptr));
        actionStmOpen->setText(QCoreApplication::translate("bin_io_window", "\346\211\223\345\274\200stm\346\226\207\344\273\266", nullptr));
        actionStmSave->setText(QCoreApplication::translate("bin_io_window", "\344\277\235\345\255\230stm\346\226\207\344\273\266", nullptr));
        actionDataOpen->setText(QCoreApplication::translate("bin_io_window", "\346\211\223\345\274\200data\346\226\207\344\273\266", nullptr));
        actionDataSave->setText(QCoreApplication::translate("bin_io_window", "\344\277\235\345\255\230data\346\226\207\344\273\266", nullptr));
        actionQuit->setText(QCoreApplication::translate("bin_io_window", "\351\200\200\345\207\272", nullptr));
        actionTextOpen->setText(QCoreApplication::translate("bin_io_window", "\346\211\223\345\274\200txt\346\226\207\344\273\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("bin_io_window", "\350\241\250\346\240\274\346\225\260\346\215\256\346\226\207\344\273\266", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("bin_io_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bin_io_window: public Ui_bin_io_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIN_IO_WINDOW_H
