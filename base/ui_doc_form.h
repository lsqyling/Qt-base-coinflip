/********************************************************************************
** Form generated from reading UI file 'doc_form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOC_FORM_H
#define UI_DOC_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doc_form
{
public:
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont;
    QAction *actionQuit;
    QAction *actionOpen;
    QAction *actionCut;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *doc_form)
    {
        if (doc_form->objectName().isEmpty())
            doc_form->setObjectName(QString::fromUtf8("doc_form"));
        doc_form->resize(755, 519);
        actionCopy = new QAction(doc_form);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon_multi_window/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon);
        actionPaste = new QAction(doc_form);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icon_multi_window/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon1);
        actionUndo = new QAction(doc_form);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icon_multi_window/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon2);
        actionRedo = new QAction(doc_form);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icon_multi_window/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon3);
        actionFont = new QAction(doc_form);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icon_multi_window/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon4);
        actionQuit = new QAction(doc_form);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icon_multi_window/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon5);
        actionOpen = new QAction(doc_form);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icon_multi_window/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon6);
        actionCut = new QAction(doc_form);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/icon_multi_window/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        plainTextEdit = new QPlainTextEdit(doc_form);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(280, 170, 104, 87));

        retranslateUi(doc_form);

        QMetaObject::connectSlotsByName(doc_form);
    } // setupUi

    void retranslateUi(QWidget *doc_form)
    {
        doc_form->setWindowTitle(QCoreApplication::translate("doc_form", "doc_form", nullptr));
        actionCopy->setText(QCoreApplication::translate("doc_form", "\345\244\215\345\210\266", nullptr));
        actionPaste->setText(QCoreApplication::translate("doc_form", "\347\262\230\350\264\264", nullptr));
        actionUndo->setText(QCoreApplication::translate("doc_form", "\346\222\244\351\224\200", nullptr));
        actionRedo->setText(QCoreApplication::translate("doc_form", "\351\207\215\345\201\232", nullptr));
        actionFont->setText(QCoreApplication::translate("doc_form", "\345\255\227\344\275\223", nullptr));
        actionQuit->setText(QCoreApplication::translate("doc_form", "\351\200\200\345\207\272", nullptr));
        actionOpen->setText(QCoreApplication::translate("doc_form", "\346\211\223\345\274\200", nullptr));
        actionCut->setText(QCoreApplication::translate("doc_form", "\345\211\252\350\264\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doc_form: public Ui_doc_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOC_FORM_H
