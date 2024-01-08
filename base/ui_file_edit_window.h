/********************************************************************************
** Form generated from reading UI file 'file_edit_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_EDIT_WINDOW_H
#define UI_FILE_EDIT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_file_edit_window
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionQuit;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionCopy;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionClear;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *file_edit_window)
    {
        if (file_edit_window->objectName().isEmpty())
            file_edit_window->setObjectName(QString::fromUtf8("file_edit_window"));
        file_edit_window->resize(1154, 596);
        actionNew = new QAction(file_edit_window);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/icon/new.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(file_edit_window);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/icon/open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionQuit = new QAction(file_edit_window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../images/icon/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionCut = new QAction(file_edit_window);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../images/icon/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionPaste = new QAction(file_edit_window);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../images/icon/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionCopy = new QAction(file_edit_window);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../images/icon/copy.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionBold = new QAction(file_edit_window);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../images/icon/bold.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon6);
        actionItalic = new QAction(file_edit_window);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../images/icon/italic.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon7);
        actionUnderline = new QAction(file_edit_window);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../images/icon/underline.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon8);
        actionClear = new QAction(file_edit_window);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../images/icon/clear.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon9);
        centralwidget = new QWidget(file_edit_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        file_edit_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(file_edit_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1154, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        file_edit_window->setMenuBar(menubar);
        statusbar = new QStatusBar(file_edit_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        file_edit_window->setStatusBar(statusbar);
        toolBar = new QToolBar(file_edit_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        toolBar->setLayoutDirection(Qt::LeftToRight);
        toolBar->setIconSize(QSize(30, 30));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        file_edit_window->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionQuit);
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionCut);
        menu_2->addAction(actionPaste);
        menu_2->addAction(actionClear);
        menu_3->addAction(actionBold);
        menu_3->addAction(actionItalic);
        menu_3->addAction(actionUnderline);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionQuit);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionClear);
        toolBar->addSeparator();
        toolBar->addAction(actionUnderline);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addSeparator();

        retranslateUi(file_edit_window);
        QObject::connect(actionQuit, SIGNAL(triggered()), file_edit_window, SLOT(close()));
        QObject::connect(actionCopy, SIGNAL(triggered()), textEdit, SLOT(copy()));
        QObject::connect(actionCut, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(actionPaste, SIGNAL(triggered()), textEdit, SLOT(paste()));
        QObject::connect(actionClear, SIGNAL(triggered()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(file_edit_window);
    } // setupUi

    void retranslateUi(QMainWindow *file_edit_window)
    {
        file_edit_window->setWindowTitle(QCoreApplication::translate("file_edit_window", "file_edit_window", nullptr));
        actionNew->setText(QCoreApplication::translate("file_edit_window", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("file_edit_window", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("file_edit_window", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("file_edit_window", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("file_edit_window", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("file_edit_window", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("file_edit_window", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("file_edit_window", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("file_edit_window", "Alt+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("file_edit_window", "\345\211\252\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("file_edit_window", "\345\211\252\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("file_edit_window", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("file_edit_window", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("file_edit_window", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("file_edit_window", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("file_edit_window", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actionCopy->setToolTip(QCoreApplication::translate("file_edit_window", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("file_edit_window", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("file_edit_window", "\347\262\227\344\275\223", nullptr));
        actionItalic->setText(QCoreApplication::translate("file_edit_window", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actionItalic->setToolTip(QCoreApplication::translate("file_edit_window", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actionUnderline->setText(QCoreApplication::translate("file_edit_window", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actionUnderline->setToolTip(QCoreApplication::translate("file_edit_window", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClear->setText(QCoreApplication::translate("file_edit_window", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("file_edit_window", "\346\270\205\347\251\272", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("file_edit_window", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("file_edit_window", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("file_edit_window", "\346\240\274\345\274\217", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("file_edit_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class file_edit_window: public Ui_file_edit_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_EDIT_WINDOW_H
