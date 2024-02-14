/********************************************************************************
** Form generated from reading UI file 'five_pointed_star.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIVE_POINTED_STAR_H
#define UI_FIVE_POINTED_STAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_five_pointed_star
{
public:

    void setupUi(QWidget *five_pointed_star)
    {
        if (five_pointed_star->objectName().isEmpty())
            five_pointed_star->setObjectName(QString::fromUtf8("five_pointed_star"));
        five_pointed_star->resize(928, 568);

        retranslateUi(five_pointed_star);

        QMetaObject::connectSlotsByName(five_pointed_star);
    } // setupUi

    void retranslateUi(QWidget *five_pointed_star)
    {
        five_pointed_star->setWindowTitle(QCoreApplication::translate("five_pointed_star", "five_pointed_star", nullptr));
    } // retranslateUi

};

namespace Ui {
    class five_pointed_star: public Ui_five_pointed_star {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIVE_POINTED_STAR_H
