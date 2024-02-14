/********************************************************************************
** Form generated from reading UI file 'mdi_app_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDI_APP_WINDOW_H
#define UI_MDI_APP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mdi_app_window
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionCloseAll;
    QAction *actionFont;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionMDI;
    QAction *actionCascade;
    QAction *actionTiles;
    QAction *actionQuit;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *mdi_app_window)
    {
        if (mdi_app_window->objectName().isEmpty())
            mdi_app_window->setObjectName(QString::fromUtf8("mdi_app_window"));
        mdi_app_window->resize(1066, 620);
        actionNew = new QAction(mdi_app_window);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/mdi_icon/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(mdi_app_window);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/mdi_icon/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionCloseAll = new QAction(mdi_app_window);
        actionCloseAll->setObjectName(QString::fromUtf8("actionCloseAll"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/mdi_icon/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseAll->setIcon(icon2);
        actionFont = new QAction(mdi_app_window);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        actionFont->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/mdi_icon/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon3);
        actionCut = new QAction(mdi_app_window);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCut->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/mdi_icon/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionCopy = new QAction(mdi_app_window);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCopy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/mdi_icon/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(mdi_app_window);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/mdi_icon/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionMDI = new QAction(mdi_app_window);
        actionMDI->setObjectName(QString::fromUtf8("actionMDI"));
        actionMDI->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/mdi_icon/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionMDI->setIcon(icon7);
        actionCascade = new QAction(mdi_app_window);
        actionCascade->setObjectName(QString::fromUtf8("actionCascade"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/mdi_icon/400.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCascade->setIcon(icon8);
        actionTiles = new QAction(mdi_app_window);
        actionTiles->setObjectName(QString::fromUtf8("actionTiles"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/mdi_icon/406.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionTiles->setIcon(icon9);
        actionQuit = new QAction(mdi_app_window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/mdi_icon/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon10);
        centralwidget = new QWidget(mdi_app_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setGeometry(QRect(360, 130, 200, 160));
        mdi_app_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(mdi_app_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mdi_app_window->setStatusBar(statusbar);
        toolBar = new QToolBar(mdi_app_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mdi_app_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionCloseAll);
        toolBar->addSeparator();
        toolBar->addAction(actionFont);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionMDI);
        toolBar->addAction(actionCascade);
        toolBar->addAction(actionTiles);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(mdi_app_window);
        QObject::connect(actionQuit, SIGNAL(triggered()), mdi_app_window, SLOT(close()));

        QMetaObject::connectSlotsByName(mdi_app_window);
    } // setupUi

    void retranslateUi(QMainWindow *mdi_app_window)
    {
        mdi_app_window->setWindowTitle(QCoreApplication::translate("mdi_app_window", "mdi_app_window", nullptr));
        actionNew->setText(QCoreApplication::translate("mdi_app_window", "\346\226\260\345\273\272\346\226\207\346\241\243", nullptr));
        actionOpen->setText(QCoreApplication::translate("mdi_app_window", "\346\211\223\345\274\200\346\226\207\346\241\243", nullptr));
        actionCloseAll->setText(QCoreApplication::translate("mdi_app_window", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
        actionFont->setText(QCoreApplication::translate("mdi_app_window", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
        actionCut->setText(QCoreApplication::translate("mdi_app_window", "\345\211\252\350\264\264", nullptr));
        actionCopy->setText(QCoreApplication::translate("mdi_app_window", "\345\244\215\345\210\266", nullptr));
        actionPaste->setText(QCoreApplication::translate("mdi_app_window", "\347\262\230\350\264\264", nullptr));
        actionMDI->setText(QCoreApplication::translate("mdi_app_window", "MDI\346\250\241\345\274\217", nullptr));
        actionCascade->setText(QCoreApplication::translate("mdi_app_window", "\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
        actionTiles->setText(QCoreApplication::translate("mdi_app_window", "\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
        actionQuit->setText(QCoreApplication::translate("mdi_app_window", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("mdi_app_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mdi_app_window: public Ui_mdi_app_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDI_APP_WINDOW_H
