/********************************************************************************
** Form generated from reading UI file 'qstring_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSTRING_WINDOW_H
#define UI_QSTRING_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qstring_window
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditQuantity;
    QLabel *label_2;
    QLineEdit *lineEditPrice;
    QPushButton *pushButtonCalc;
    QLabel *label_3;
    QLineEdit *lineEditTotal;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditBit;
    QPushButton *pushButtonBit;
    QLabel *label_5;
    QLineEdit *lineEditOct;
    QPushButton *pushButtonOct;
    QLabel *label_6;
    QLineEdit *lineEditHex;
    QPushButton *pushButtonHex;

    void setupUi(QWidget *qstring_window)
    {
        if (qstring_window->objectName().isEmpty())
            qstring_window->setObjectName(QString::fromUtf8("qstring_window"));
        qstring_window->resize(436, 267);
        gridLayout_3 = new QGridLayout(qstring_window);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(qstring_window);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditQuantity = new QLineEdit(qstring_window);
        lineEditQuantity->setObjectName(QString::fromUtf8("lineEditQuantity"));

        gridLayout->addWidget(lineEditQuantity, 0, 1, 1, 1);

        label_2 = new QLabel(qstring_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEditPrice = new QLineEdit(qstring_window);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));

        gridLayout->addWidget(lineEditPrice, 0, 3, 1, 1);

        pushButtonCalc = new QPushButton(qstring_window);
        pushButtonCalc->setObjectName(QString::fromUtf8("pushButtonCalc"));

        gridLayout->addWidget(pushButtonCalc, 1, 1, 1, 1);

        label_3 = new QLabel(qstring_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        lineEditTotal = new QLineEdit(qstring_window);
        lineEditTotal->setObjectName(QString::fromUtf8("lineEditTotal"));

        gridLayout->addWidget(lineEditTotal, 1, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(qstring_window);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lineEditBit = new QLineEdit(qstring_window);
        lineEditBit->setObjectName(QString::fromUtf8("lineEditBit"));

        gridLayout_2->addWidget(lineEditBit, 0, 1, 1, 1);

        pushButtonBit = new QPushButton(qstring_window);
        pushButtonBit->setObjectName(QString::fromUtf8("pushButtonBit"));

        gridLayout_2->addWidget(pushButtonBit, 0, 2, 1, 1);

        label_5 = new QLabel(qstring_window);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        lineEditOct = new QLineEdit(qstring_window);
        lineEditOct->setObjectName(QString::fromUtf8("lineEditOct"));

        gridLayout_2->addWidget(lineEditOct, 1, 1, 1, 1);

        pushButtonOct = new QPushButton(qstring_window);
        pushButtonOct->setObjectName(QString::fromUtf8("pushButtonOct"));

        gridLayout_2->addWidget(pushButtonOct, 1, 2, 1, 1);

        label_6 = new QLabel(qstring_window);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        lineEditHex = new QLineEdit(qstring_window);
        lineEditHex->setObjectName(QString::fromUtf8("lineEditHex"));

        gridLayout_2->addWidget(lineEditHex, 2, 1, 1, 1);

        pushButtonHex = new QPushButton(qstring_window);
        pushButtonHex->setObjectName(QString::fromUtf8("pushButtonHex"));

        gridLayout_2->addWidget(pushButtonHex, 2, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);


        retranslateUi(qstring_window);

        QMetaObject::connectSlotsByName(qstring_window);
    } // setupUi

    void retranslateUi(QWidget *qstring_window)
    {
        qstring_window->setWindowTitle(QCoreApplication::translate("qstring_window", "qstring_window", nullptr));
        label->setText(QCoreApplication::translate("qstring_window", "\346\225\260\351\207\217\357\274\232", nullptr));
        lineEditQuantity->setText(QCoreApplication::translate("qstring_window", "12", nullptr));
        label_2->setText(QCoreApplication::translate("qstring_window", "\345\215\225\344\273\267\357\274\232", nullptr));
        lineEditPrice->setText(QCoreApplication::translate("qstring_window", "5", nullptr));
        pushButtonCalc->setText(QCoreApplication::translate("qstring_window", "\350\256\241\347\256\227", nullptr));
        label_3->setText(QCoreApplication::translate("qstring_window", "\346\200\273\344\273\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("qstring_window", "\344\272\214\350\277\233\345\210\266\357\274\232", nullptr));
        lineEditBit->setText(QCoreApplication::translate("qstring_window", "1111", nullptr));
        pushButtonBit->setText(QCoreApplication::translate("qstring_window", "\350\275\254\346\215\242\346\210\220\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("qstring_window", "\345\205\253\350\277\233\345\210\266\357\274\232", nullptr));
        pushButtonOct->setText(QCoreApplication::translate("qstring_window", "\350\275\254\346\215\242\346\210\220\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_6->setText(QCoreApplication::translate("qstring_window", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", nullptr));
        pushButtonHex->setText(QCoreApplication::translate("qstring_window", "\350\275\254\346\215\242\346\210\220\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qstring_window: public Ui_qstring_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSTRING_WINDOW_H
