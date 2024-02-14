/********************************************************************************
** Form generated from reading UI file 'paint_app_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_APP_WINDOW_H
#define UI_PAINT_APP_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <paint_graphic_view_impl.h>

QT_BEGIN_NAMESPACE

class Ui_paint_app_window
{
public:
    QAction *actionItemRect;
    QAction *actionItemEllipse;
    QAction *actionItemLine;
    QAction *actionItemCircle;
    QAction *actionItemTriangle;
    QAction *actionItemPolygon;
    QAction *actionItemText;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionRestore;
    QAction *actionRotateLeft;
    QAction *actionRotateRight;
    QAction *actionEditFront;
    QAction *actionEditBack;
    QAction *actionGroup;
    QAction *actionGroupBreak;
    QAction *actionEditDel;
    QAction *actionExit;
    QWidget *centralwidget;
    paint_graphic_view_impl *graphicsView;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBarDraw;

    void setupUi(QMainWindow *paint_app_window)
    {
        if (paint_app_window->objectName().isEmpty())
            paint_app_window->setObjectName(QString::fromUtf8("paint_app_window"));
        paint_app_window->resize(1087, 505);
        actionItemRect = new QAction(paint_app_window);
        actionItemRect->setObjectName(QString::fromUtf8("actionItemRect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/paint_app/RECTANGL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionItemRect->setIcon(icon);
        actionItemEllipse = new QAction(paint_app_window);
        actionItemEllipse->setObjectName(QString::fromUtf8("actionItemEllipse"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/paint_app/ELLIPSE.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionItemEllipse->setIcon(icon1);
        actionItemLine = new QAction(paint_app_window);
        actionItemLine->setObjectName(QString::fromUtf8("actionItemLine"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/paint_app/LINE.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionItemLine->setIcon(icon2);
        actionItemCircle = new QAction(paint_app_window);
        actionItemCircle->setObjectName(QString::fromUtf8("actionItemCircle"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/paint_app/ARC.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionItemCircle->setIcon(icon3);
        actionItemTriangle = new QAction(paint_app_window);
        actionItemTriangle->setObjectName(QString::fromUtf8("actionItemTriangle"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/paint_app/Icon1242.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionItemTriangle->setIcon(icon4);
        actionItemPolygon = new QAction(paint_app_window);
        actionItemPolygon->setObjectName(QString::fromUtf8("actionItemPolygon"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/paint_app/FREEFORM.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionItemPolygon->setIcon(icon5);
        actionItemText = new QAction(paint_app_window);
        actionItemText->setObjectName(QString::fromUtf8("actionItemText"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/paint_app/800.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionItemText->setIcon(icon6);
        actionZoomIn = new QAction(paint_app_window);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/paint_app/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon7);
        actionZoomOut = new QAction(paint_app_window);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/paint_app/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon8);
        actionRestore = new QAction(paint_app_window);
        actionRestore->setObjectName(QString::fromUtf8("actionRestore"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/paint_app/420.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionRestore->setIcon(icon9);
        actionRotateLeft = new QAction(paint_app_window);
        actionRotateLeft->setObjectName(QString::fromUtf8("actionRotateLeft"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/paint_app/rotateleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotateLeft->setIcon(icon10);
        actionRotateRight = new QAction(paint_app_window);
        actionRotateRight->setObjectName(QString::fromUtf8("actionRotateRight"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/paint_app/rotateright.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotateRight->setIcon(icon11);
        actionEditFront = new QAction(paint_app_window);
        actionEditFront->setObjectName(QString::fromUtf8("actionEditFront"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/paint_app/528.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditFront->setIcon(icon12);
        actionEditBack = new QAction(paint_app_window);
        actionEditBack->setObjectName(QString::fromUtf8("actionEditBack"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/paint_app/526.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditBack->setIcon(icon13);
        actionGroup = new QAction(paint_app_window);
        actionGroup->setObjectName(QString::fromUtf8("actionGroup"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/paint_app/UNGROUP.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroup->setIcon(icon14);
        actionGroupBreak = new QAction(paint_app_window);
        actionGroupBreak->setObjectName(QString::fromUtf8("actionGroupBreak"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/paint_app/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroupBreak->setIcon(icon15);
        actionEditDel = new QAction(paint_app_window);
        actionEditDel->setObjectName(QString::fromUtf8("actionEditDel"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/paint_app/108.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionEditDel->setIcon(icon16);
        actionExit = new QAction(paint_app_window);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/paint_app/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon17);
        centralwidget = new QWidget(paint_app_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new paint_graphic_view_impl(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(280, 70, 256, 192));
        paint_app_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(paint_app_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        paint_app_window->setStatusBar(statusbar);
        toolBar = new QToolBar(paint_app_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        paint_app_window->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBarDraw = new QToolBar(paint_app_window);
        toolBarDraw->setObjectName(QString::fromUtf8("toolBarDraw"));
        toolBarDraw->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        paint_app_window->addToolBar(Qt::LeftToolBarArea, toolBarDraw);

        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionZoomOut);
        toolBar->addAction(actionRestore);
        toolBar->addSeparator();
        toolBar->addAction(actionRotateLeft);
        toolBar->addAction(actionRotateRight);
        toolBar->addAction(actionEditFront);
        toolBar->addAction(actionEditBack);
        toolBar->addAction(actionGroup);
        toolBar->addAction(actionGroupBreak);
        toolBar->addSeparator();
        toolBar->addAction(actionEditDel);
        toolBar->addAction(actionExit);
        toolBarDraw->addAction(actionItemRect);
        toolBarDraw->addAction(actionItemEllipse);
        toolBarDraw->addAction(actionItemLine);
        toolBarDraw->addAction(actionItemCircle);
        toolBarDraw->addAction(actionItemTriangle);
        toolBarDraw->addAction(actionItemPolygon);
        toolBarDraw->addAction(actionItemText);

        retranslateUi(paint_app_window);
        QObject::connect(actionExit, SIGNAL(triggered()), paint_app_window, SLOT(close()));

        QMetaObject::connectSlotsByName(paint_app_window);
    } // setupUi

    void retranslateUi(QMainWindow *paint_app_window)
    {
        paint_app_window->setWindowTitle(QCoreApplication::translate("paint_app_window", "paint_app_window", nullptr));
        actionItemRect->setText(QCoreApplication::translate("paint_app_window", "\347\237\251\345\275\242", nullptr));
        actionItemEllipse->setText(QCoreApplication::translate("paint_app_window", "\346\244\255\345\234\206", nullptr));
        actionItemLine->setText(QCoreApplication::translate("paint_app_window", "\347\233\264\347\272\277", nullptr));
        actionItemCircle->setText(QCoreApplication::translate("paint_app_window", "\345\234\206\345\275\242", nullptr));
        actionItemTriangle->setText(QCoreApplication::translate("paint_app_window", "\344\270\211\350\247\222\345\275\242", nullptr));
        actionItemPolygon->setText(QCoreApplication::translate("paint_app_window", "\346\242\257\345\275\242", nullptr));
        actionItemText->setText(QCoreApplication::translate("paint_app_window", "\346\226\207\345\255\227", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("paint_app_window", "\346\224\276\345\244\247", nullptr));
        actionZoomOut->setText(QCoreApplication::translate("paint_app_window", "\347\274\251\345\260\217", nullptr));
        actionRestore->setText(QCoreApplication::translate("paint_app_window", "\346\201\242\345\244\215", nullptr));
        actionRotateLeft->setText(QCoreApplication::translate("paint_app_window", "\345\267\246\346\227\213", nullptr));
        actionRotateRight->setText(QCoreApplication::translate("paint_app_window", "\345\217\263\346\227\213", nullptr));
        actionEditFront->setText(QCoreApplication::translate("paint_app_window", "\345\211\215\347\275\256", nullptr));
        actionEditBack->setText(QCoreApplication::translate("paint_app_window", "\345\220\216\347\275\256", nullptr));
        actionGroup->setText(QCoreApplication::translate("paint_app_window", "\347\273\204\345\220\210", nullptr));
        actionGroupBreak->setText(QCoreApplication::translate("paint_app_window", "\346\211\223\346\225\243", nullptr));
        actionEditDel->setText(QCoreApplication::translate("paint_app_window", "\345\210\240\351\231\244", nullptr));
        actionExit->setText(QCoreApplication::translate("paint_app_window", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("paint_app_window", "toolBar", nullptr));
        toolBarDraw->setWindowTitle(QCoreApplication::translate("paint_app_window", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paint_app_window: public Ui_paint_app_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_APP_WINDOW_H
