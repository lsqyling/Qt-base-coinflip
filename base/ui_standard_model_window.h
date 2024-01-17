/********************************************************************************
** Form generated from reading UI file 'standard_model_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARD_MODEL_WINDOW_H
#define UI_STANDARD_MODEL_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_standard_model_window
{
public:
    QAction *actionOpenFiles;
    QAction *actionSaveFile;
    QAction *actionAddRow;
    QAction *actionInsertRow;
    QAction *actionDelRow;
    QAction *actionQuit;
    QAction *actionModelDataView;
    QAction *actionPosLeft;
    QAction *actionPosCenter;
    QAction *actionPosRight;
    QAction *actionFontBold;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *standard_model_window)
    {
        if (standard_model_window->objectName().isEmpty())
            standard_model_window->setObjectName(QString::fromUtf8("standard_model_window"));
        standard_model_window->resize(1096, 613);
        actionOpenFiles = new QAction(standard_model_window);
        actionOpenFiles->setObjectName(QString::fromUtf8("actionOpenFiles"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/icon/open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFiles->setIcon(icon);
        actionSaveFile = new QAction(standard_model_window);
        actionSaveFile->setObjectName(QString::fromUtf8("actionSaveFile"));
        actionSaveFile->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/icon/save.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveFile->setIcon(icon1);
        actionAddRow = new QAction(standard_model_window);
        actionAddRow->setObjectName(QString::fromUtf8("actionAddRow"));
        actionAddRow->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../images/icon/add_item.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddRow->setIcon(icon2);
        actionInsertRow = new QAction(standard_model_window);
        actionInsertRow->setObjectName(QString::fromUtf8("actionInsertRow"));
        actionInsertRow->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../images/icon/insert_item.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertRow->setIcon(icon3);
        actionDelRow = new QAction(standard_model_window);
        actionDelRow->setObjectName(QString::fromUtf8("actionDelRow"));
        actionDelRow->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../images/icon/delete_item_red.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelRow->setIcon(icon4);
        actionQuit = new QAction(standard_model_window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../images/icon/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon5);
        actionModelDataView = new QAction(standard_model_window);
        actionModelDataView->setObjectName(QString::fromUtf8("actionModelDataView"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../images/icon/data_view.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionModelDataView->setIcon(icon6);
        actionPosLeft = new QAction(standard_model_window);
        actionPosLeft->setObjectName(QString::fromUtf8("actionPosLeft"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../images/icon/Left.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionPosLeft->setIcon(icon7);
        actionPosCenter = new QAction(standard_model_window);
        actionPosCenter->setObjectName(QString::fromUtf8("actionPosCenter"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../images/icon/Center.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionPosCenter->setIcon(icon8);
        actionPosRight = new QAction(standard_model_window);
        actionPosRight->setObjectName(QString::fromUtf8("actionPosRight"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../images/icon/Right.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionPosRight->setIcon(icon9);
        actionFontBold = new QAction(standard_model_window);
        actionFontBold->setObjectName(QString::fromUtf8("actionFontBold"));
        actionFontBold->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../images/icon/Bold.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionFontBold->setIcon(icon10);
        centralwidget = new QWidget(standard_model_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        standard_model_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(standard_model_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        standard_model_window->setStatusBar(statusbar);
        toolBar = new QToolBar(standard_model_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        standard_model_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionOpenFiles);
        toolBar->addAction(actionSaveFile);
        toolBar->addAction(actionModelDataView);
        toolBar->addSeparator();
        toolBar->addAction(actionAddRow);
        toolBar->addAction(actionInsertRow);
        toolBar->addAction(actionDelRow);
        toolBar->addSeparator();
        toolBar->addAction(actionPosLeft);
        toolBar->addAction(actionPosCenter);
        toolBar->addAction(actionPosRight);
        toolBar->addAction(actionFontBold);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(standard_model_window);
        QObject::connect(actionQuit, SIGNAL(triggered()), standard_model_window, SLOT(close()));

        QMetaObject::connectSlotsByName(standard_model_window);
    } // setupUi

    void retranslateUi(QMainWindow *standard_model_window)
    {
        standard_model_window->setWindowTitle(QCoreApplication::translate("standard_model_window", "standard_model_window", nullptr));
        actionOpenFiles->setText(QCoreApplication::translate("standard_model_window", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actionSaveFile->setText(QCoreApplication::translate("standard_model_window", "\345\217\246\345\255\230\346\226\207\344\273\266", nullptr));
        actionAddRow->setText(QCoreApplication::translate("standard_model_window", "\346\267\273\345\212\240\350\241\214", nullptr));
        actionInsertRow->setText(QCoreApplication::translate("standard_model_window", "\346\217\222\345\205\245\350\241\214", nullptr));
        actionDelRow->setText(QCoreApplication::translate("standard_model_window", "\345\210\240\351\231\244\350\241\214", nullptr));
        actionQuit->setText(QCoreApplication::translate("standard_model_window", "\351\200\200\345\207\272", nullptr));
        actionModelDataView->setText(QCoreApplication::translate("standard_model_window", "\346\250\241\345\236\213\346\225\260\346\215\256\351\242\204\350\247\210", nullptr));
        actionPosLeft->setText(QCoreApplication::translate("standard_model_window", "\345\261\205\345\267\246", nullptr));
        actionPosCenter->setText(QCoreApplication::translate("standard_model_window", "\345\261\205\344\270\255", nullptr));
        actionPosRight->setText(QCoreApplication::translate("standard_model_window", "\345\261\205\345\217\263", nullptr));
        actionFontBold->setText(QCoreApplication::translate("standard_model_window", "\347\262\227\344\275\223", nullptr));
        groupBox->setTitle(QCoreApplication::translate("standard_model_window", "TableView", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("standard_model_window", "PlainEditText", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("standard_model_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class standard_model_window: public Ui_standard_model_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARD_MODEL_WINDOW_H
