/********************************************************************************
** Form generated from reading UI file 'listwidget_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWIDGET_WINDOW_H
#define UI_LISTWIDGET_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listwidget_window
{
public:
    QAction *actionListInit;
    QAction *actionListClear;
    QAction *actionListInsertItem;
    QAction *actionListAddItem;
    QAction *actionListDeleteItem;
    QAction *actionQuit;
    QAction *actionSelectItems;
    QAction *actionSelectAll;
    QAction *actionSelectNone;
    QAction *actionSelectInverse;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page_listWidget;
    QToolButton *toolButtonListInit;
    QToolButton *toolButtonListClear;
    QToolButton *toolButtonListInsert;
    QToolButton *toolButtonListAdd;
    QToolButton *toolButtonListDeleteItem;
    QWidget *page_treeWidget;
    QWidget *page_tableWidget;
    QTabWidget *tabWidget;
    QWidget *tab_listWidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QToolButton *toolButtonSelectItems;
    QToolButton *toolButtonSelectAll;
    QToolButton *toolButtonSelectNone;
    QToolButton *toolButtonSelectInvert;
    QListWidget *listWidget;
    QWidget *tab_treeWidget;
    QWidget *tab_tableWidget;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *listwidget_window)
    {
        if (listwidget_window->objectName().isEmpty())
            listwidget_window->setObjectName(QString::fromUtf8("listwidget_window"));
        listwidget_window->resize(984, 653);
        actionListInit = new QAction(listwidget_window);
        actionListInit->setObjectName(QString::fromUtf8("actionListInit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/icon/init_list.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionListInit->setIcon(icon);
        actionListClear = new QAction(listwidget_window);
        actionListClear->setObjectName(QString::fromUtf8("actionListClear"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/icon/clear_list.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionListClear->setIcon(icon1);
        actionListInsertItem = new QAction(listwidget_window);
        actionListInsertItem->setObjectName(QString::fromUtf8("actionListInsertItem"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../images/icon/insert_item.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionListInsertItem->setIcon(icon2);
        actionListAddItem = new QAction(listwidget_window);
        actionListAddItem->setObjectName(QString::fromUtf8("actionListAddItem"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../images/icon/add_item.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionListAddItem->setIcon(icon3);
        actionListDeleteItem = new QAction(listwidget_window);
        actionListDeleteItem->setObjectName(QString::fromUtf8("actionListDeleteItem"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../images/icon/delete_item.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionListDeleteItem->setIcon(icon4);
        actionQuit = new QAction(listwidget_window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../images/icon/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon5);
        actionSelectItems = new QAction(listwidget_window);
        actionSelectItems->setObjectName(QString::fromUtf8("actionSelectItems"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../images/icon/items_select.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectItems->setIcon(icon6);
        actionSelectAll = new QAction(listwidget_window);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        actionSelectNone = new QAction(listwidget_window);
        actionSelectNone->setObjectName(QString::fromUtf8("actionSelectNone"));
        actionSelectInverse = new QAction(listwidget_window);
        actionSelectInverse->setObjectName(QString::fromUtf8("actionSelectInverse"));
        centralwidget = new QWidget(listwidget_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(180, 0));
        toolBox->setMaximumSize(QSize(180, 16777215));
        page_listWidget = new QWidget();
        page_listWidget->setObjectName(QString::fromUtf8("page_listWidget"));
        page_listWidget->setGeometry(QRect(0, 0, 180, 456));
        toolButtonListInit = new QToolButton(page_listWidget);
        toolButtonListInit->setObjectName(QString::fromUtf8("toolButtonListInit"));
        toolButtonListInit->setGeometry(QRect(10, 0, 181, 31));
        toolButtonListInit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButtonListClear = new QToolButton(page_listWidget);
        toolButtonListClear->setObjectName(QString::fromUtf8("toolButtonListClear"));
        toolButtonListClear->setGeometry(QRect(10, 40, 181, 31));
        toolButtonListClear->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButtonListInsert = new QToolButton(page_listWidget);
        toolButtonListInsert->setObjectName(QString::fromUtf8("toolButtonListInsert"));
        toolButtonListInsert->setGeometry(QRect(10, 90, 181, 31));
        toolButtonListInsert->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButtonListAdd = new QToolButton(page_listWidget);
        toolButtonListAdd->setObjectName(QString::fromUtf8("toolButtonListAdd"));
        toolButtonListAdd->setGeometry(QRect(10, 150, 181, 31));
        toolButtonListAdd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButtonListDeleteItem = new QToolButton(page_listWidget);
        toolButtonListDeleteItem->setObjectName(QString::fromUtf8("toolButtonListDeleteItem"));
        toolButtonListDeleteItem->setGeometry(QRect(10, 200, 181, 31));
        toolButtonListDeleteItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolBox->addItem(page_listWidget, QString::fromUtf8("QListWidget\346\223\215\344\275\234"));
        page_treeWidget = new QWidget();
        page_treeWidget->setObjectName(QString::fromUtf8("page_treeWidget"));
        page_treeWidget->setGeometry(QRect(0, 0, 180, 456));
        toolBox->addItem(page_treeWidget, QString::fromUtf8("QTreeWidget\346\223\215\344\275\234"));
        page_tableWidget = new QWidget();
        page_tableWidget->setObjectName(QString::fromUtf8("page_tableWidget"));
        toolBox->addItem(page_tableWidget, QString::fromUtf8("QTableWidget\346\223\215\344\275\234"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_listWidget = new QWidget();
        tab_listWidget->setObjectName(QString::fromUtf8("tab_listWidget"));
        gridLayout_4 = new QGridLayout(tab_listWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_2 = new QGroupBox(tab_listWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_2->addWidget(checkBox, 0, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(tab_listWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        toolButtonSelectItems = new QToolButton(groupBox);
        toolButtonSelectItems->setObjectName(QString::fromUtf8("toolButtonSelectItems"));
        toolButtonSelectItems->setPopupMode(QToolButton::MenuButtonPopup);
        toolButtonSelectItems->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(toolButtonSelectItems, 0, 0, 1, 1);

        toolButtonSelectAll = new QToolButton(groupBox);
        toolButtonSelectAll->setObjectName(QString::fromUtf8("toolButtonSelectAll"));
        toolButtonSelectAll->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(toolButtonSelectAll, 0, 1, 1, 1);

        toolButtonSelectNone = new QToolButton(groupBox);
        toolButtonSelectNone->setObjectName(QString::fromUtf8("toolButtonSelectNone"));
        toolButtonSelectNone->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(toolButtonSelectNone, 0, 2, 1, 1);

        toolButtonSelectInvert = new QToolButton(groupBox);
        toolButtonSelectInvert->setObjectName(QString::fromUtf8("toolButtonSelectInvert"));
        toolButtonSelectInvert->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout_3->addWidget(toolButtonSelectInvert, 0, 3, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        listWidget = new QListWidget(tab_listWidget);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../images/icon/Item.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        __qlistwidgetitem->setIcon(icon7);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        __qlistwidgetitem1->setIcon(icon7);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout_4->addWidget(listWidget, 2, 0, 1, 1);

        tabWidget->addTab(tab_listWidget, QString());
        tab_treeWidget = new QWidget();
        tab_treeWidget->setObjectName(QString::fromUtf8("tab_treeWidget"));
        tabWidget->addTab(tab_treeWidget, QString());
        tab_tableWidget = new QWidget();
        tab_tableWidget->setObjectName(QString::fromUtf8("tab_tableWidget"));
        tabWidget->addTab(tab_tableWidget, QString());
        splitter->addWidget(tabWidget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        listwidget_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(listwidget_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 984, 26));
        listwidget_window->setMenuBar(menubar);
        toolBar = new QToolBar(listwidget_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        listwidget_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionListInit);
        toolBar->addAction(actionListClear);
        toolBar->addAction(actionListInsertItem);
        toolBar->addAction(actionListAddItem);
        toolBar->addAction(actionListDeleteItem);

        retranslateUi(listwidget_window);
        QObject::connect(actionQuit, SIGNAL(triggered()), listwidget_window, SLOT(close()));

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(listwidget_window);
    } // setupUi

    void retranslateUi(QMainWindow *listwidget_window)
    {
        listwidget_window->setWindowTitle(QCoreApplication::translate("listwidget_window", "listwidget_window", nullptr));
        actionListInit->setText(QCoreApplication::translate("listwidget_window", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        actionListClear->setText(QCoreApplication::translate("listwidget_window", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        actionListInsertItem->setText(QCoreApplication::translate("listwidget_window", "\346\217\222\345\205\245\351\241\271", nullptr));
        actionListAddItem->setText(QCoreApplication::translate("listwidget_window", "\346\267\273\345\212\240\351\241\271", nullptr));
        actionListDeleteItem->setText(QCoreApplication::translate("listwidget_window", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        actionQuit->setText(QCoreApplication::translate("listwidget_window", "\351\200\200\345\207\272", nullptr));
        actionSelectItems->setText(QCoreApplication::translate("listwidget_window", "\351\241\271\351\200\211\346\213\251", nullptr));
        actionSelectAll->setText(QCoreApplication::translate("listwidget_window", "\345\205\250\351\200\211", nullptr));
        actionSelectNone->setText(QCoreApplication::translate("listwidget_window", "\345\205\250\344\270\215\351\200\211", nullptr));
        actionSelectInverse->setText(QCoreApplication::translate("listwidget_window", "\345\217\215\351\200\211", nullptr));
        toolButtonListInit->setText(QCoreApplication::translate("listwidget_window", "InitList", nullptr));
        toolButtonListClear->setText(QCoreApplication::translate("listwidget_window", "ClearList", nullptr));
        toolButtonListInsert->setText(QCoreApplication::translate("listwidget_window", "InsertItem", nullptr));
        toolButtonListAdd->setText(QCoreApplication::translate("listwidget_window", "AddItem", nullptr));
        toolButtonListDeleteItem->setText(QCoreApplication::translate("listwidget_window", "DeleteItem", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_listWidget), QCoreApplication::translate("listwidget_window", "QListWidget\346\223\215\344\275\234", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_treeWidget), QCoreApplication::translate("listwidget_window", "QTreeWidget\346\223\215\344\275\234", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_tableWidget), QCoreApplication::translate("listwidget_window", "QTableWidget\346\223\215\344\275\234", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("listwidget_window", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        checkBox->setText(QCoreApplication::translate("listwidget_window", "\345\217\257\347\274\226\350\276\221", nullptr));
        groupBox->setTitle(QString());
        toolButtonSelectItems->setText(QCoreApplication::translate("listwidget_window", "SelectItem", nullptr));
        toolButtonSelectAll->setText(QCoreApplication::translate("listwidget_window", "SelectAll", nullptr));
        toolButtonSelectNone->setText(QCoreApplication::translate("listwidget_window", "SelectNone", nullptr));
        toolButtonSelectInvert->setText(QCoreApplication::translate("listwidget_window", "SelectInvert", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("listwidget_window", "Item1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("listwidget_window", "Item2", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_listWidget), QCoreApplication::translate("listwidget_window", "QListWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_treeWidget), QCoreApplication::translate("listwidget_window", "QTreeWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_tableWidget), QCoreApplication::translate("listwidget_window", "QTableWidget", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("listwidget_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listwidget_window: public Ui_listwidget_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWIDGET_WINDOW_H
