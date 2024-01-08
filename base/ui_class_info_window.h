/********************************************************************************
** Form generated from reading UI file 'class_info_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_INFO_WINDOW_H
#define UI_CLASS_INFO_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_class_info_window
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpinBox *spinBoxGirl;
    QPushButton *pushButtonClear;
    QLabel *label;
    QPushButton *pushButtonGirl;
    QPushButton *pushButtonMeta;
    QSpinBox *spinBoxBoy;
    QLabel *label_2;
    QPushButton *pushButtonBoy;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *class_info_window)
    {
        if (class_info_window->objectName().isEmpty())
            class_info_window->setObjectName(QString::fromUtf8("class_info_window"));
        class_info_window->resize(892, 591);
        gridLayout_2 = new QGridLayout(class_info_window);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spinBoxGirl = new QSpinBox(class_info_window);
        spinBoxGirl->setObjectName(QString::fromUtf8("spinBoxGirl"));
        spinBoxGirl->setMaximum(120);
        spinBoxGirl->setValue(20);

        gridLayout->addWidget(spinBoxGirl, 1, 1, 1, 1);

        pushButtonClear = new QPushButton(class_info_window);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 1, 3, 1, 1);

        label = new QLabel(class_info_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButtonGirl = new QPushButton(class_info_window);
        pushButtonGirl->setObjectName(QString::fromUtf8("pushButtonGirl"));

        gridLayout->addWidget(pushButtonGirl, 1, 2, 1, 1);

        pushButtonMeta = new QPushButton(class_info_window);
        pushButtonMeta->setObjectName(QString::fromUtf8("pushButtonMeta"));

        gridLayout->addWidget(pushButtonMeta, 0, 3, 1, 1);

        spinBoxBoy = new QSpinBox(class_info_window);
        spinBoxBoy->setObjectName(QString::fromUtf8("spinBoxBoy"));
        spinBoxBoy->setMaximum(120);
        spinBoxBoy->setValue(15);

        gridLayout->addWidget(spinBoxBoy, 0, 1, 1, 1);

        label_2 = new QLabel(class_info_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButtonBoy = new QPushButton(class_info_window);
        pushButtonBoy->setObjectName(QString::fromUtf8("pushButtonBoy"));

        gridLayout->addWidget(pushButtonBoy, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(class_info_window);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 1, 0, 1, 1);


        retranslateUi(class_info_window);
        QObject::connect(pushButtonClear, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(class_info_window);
    } // setupUi

    void retranslateUi(QWidget *class_info_window)
    {
        class_info_window->setWindowTitle(QCoreApplication::translate("class_info_window", "class_info_window", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("class_info_window", "\346\270\205\347\251\272", nullptr));
        label->setText(QCoreApplication::translate("class_info_window", "\350\256\276\347\275\256\347\224\267\345\255\251\345\271\264\351\276\204", nullptr));
        pushButtonGirl->setText(QCoreApplication::translate("class_info_window", "girl\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        pushButtonMeta->setText(QCoreApplication::translate("class_info_window", "\347\261\273\347\232\204\345\205\203\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("class_info_window", "\350\256\276\347\275\256\345\245\263\345\255\251\345\271\264\351\276\204", nullptr));
        pushButtonBoy->setText(QCoreApplication::translate("class_info_window", "boy\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class class_info_window: public Ui_class_info_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_INFO_WINDOW_H
