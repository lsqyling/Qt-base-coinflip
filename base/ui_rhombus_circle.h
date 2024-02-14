/********************************************************************************
** Form generated from reading UI file 'rhombus_circle.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RHOMBUS_CIRCLE_H
#define UI_RHOMBUS_CIRCLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rhombus_circle
{
public:

    void setupUi(QWidget *rhombus_circle)
    {
        if (rhombus_circle->objectName().isEmpty())
            rhombus_circle->setObjectName(QString::fromUtf8("rhombus_circle"));
        rhombus_circle->resize(400, 300);

        retranslateUi(rhombus_circle);

        QMetaObject::connectSlotsByName(rhombus_circle);
    } // setupUi

    void retranslateUi(QWidget *rhombus_circle)
    {
        rhombus_circle->setWindowTitle(QCoreApplication::translate("rhombus_circle", "rhombus_circle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rhombus_circle: public Ui_rhombus_circle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RHOMBUS_CIRCLE_H
