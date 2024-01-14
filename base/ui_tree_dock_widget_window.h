/********************************************************************************
** Form generated from reading UI file 'tree_dock_widget_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREE_DOCK_WIDGET_WINDOW_H
#define UI_TREE_DOCK_WIDGET_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tree_dock_widget_window
{
public:
    QAction *actionAddFolder;
    QAction *actionAddFile;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionZoomRealSize;
    QAction *actionZoomWidth;
    QAction *actionDelItem;
    QAction *actionQuit;
    QAction *actionZoomHigh;
    QAction *actionScanItems;
    QAction *actionDockVisible;
    QAction *actionDockFloat;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *tree_dock_widget_window)
    {
        if (tree_dock_widget_window->objectName().isEmpty())
            tree_dock_widget_window->setObjectName(QString::fromUtf8("tree_dock_widget_window"));
        tree_dock_widget_window->resize(1049, 594);
        actionAddFolder = new QAction(tree_dock_widget_window);
        actionAddFolder->setObjectName(QString::fromUtf8("actionAddFolder"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/icon/add_folder.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddFolder->setIcon(icon);
        actionAddFile = new QAction(tree_dock_widget_window);
        actionAddFile->setObjectName(QString::fromUtf8("actionAddFile"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/icon/add_files.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddFile->setIcon(icon1);
        actionZoomIn = new QAction(tree_dock_widget_window);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomIn->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../images/icon/zoom_in.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon2);
        actionZoomOut = new QAction(tree_dock_widget_window);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionZoomOut->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../images/icon/zoom_out.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon3);
        actionZoomRealSize = new QAction(tree_dock_widget_window);
        actionZoomRealSize->setObjectName(QString::fromUtf8("actionZoomRealSize"));
        actionZoomRealSize->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../images/icon/visible.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomRealSize->setIcon(icon4);
        actionZoomWidth = new QAction(tree_dock_widget_window);
        actionZoomWidth->setObjectName(QString::fromUtf8("actionZoomWidth"));
        actionZoomWidth->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../images/icon/zoom_width.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomWidth->setIcon(icon5);
        actionDelItem = new QAction(tree_dock_widget_window);
        actionDelItem->setObjectName(QString::fromUtf8("actionDelItem"));
        actionDelItem->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../images/icon/delete_item_red.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelItem->setIcon(icon6);
        actionQuit = new QAction(tree_dock_widget_window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../images/icon/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon7);
        actionZoomHigh = new QAction(tree_dock_widget_window);
        actionZoomHigh->setObjectName(QString::fromUtf8("actionZoomHigh"));
        actionZoomHigh->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../images/icon/zoom_hight.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomHigh->setIcon(icon8);
        actionScanItems = new QAction(tree_dock_widget_window);
        actionScanItems->setObjectName(QString::fromUtf8("actionScanItems"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../images/icon/traversal_node.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionScanItems->setIcon(icon9);
        actionDockVisible = new QAction(tree_dock_widget_window);
        actionDockVisible->setObjectName(QString::fromUtf8("actionDockVisible"));
        actionDockVisible->setCheckable(true);
        actionDockVisible->setChecked(true);
        actionDockVisible->setIcon(icon4);
        actionDockFloat = new QAction(tree_dock_widget_window);
        actionDockFloat->setObjectName(QString::fromUtf8("actionDockFloat"));
        actionDockFloat->setCheckable(true);
        actionDockFloat->setChecked(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../images/icon/window_float.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionDockFloat->setIcon(icon10);
        centralwidget = new QWidget(tree_dock_widget_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 759, 460));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        tree_dock_widget_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tree_dock_widget_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1049, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        tree_dock_widget_window->setMenuBar(menubar);
        statusbar = new QStatusBar(tree_dock_widget_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        tree_dock_widget_window->setStatusBar(statusbar);
        dockWidget = new QDockWidget(tree_dock_widget_window);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setIcon(0, icon);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        tree_dock_widget_window->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);
        toolBar = new QToolBar(tree_dock_widget_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tree_dock_widget_window->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionAddFolder);
        menu->addAction(actionAddFile);
        menu->addAction(actionDelItem);
        menu->addAction(actionScanItems);
        menu->addAction(actionQuit);
        menu_2->addAction(actionZoomIn);
        menu_2->addAction(actionZoomOut);
        menu_2->addAction(actionZoomRealSize);
        menu_2->addAction(actionZoomWidth);
        menu_2->addAction(actionZoomHigh);
        menu_2->addAction(actionDockVisible);
        menu_2->addAction(actionDockFloat);
        toolBar->addAction(actionAddFolder);
        toolBar->addAction(actionAddFile);
        toolBar->addAction(actionDelItem);
        toolBar->addAction(actionScanItems);
        toolBar->addSeparator();
        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionZoomOut);
        toolBar->addAction(actionZoomRealSize);
        toolBar->addAction(actionZoomWidth);
        toolBar->addAction(actionZoomHigh);
        toolBar->addSeparator();
        toolBar->addAction(actionDockFloat);
        toolBar->addAction(actionDockVisible);
        toolBar->addSeparator();
        toolBar->addAction(actionQuit);

        retranslateUi(tree_dock_widget_window);
        QObject::connect(actionQuit, SIGNAL(triggered()), tree_dock_widget_window, SLOT(close()));

        QMetaObject::connectSlotsByName(tree_dock_widget_window);
    } // setupUi

    void retranslateUi(QMainWindow *tree_dock_widget_window)
    {
        tree_dock_widget_window->setWindowTitle(QCoreApplication::translate("tree_dock_widget_window", "tree_dock_widget_window", nullptr));
        actionAddFolder->setText(QCoreApplication::translate("tree_dock_widget_window", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
        actionAddFile->setText(QCoreApplication::translate("tree_dock_widget_window", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("tree_dock_widget_window", "\346\224\276\345\244\247", nullptr));
        actionZoomOut->setText(QCoreApplication::translate("tree_dock_widget_window", "\347\274\251\345\260\217", nullptr));
        actionZoomRealSize->setText(QCoreApplication::translate("tree_dock_widget_window", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
        actionZoomWidth->setText(QCoreApplication::translate("tree_dock_widget_window", "\351\200\202\345\220\210\345\256\275\345\272\246", nullptr));
        actionDelItem->setText(QCoreApplication::translate("tree_dock_widget_window", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
        actionQuit->setText(QCoreApplication::translate("tree_dock_widget_window", "\351\200\200\345\207\272", nullptr));
        actionZoomHigh->setText(QCoreApplication::translate("tree_dock_widget_window", "\351\200\202\345\220\210\351\253\230\345\272\246", nullptr));
        actionScanItems->setText(QCoreApplication::translate("tree_dock_widget_window", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
        actionDockVisible->setText(QCoreApplication::translate("tree_dock_widget_window", "\347\252\227\344\275\223\345\217\257\350\247\201", nullptr));
        actionDockFloat->setText(QCoreApplication::translate("tree_dock_widget_window", "\347\252\227\344\275\223\346\265\256\345\212\250", nullptr));
        label->setText(QString());
        menu->setTitle(QCoreApplication::translate("tree_dock_widget_window", "\347\233\256\345\275\225\346\240\221", nullptr));
        menu_2->setTitle(QCoreApplication::translate("tree_dock_widget_window", "\350\247\206\345\233\276", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("tree_dock_widget_window", "\345\233\276\347\211\207\347\233\256\345\275\225\346\240\221", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("tree_dock_widget_window", "type", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("tree_dock_widget_window", "item", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("tree_dock_widget_window", "root", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("tree_dock_widget_window", "new Folder", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("tree_dock_widget_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tree_dock_widget_window: public Ui_tree_dock_widget_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREE_DOCK_WIDGET_WINDOW_H
