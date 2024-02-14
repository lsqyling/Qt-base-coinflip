/********************************************************************************
** Form generated from reading UI file 'text_io_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_IO_WINDOW_H
#define UI_TEXT_IO_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_text_io_window
{
public:
    QAction *actionQTextStreamOpen;
    QAction *actionQTextStreamSave;
    QAction *actionQFileOpen;
    QAction *actionQFileSave;
    QAction *actionExit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEditStream;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEditFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *text_io_window)
    {
        if (text_io_window->objectName().isEmpty())
            text_io_window->setObjectName(QString::fromUtf8("text_io_window"));
        text_io_window->resize(1010, 621);
        actionQTextStreamOpen = new QAction(text_io_window);
        actionQTextStreamOpen->setObjectName(QString::fromUtf8("actionQTextStreamOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/text_io/804.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQTextStreamOpen->setIcon(icon);
        actionQTextStreamSave = new QAction(text_io_window);
        actionQTextStreamSave->setObjectName(QString::fromUtf8("actionQTextStreamSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/text_io/066.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actionQTextStreamSave->setIcon(icon1);
        actionQFileOpen = new QAction(text_io_window);
        actionQFileOpen->setObjectName(QString::fromUtf8("actionQFileOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/text_io/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQFileOpen->setIcon(icon2);
        actionQFileSave = new QAction(text_io_window);
        actionQFileSave->setObjectName(QString::fromUtf8("actionQFileSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/text_io/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQFileSave->setIcon(icon3);
        actionExit = new QAction(text_io_window);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/text_io/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        centralwidget = new QWidget(text_io_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(11, 11, 861, 461));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEditStream = new QPlainTextEdit(tab);
        plainTextEditStream->setObjectName(QString::fromUtf8("plainTextEditStream"));

        gridLayout->addWidget(plainTextEditStream, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEditFile = new QPlainTextEdit(tab_2);
        plainTextEditFile->setObjectName(QString::fromUtf8("plainTextEditFile"));

        gridLayout_2->addWidget(plainTextEditFile, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        text_io_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(text_io_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        text_io_window->setStatusBar(statusbar);
        toolBar = new QToolBar(text_io_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        text_io_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionQTextStreamOpen);
        toolBar->addAction(actionQTextStreamSave);
        toolBar->addAction(actionQFileOpen);
        toolBar->addAction(actionQFileSave);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);

        retranslateUi(text_io_window);
        QObject::connect(actionExit, SIGNAL(triggered()), text_io_window, SLOT(close()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(text_io_window);
    } // setupUi

    void retranslateUi(QMainWindow *text_io_window)
    {
        text_io_window->setWindowTitle(QCoreApplication::translate("text_io_window", "text_io_window", nullptr));
        actionQTextStreamOpen->setText(QCoreApplication::translate("text_io_window", "QTextStream\346\211\223\345\274\200", nullptr));
        actionQTextStreamSave->setText(QCoreApplication::translate("text_io_window", "QTextStream\344\277\235\345\255\230", nullptr));
        actionQFileOpen->setText(QCoreApplication::translate("text_io_window", "QFile\346\211\223\345\274\200", nullptr));
        actionQFileSave->setText(QCoreApplication::translate("text_io_window", "QFile\344\277\235\345\255\230", nullptr));
        actionExit->setText(QCoreApplication::translate("text_io_window", "\351\200\200\345\207\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("text_io_window", "QTextStream", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("text_io_window", "QFile", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("text_io_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class text_io_window: public Ui_text_io_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_IO_WINDOW_H
