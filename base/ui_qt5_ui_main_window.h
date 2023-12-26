/********************************************************************************
** Form generated from reading UI file 'qt5_ui_main_window.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT5_UI_MAIN_WINDOW_H
#define UI_QT5_UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt5_ui_main_window
{
public:
    QAction *actionItem;
    QAction *actionNew;
    QAction *actionSave;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuopen;
    QMenu *menueidt;
    QMenu *menuhelp;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *qt5_ui_main_window)
    {
        if (qt5_ui_main_window->objectName().isEmpty())
            qt5_ui_main_window->setObjectName("qt5_ui_main_window");
        qt5_ui_main_window->resize(580, 496);
        actionItem = new QAction(qt5_ui_main_window);
        actionItem->setObjectName("actionItem");
        actionNew = new QAction(qt5_ui_main_window);
        actionNew->setObjectName("actionNew");
        actionSave = new QAction(qt5_ui_main_window);
        actionSave->setObjectName("actionSave");
        centralwidget = new QWidget(qt5_ui_main_window);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(-7, 0, 481, 431));
        qt5_ui_main_window->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(qt5_ui_main_window);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 580, 22));
        menuopen = new QMenu(menuBar);
        menuopen->setObjectName("menuopen");
        menueidt = new QMenu(menuBar);
        menueidt->setObjectName("menueidt");
        menuhelp = new QMenu(menuBar);
        menuhelp->setObjectName("menuhelp");
        qt5_ui_main_window->setMenuBar(menuBar);
        toolBar = new QToolBar(qt5_ui_main_window);
        toolBar->setObjectName("toolBar");
        qt5_ui_main_window->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(qt5_ui_main_window);
        toolBar_2->setObjectName("toolBar_2");
        qt5_ui_main_window->addToolBar(Qt::TopToolBarArea, toolBar_2);
        statusBar = new QStatusBar(qt5_ui_main_window);
        statusBar->setObjectName("statusBar");
        qt5_ui_main_window->setStatusBar(statusBar);
        dockWidget = new QDockWidget(qt5_ui_main_window);
        dockWidget->setObjectName("dockWidget");
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        dockWidget->setWidget(dockWidgetContents);
        qt5_ui_main_window->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menuBar->addAction(menuopen->menuAction());
        menuBar->addAction(menueidt->menuAction());
        menuBar->addAction(menuhelp->menuAction());
        menuopen->addAction(actionItem);
        menuopen->addAction(actionNew);
        menuopen->addAction(actionSave);
        menueidt->addSeparator();
        menueidt->addSeparator();
        menueidt->addSeparator();
        menueidt->addSeparator();

        retranslateUi(qt5_ui_main_window);

        QMetaObject::connectSlotsByName(qt5_ui_main_window);
    } // setupUi

    void retranslateUi(QMainWindow *qt5_ui_main_window)
    {
        qt5_ui_main_window->setWindowTitle(QCoreApplication::translate("qt5_ui_main_window", "qt5_ui_main_window", nullptr));
        actionItem->setText(QCoreApplication::translate("qt5_ui_main_window", "\351\241\271\347\233\256", nullptr));
        actionNew->setText(QCoreApplication::translate("qt5_ui_main_window", "New", nullptr));
        actionSave->setText(QCoreApplication::translate("qt5_ui_main_window", "Save", nullptr));
        menuopen->setTitle(QCoreApplication::translate("qt5_ui_main_window", "\346\211\223\345\274\200", nullptr));
        menueidt->setTitle(QCoreApplication::translate("qt5_ui_main_window", "eidt", nullptr));
        menuhelp->setTitle(QCoreApplication::translate("qt5_ui_main_window", "help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("qt5_ui_main_window", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("qt5_ui_main_window", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qt5_ui_main_window: public Ui_qt5_ui_main_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT5_UI_MAIN_WINDOW_H
