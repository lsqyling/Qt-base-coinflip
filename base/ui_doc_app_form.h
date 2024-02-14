/********************************************************************************
** Form generated from reading UI file 'doc_app_form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOC_APP_FORM_H
#define UI_DOC_APP_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doc_app_form
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *doc_app_form)
    {
        if (doc_app_form->objectName().isEmpty())
            doc_app_form->setObjectName(QString::fromUtf8("doc_app_form"));
        doc_app_form->resize(895, 556);
        gridLayout = new QGridLayout(doc_app_form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(doc_app_form);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);


        retranslateUi(doc_app_form);

        QMetaObject::connectSlotsByName(doc_app_form);
    } // setupUi

    void retranslateUi(QWidget *doc_app_form)
    {
        doc_app_form->setWindowTitle(QCoreApplication::translate("doc_app_form", "doc_app_form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doc_app_form: public Ui_doc_app_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOC_APP_FORM_H
