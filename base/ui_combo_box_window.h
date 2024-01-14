/********************************************************************************
** Form generated from reading UI file 'combo_box_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBO_BOX_WINDOW_H
#define UI_COMBO_BOX_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_combo_box_window
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonInitList;
    QPushButton *pushButtonClearList;
    QCheckBox *checkBoxEnableEdit;
    QComboBox *comboBoxList;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonInitCity;
    QComboBox *comboBoxCityNO;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonTextAdd;
    QPushButton *pushButtonClearContent;
    QCheckBox *checkBoxReadOnly;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *combo_box_window)
    {
        if (combo_box_window->objectName().isEmpty())
            combo_box_window->setObjectName(QString::fromUtf8("combo_box_window"));
        combo_box_window->resize(931, 657);
        gridLayout_4 = new QGridLayout(combo_box_window);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(combo_box_window);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonInitList = new QPushButton(groupBox);
        pushButtonInitList->setObjectName(QString::fromUtf8("pushButtonInitList"));

        gridLayout->addWidget(pushButtonInitList, 0, 0, 1, 1);

        pushButtonClearList = new QPushButton(groupBox);
        pushButtonClearList->setObjectName(QString::fromUtf8("pushButtonClearList"));

        gridLayout->addWidget(pushButtonClearList, 0, 1, 1, 1);

        checkBoxEnableEdit = new QCheckBox(groupBox);
        checkBoxEnableEdit->setObjectName(QString::fromUtf8("checkBoxEnableEdit"));

        gridLayout->addWidget(checkBoxEnableEdit, 0, 2, 1, 1);

        comboBoxList = new QComboBox(groupBox);
        comboBoxList->setObjectName(QString::fromUtf8("comboBoxList"));
        comboBoxList->setEditable(true);

        gridLayout->addWidget(comboBoxList, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(combo_box_window);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonInitCity = new QPushButton(groupBox_2);
        pushButtonInitCity->setObjectName(QString::fromUtf8("pushButtonInitCity"));

        gridLayout_2->addWidget(pushButtonInitCity, 0, 0, 1, 1);

        comboBoxCityNO = new QComboBox(groupBox_2);
        comboBoxCityNO->setObjectName(QString::fromUtf8("comboBoxCityNO"));
        comboBoxCityNO->setEditable(true);

        gridLayout_2->addWidget(comboBoxCityNO, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(combo_box_window);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButtonTextAdd = new QPushButton(groupBox_3);
        pushButtonTextAdd->setObjectName(QString::fromUtf8("pushButtonTextAdd"));

        gridLayout_3->addWidget(pushButtonTextAdd, 0, 0, 1, 1);

        pushButtonClearContent = new QPushButton(groupBox_3);
        pushButtonClearContent->setObjectName(QString::fromUtf8("pushButtonClearContent"));

        gridLayout_3->addWidget(pushButtonClearContent, 0, 1, 1, 1);

        checkBoxReadOnly = new QCheckBox(groupBox_3);
        checkBoxReadOnly->setObjectName(QString::fromUtf8("checkBoxReadOnly"));

        gridLayout_3->addWidget(checkBoxReadOnly, 0, 2, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_3->addWidget(plainTextEdit, 1, 0, 1, 3);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 2);


        retranslateUi(combo_box_window);

        QMetaObject::connectSlotsByName(combo_box_window);
    } // setupUi

    void retranslateUi(QWidget *combo_box_window)
    {
        combo_box_window->setWindowTitle(QCoreApplication::translate("combo_box_window", "combo_box_window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("combo_box_window", "\347\256\200\345\215\225ComboBox", nullptr));
        pushButtonInitList->setText(QCoreApplication::translate("combo_box_window", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        pushButtonClearList->setText(QCoreApplication::translate("combo_box_window", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        checkBoxEnableEdit->setText(QCoreApplication::translate("combo_box_window", "\345\217\257\347\274\226\350\276\221", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("combo_box_window", "\346\234\211\347\224\250\346\210\267\346\225\260\346\215\256\347\232\204ComboBox", nullptr));
        pushButtonInitCity->setText(QCoreApplication::translate("combo_box_window", "\345\210\235\345\247\213\345\214\226\345\237\216\345\270\202+\345\214\272\345\217\267", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("combo_box_window", "QPlainTextEdit\357\274\210\345\205\267\346\234\211\346\240\207\345\207\206\345\277\253\346\215\267\350\217\234\345\215\225\357\274\211", nullptr));
        pushButtonTextAdd->setText(QCoreApplication::translate("combo_box_window", "\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271\346\267\273\345\212\240\345\210\260ComboBox", nullptr));
        pushButtonClearContent->setText(QCoreApplication::translate("combo_box_window", "\346\270\205\351\231\244\346\226\207\346\234\254\345\206\205\345\256\271", nullptr));
        checkBoxReadOnly->setText(QCoreApplication::translate("combo_box_window", "Read Only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class combo_box_window: public Ui_combo_box_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBO_BOX_WINDOW_H
