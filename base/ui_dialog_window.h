/********************************************************************************
** Form generated from reading UI file 'dialog_window.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_WINDOW_H
#define UI_DIALOG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialog_window
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonRed;
    QRadioButton *radioButtonGreen;
    QRadioButton *radioButtonBlue;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxUnderline;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonYes;
    QPushButton *pushButtonCancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonQuit;

    void setupUi(QDialog *dialog_window)
    {
        if (dialog_window->objectName().isEmpty())
            dialog_window->setObjectName("dialog_window");
        dialog_window->resize(910, 594);
        verticalLayout = new QVBoxLayout(dialog_window);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(dialog_window);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName("horizontalLayout");
        radioButtonRed = new QRadioButton(groupBox_2);
        radioButtonRed->setObjectName("radioButtonRed");

        horizontalLayout->addWidget(radioButtonRed);

        radioButtonGreen = new QRadioButton(groupBox_2);
        radioButtonGreen->setObjectName("radioButtonGreen");

        horizontalLayout->addWidget(radioButtonGreen);

        radioButtonBlue = new QRadioButton(groupBox_2);
        radioButtonBlue->setObjectName("radioButtonBlue");

        horizontalLayout->addWidget(radioButtonBlue);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(dialog_window);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxUnderline = new QCheckBox(groupBox);
        checkBoxUnderline->setObjectName("checkBoxUnderline");
        checkBoxUnderline->setChecked(false);

        horizontalLayout_2->addWidget(checkBoxUnderline);

        checkBoxItalic = new QCheckBox(groupBox);
        checkBoxItalic->setObjectName("checkBoxItalic");

        horizontalLayout_2->addWidget(checkBoxItalic);

        checkBoxBold = new QCheckBox(groupBox);
        checkBoxBold->setObjectName("checkBoxBold");

        horizontalLayout_2->addWidget(checkBoxBold);


        verticalLayout->addWidget(groupBox);

        plainTextEdit = new QPlainTextEdit(dialog_window);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font;
        font.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font.setPointSize(20);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonYes = new QPushButton(dialog_window);
        pushButtonYes->setObjectName("pushButtonYes");

        horizontalLayout_3->addWidget(pushButtonYes);

        pushButtonCancel = new QPushButton(dialog_window);
        pushButtonCancel->setObjectName("pushButtonCancel");

        horizontalLayout_3->addWidget(pushButtonCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonQuit = new QPushButton(dialog_window);
        pushButtonQuit->setObjectName("pushButtonQuit");

        horizontalLayout_3->addWidget(pushButtonQuit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(dialog_window);
        QObject::connect(pushButtonYes, &QPushButton::clicked, dialog_window, qOverload<>(&QDialog::accept));
        QObject::connect(pushButtonQuit, &QPushButton::clicked, dialog_window, qOverload<>(&QDialog::close));
        QObject::connect(pushButtonCancel, &QPushButton::clicked, dialog_window, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(dialog_window);
    } // setupUi

    void retranslateUi(QDialog *dialog_window)
    {
        dialog_window->setWindowTitle(QCoreApplication::translate("dialog_window", "dialog_window", nullptr));
        groupBox_2->setTitle(QString());
        radioButtonRed->setText(QCoreApplication::translate("dialog_window", "Red", nullptr));
        radioButtonGreen->setText(QCoreApplication::translate("dialog_window", "Green", nullptr));
        radioButtonBlue->setText(QCoreApplication::translate("dialog_window", "Blue", nullptr));
        groupBox->setTitle(QString());
        checkBoxUnderline->setText(QCoreApplication::translate("dialog_window", "Underline", nullptr));
        checkBoxItalic->setText(QCoreApplication::translate("dialog_window", "Italic", nullptr));
        checkBoxBold->setText(QCoreApplication::translate("dialog_window", "Bold", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("dialog_window", "Hello World\n"
"This is Arxibye!", nullptr));
        pushButtonYes->setText(QCoreApplication::translate("dialog_window", "\347\241\256\350\256\244", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("dialog_window", "\345\217\226\346\266\210", nullptr));
        pushButtonQuit->setText(QCoreApplication::translate("dialog_window", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog_window: public Ui_dialog_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_WINDOW_H
