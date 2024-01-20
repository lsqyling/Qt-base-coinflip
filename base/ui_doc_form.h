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
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_doc_form
{
public:

    void setupUi(QWidget *doc_form)
    {
        if (doc_form->objectName().isEmpty())
            doc_form->setObjectName(QString::fromUtf8("doc_form"));
        doc_form->resize(400, 300);

        retranslateUi(doc_form);

        QMetaObject::connectSlotsByName(doc_form);
    } // setupUi

    void retranslateUi(QWidget *doc_form)
    {
        doc_form->setWindowTitle(QCoreApplication::translate("doc_form", "doc_form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doc_form: public Ui_doc_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOC_FORM_H
