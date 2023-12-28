/********************************************************************************
** Form generated from reading UI file 'main_scene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_SCENE_H
#define UI_MAIN_SCENE_H

#include <QtCore/QVariant>
#include <QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_scene
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *main_scene)
    {
        if (main_scene->objectName().isEmpty())
            main_scene->setObjectName("main_scene");
        main_scene->resize(557, 625);
        actionQuit = new QAction(main_scene);
        actionQuit->setObjectName("actionQuit");
        centralwidget = new QWidget(main_scene);
        centralwidget->setObjectName("centralwidget");
        main_scene->setCentralWidget(centralwidget);
        menubar = new QMenuBar(main_scene);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 557, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        main_scene->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionQuit);

        retranslateUi(main_scene);

        QMetaObject::connectSlotsByName(main_scene);
    } // setupUi

    void retranslateUi(QMainWindow *main_scene)
    {
        main_scene->setWindowTitle(QCoreApplication::translate("main_scene", "main_scene", nullptr));
        actionQuit->setText(QCoreApplication::translate("main_scene", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("main_scene", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_scene: public Ui_main_scene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_SCENE_H
