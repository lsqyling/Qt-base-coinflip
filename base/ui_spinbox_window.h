/********************************************************************************
** Form generated from reading UI file 'spinbox_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPINBOX_WINDOW_H
#define UI_SPINBOX_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spinbox_window
{
public:
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSpinBox *spinBoxDec;
    QPushButton *pushButtonDec;
    QLabel *label_5;
    QSpinBox *spinBoxBit;
    QPushButton *pushButtonBit;
    QLabel *label_6;
    QSpinBox *spinBoxHex;
    QPushButton *pushButtonHex;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxQuantity;
    QLabel *label_2;
    QPushButton *pushButtonCalc;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBoxPrice;
    QDoubleSpinBox *doubleSpinBoxTotal;

    void setupUi(QWidget *spinbox_window)
    {
        if (spinbox_window->objectName().isEmpty())
            spinbox_window->setObjectName(QString::fromUtf8("spinbox_window"));
        spinbox_window->resize(809, 474);
        gridLayout_3 = new QGridLayout(spinbox_window);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 274, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(spinbox_window);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        spinBoxDec = new QSpinBox(spinbox_window);
        spinBoxDec->setObjectName(QString::fromUtf8("spinBoxDec"));
        spinBoxDec->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxDec->setMaximum(1000000000);

        gridLayout_2->addWidget(spinBoxDec, 0, 1, 1, 1);

        pushButtonDec = new QPushButton(spinbox_window);
        pushButtonDec->setObjectName(QString::fromUtf8("pushButtonDec"));

        gridLayout_2->addWidget(pushButtonDec, 0, 2, 1, 1);

        label_5 = new QLabel(spinbox_window);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        spinBoxBit = new QSpinBox(spinbox_window);
        spinBoxBit->setObjectName(QString::fromUtf8("spinBoxBit"));
        spinBoxBit->setMaximum(1000000000);
        spinBoxBit->setDisplayIntegerBase(2);

        gridLayout_2->addWidget(spinBoxBit, 1, 1, 1, 1);

        pushButtonBit = new QPushButton(spinbox_window);
        pushButtonBit->setObjectName(QString::fromUtf8("pushButtonBit"));

        gridLayout_2->addWidget(pushButtonBit, 1, 2, 1, 1);

        label_6 = new QLabel(spinbox_window);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        spinBoxHex = new QSpinBox(spinbox_window);
        spinBoxHex->setObjectName(QString::fromUtf8("spinBoxHex"));
        spinBoxHex->setMaximum(1000000000);
        spinBoxHex->setDisplayIntegerBase(16);

        gridLayout_2->addWidget(spinBoxHex, 2, 1, 1, 1);

        pushButtonHex = new QPushButton(spinbox_window);
        pushButtonHex->setObjectName(QString::fromUtf8("pushButtonHex"));

        gridLayout_2->addWidget(pushButtonHex, 2, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(spinbox_window);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxQuantity = new QSpinBox(spinbox_window);
        spinBoxQuantity->setObjectName(QString::fromUtf8("spinBoxQuantity"));

        gridLayout->addWidget(spinBoxQuantity, 0, 1, 1, 1);

        label_2 = new QLabel(spinbox_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        pushButtonCalc = new QPushButton(spinbox_window);
        pushButtonCalc->setObjectName(QString::fromUtf8("pushButtonCalc"));

        gridLayout->addWidget(pushButtonCalc, 1, 0, 1, 2);

        label_3 = new QLabel(spinbox_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        doubleSpinBoxPrice = new QDoubleSpinBox(spinbox_window);
        doubleSpinBoxPrice->setObjectName(QString::fromUtf8("doubleSpinBoxPrice"));
        doubleSpinBoxPrice->setMaximum(100000000.000000000000000);

        gridLayout->addWidget(doubleSpinBoxPrice, 0, 3, 1, 1);

        doubleSpinBoxTotal = new QDoubleSpinBox(spinbox_window);
        doubleSpinBoxTotal->setObjectName(QString::fromUtf8("doubleSpinBoxTotal"));
        doubleSpinBoxTotal->setMaximum(10000000000.000000000000000);

        gridLayout->addWidget(doubleSpinBoxTotal, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(spinbox_window);

        QMetaObject::connectSlotsByName(spinbox_window);
    } // setupUi

    void retranslateUi(QWidget *spinbox_window)
    {
        spinbox_window->setWindowTitle(QCoreApplication::translate("spinbox_window", "spinbox_window", nullptr));
        label_4->setText(QCoreApplication::translate("spinbox_window", "\345\215\201\350\277\233\345\210\266\357\274\232", nullptr));
        spinBoxDec->setPrefix(QCoreApplication::translate("spinbox_window", "Dec", nullptr));
        pushButtonDec->setText(QCoreApplication::translate("spinbox_window", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("spinbox_window", "\344\272\214\350\277\233\345\210\266\357\274\232", nullptr));
        spinBoxBit->setPrefix(QCoreApplication::translate("spinbox_window", "Bit", nullptr));
        pushButtonBit->setText(QCoreApplication::translate("spinbox_window", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("spinbox_window", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", nullptr));
        spinBoxHex->setPrefix(QCoreApplication::translate("spinbox_window", "Hex", nullptr));
        pushButtonHex->setText(QCoreApplication::translate("spinbox_window", "\350\275\254\346\215\242\344\270\272\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label->setText(QCoreApplication::translate("spinbox_window", "\346\225\260\351\207\217\357\274\232", nullptr));
        spinBoxQuantity->setSuffix(QCoreApplication::translate("spinbox_window", "Kg", nullptr));
        label_2->setText(QCoreApplication::translate("spinbox_window", "\345\215\225\344\273\267\357\274\232", nullptr));
        pushButtonCalc->setText(QCoreApplication::translate("spinbox_window", "\350\256\241\347\256\227", nullptr));
        label_3->setText(QCoreApplication::translate("spinbox_window", "\346\200\273\344\273\267\357\274\232", nullptr));
        doubleSpinBoxPrice->setPrefix(QCoreApplication::translate("spinbox_window", "$", nullptr));
        doubleSpinBoxTotal->setPrefix(QCoreApplication::translate("spinbox_window", "$", nullptr));
    } // retranslateUi

};

namespace Ui {
    class spinbox_window: public Ui_spinbox_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPINBOX_WINDOW_H
