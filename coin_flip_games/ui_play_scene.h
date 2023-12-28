/********************************************************************************
** Form generated from reading UI file 'play_scene.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_SCENE_H
#define UI_PLAY_SCENE_H

#include <QtCore/QVariant>
#include <QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_play_scene
{
public:
    QAction *actionQuit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *play_scene)
    {
        if (play_scene->objectName().isEmpty())
            play_scene->setObjectName("play_scene");
        play_scene->resize(400, 300);
        actionQuit = new QAction(play_scene);
        actionQuit->setObjectName("actionQuit");
        centralwidget = new QWidget(play_scene);
        centralwidget->setObjectName("centralwidget");
        play_scene->setCentralWidget(centralwidget);
        menubar = new QMenuBar(play_scene);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 400, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        play_scene->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionQuit);

        retranslateUi(play_scene);

        QMetaObject::connectSlotsByName(play_scene);
    } // setupUi

    void retranslateUi(QMainWindow *play_scene)
    {
        play_scene->setWindowTitle(QCoreApplication::translate("play_scene", "play_scene", nullptr));
        actionQuit->setText(QCoreApplication::translate("play_scene", "\351\200\200\345\207\272", nullptr));
        menu->setTitle(QCoreApplication::translate("play_scene", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class play_scene: public Ui_play_scene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_SCENE_H
