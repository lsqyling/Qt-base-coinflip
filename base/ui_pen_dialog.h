/********************************************************************************
** Form generated from reading UI file 'pen_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEN_DIALOG_H
#define UI_PEN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pen_dialog
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBoxLineType;
    QLabel *label_2;
    QSpinBox *spinBoxLineWidth;
    QLabel *label_3;
    QPushButton *pushButtonColor;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *pen_dialog)
    {
        if (pen_dialog->objectName().isEmpty())
            pen_dialog->setObjectName(QString::fromUtf8("pen_dialog"));
        pen_dialog->resize(365, 177);
        gridLayout_2 = new QGridLayout(pen_dialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(pen_dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBoxLineType = new QComboBox(groupBox);
        comboBoxLineType->setObjectName(QString::fromUtf8("comboBoxLineType"));

        gridLayout->addWidget(comboBoxLineType, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxLineWidth = new QSpinBox(groupBox);
        spinBoxLineWidth->setObjectName(QString::fromUtf8("spinBoxLineWidth"));

        gridLayout->addWidget(spinBoxLineWidth, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pushButtonColor = new QPushButton(groupBox);
        pushButtonColor->setObjectName(QString::fromUtf8("pushButtonColor"));

        gridLayout->addWidget(pushButtonColor, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonOK = new QPushButton(pen_dialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        verticalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(pen_dialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        verticalLayout->addWidget(pushButtonCancel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(pen_dialog);
        QObject::connect(pushButtonOK, SIGNAL(clicked()), pen_dialog, SLOT(accept()));
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), pen_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pen_dialog);
    } // setupUi

    void retranslateUi(QDialog *pen_dialog)
    {
        pen_dialog->setWindowTitle(QCoreApplication::translate("pen_dialog", "pen_dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("pen_dialog", "Pen\345\261\236\346\200\247", nullptr));
        label->setText(QCoreApplication::translate("pen_dialog", "\347\272\277\345\236\213", nullptr));
        label_2->setText(QCoreApplication::translate("pen_dialog", "\347\272\277\345\256\275", nullptr));
        label_3->setText(QCoreApplication::translate("pen_dialog", "\351\242\234\350\211\262", nullptr));
        pushButtonColor->setText(QString());
        pushButtonOK->setText(QCoreApplication::translate("pen_dialog", "\347\241\256\350\256\244", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("pen_dialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pen_dialog: public Ui_pen_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEN_DIALOG_H
