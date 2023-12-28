/********************************************************************************
** Form generated from reading UI file 'choose_level_scene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_LEVEL_SCENE_H
#define UI_CHOOSE_LEVEL_SCENE_H

#include <QtCore/QVariant>
#include <QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choose_level_scene
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *choose_level_scene)
    {
        if (choose_level_scene->objectName().isEmpty())
            choose_level_scene->setObjectName("choose_level_scene");
        choose_level_scene->resize(400, 300);
        actionQuit = new QAction(choose_level_scene);
        actionQuit->setObjectName("actionQuit");
        centralwidget = new QWidget(choose_level_scene);
        centralwidget->setObjectName("centralwidget");
        choose_level_scene->setCentralWidget(centralwidget);
        menubar = new QMenuBar(choose_level_scene);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        choose_level_scene->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionQuit);

        retranslateUi(choose_level_scene);

        QMetaObject::connectSlotsByName(choose_level_scene);
    } // setupUi

    void retranslateUi(QMainWindow *choose_level_scene)
    {
        choose_level_scene->setWindowTitle(QCoreApplication::translate("choose_level_scene", "choose_level_scene", nullptr));
        actionQuit->setText(QCoreApplication::translate("choose_level_scene", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("choose_level_scene", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choose_level_scene: public Ui_choose_level_scene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_LEVEL_SCENE_H
