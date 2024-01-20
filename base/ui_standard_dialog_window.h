/********************************************************************************
** Form generated from reading UI file 'standard_dialog_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARD_DIALOG_WINDOW_H
#define UI_STANDARD_DIALOG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_standard_dialog_window
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonFileSave;
    QPushButton *pushButtonFontSelect;
    QPushButton *pushButtonColorSelect;
    QPushButton *pushButtonFileOpen;
    QPushButton *pushButtonDirSelect;
    QPushButton *pushButtonFileListOpen;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonMsgQuestion;
    QPushButton *pushButtonMsgInformation;
    QPushButton *pushButtonMsgWarning;
    QPushButton *pushButtonMsgCritical;
    QPushButton *pushButtonMsgAbout;
    QPushButton *pushButtonMsgAboutQt;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonInputString;
    QPushButton *pushButtonInputInteger;
    QPushButton *pushButtonInputFloat;
    QPushButton *pushButtonInputItem;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonClear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *standard_dialog_window)
    {
        if (standard_dialog_window->objectName().isEmpty())
            standard_dialog_window->setObjectName(QString::fromUtf8("standard_dialog_window"));
        standard_dialog_window->resize(1055, 607);
        gridLayout_5 = new QGridLayout(standard_dialog_window);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(standard_dialog_window);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonFileSave = new QPushButton(groupBox);
        pushButtonFileSave->setObjectName(QString::fromUtf8("pushButtonFileSave"));

        gridLayout->addWidget(pushButtonFileSave, 1, 1, 1, 1);

        pushButtonFontSelect = new QPushButton(groupBox);
        pushButtonFontSelect->setObjectName(QString::fromUtf8("pushButtonFontSelect"));

        gridLayout->addWidget(pushButtonFontSelect, 2, 1, 1, 1);

        pushButtonColorSelect = new QPushButton(groupBox);
        pushButtonColorSelect->setObjectName(QString::fromUtf8("pushButtonColorSelect"));

        gridLayout->addWidget(pushButtonColorSelect, 2, 0, 1, 1);

        pushButtonFileOpen = new QPushButton(groupBox);
        pushButtonFileOpen->setObjectName(QString::fromUtf8("pushButtonFileOpen"));

        gridLayout->addWidget(pushButtonFileOpen, 0, 0, 1, 1);

        pushButtonDirSelect = new QPushButton(groupBox);
        pushButtonDirSelect->setObjectName(QString::fromUtf8("pushButtonDirSelect"));

        gridLayout->addWidget(pushButtonDirSelect, 1, 0, 1, 1);

        pushButtonFileListOpen = new QPushButton(groupBox);
        pushButtonFileListOpen->setObjectName(QString::fromUtf8("pushButtonFileListOpen"));

        gridLayout->addWidget(pushButtonFileListOpen, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(standard_dialog_window);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonMsgQuestion = new QPushButton(groupBox_2);
        pushButtonMsgQuestion->setObjectName(QString::fromUtf8("pushButtonMsgQuestion"));

        gridLayout_2->addWidget(pushButtonMsgQuestion, 0, 0, 1, 1);

        pushButtonMsgInformation = new QPushButton(groupBox_2);
        pushButtonMsgInformation->setObjectName(QString::fromUtf8("pushButtonMsgInformation"));

        gridLayout_2->addWidget(pushButtonMsgInformation, 0, 1, 1, 1);

        pushButtonMsgWarning = new QPushButton(groupBox_2);
        pushButtonMsgWarning->setObjectName(QString::fromUtf8("pushButtonMsgWarning"));

        gridLayout_2->addWidget(pushButtonMsgWarning, 0, 2, 1, 1);

        pushButtonMsgCritical = new QPushButton(groupBox_2);
        pushButtonMsgCritical->setObjectName(QString::fromUtf8("pushButtonMsgCritical"));

        gridLayout_2->addWidget(pushButtonMsgCritical, 1, 0, 1, 1);

        pushButtonMsgAbout = new QPushButton(groupBox_2);
        pushButtonMsgAbout->setObjectName(QString::fromUtf8("pushButtonMsgAbout"));

        gridLayout_2->addWidget(pushButtonMsgAbout, 1, 1, 1, 1);

        pushButtonMsgAboutQt = new QPushButton(groupBox_2);
        pushButtonMsgAboutQt->setObjectName(QString::fromUtf8("pushButtonMsgAboutQt"));

        gridLayout_2->addWidget(pushButtonMsgAboutQt, 1, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(standard_dialog_window);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButtonInputString = new QPushButton(groupBox_3);
        pushButtonInputString->setObjectName(QString::fromUtf8("pushButtonInputString"));

        gridLayout_3->addWidget(pushButtonInputString, 0, 0, 1, 1);

        pushButtonInputInteger = new QPushButton(groupBox_3);
        pushButtonInputInteger->setObjectName(QString::fromUtf8("pushButtonInputInteger"));

        gridLayout_3->addWidget(pushButtonInputInteger, 0, 1, 1, 1);

        pushButtonInputFloat = new QPushButton(groupBox_3);
        pushButtonInputFloat->setObjectName(QString::fromUtf8("pushButtonInputFloat"));

        gridLayout_3->addWidget(pushButtonInputFloat, 1, 0, 1, 1);

        pushButtonInputItem = new QPushButton(groupBox_3);
        pushButtonInputItem->setObjectName(QString::fromUtf8("pushButtonInputItem"));

        gridLayout_3->addWidget(pushButtonInputItem, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(standard_dialog_window);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButtonClear = new QPushButton(groupBox_4);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonClear->sizePolicy().hasHeightForWidth());
        pushButtonClear->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(pushButtonClear, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(standard_dialog_window);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_5->addWidget(plainTextEdit, 2, 0, 1, 2);


        retranslateUi(standard_dialog_window);
        QObject::connect(pushButtonClear, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(standard_dialog_window);
    } // setupUi

    void retranslateUi(QWidget *standard_dialog_window)
    {
        standard_dialog_window->setWindowTitle(QCoreApplication::translate("standard_dialog_window", "standard_dialog_window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("standard_dialog_window", "\346\240\207\345\207\206\345\257\271\350\257\235\346\241\206", nullptr));
        pushButtonFileSave->setText(QCoreApplication::translate("standard_dialog_window", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        pushButtonFontSelect->setText(QCoreApplication::translate("standard_dialog_window", "\351\200\211\346\213\251\345\255\227\344\275\223", nullptr));
        pushButtonColorSelect->setText(QCoreApplication::translate("standard_dialog_window", "\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        pushButtonFileOpen->setText(QCoreApplication::translate("standard_dialog_window", "\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", nullptr));
        pushButtonDirSelect->setText(QCoreApplication::translate("standard_dialog_window", "\351\200\211\346\213\251\345\267\262\346\234\211\347\233\256\345\275\225", nullptr));
        pushButtonFileListOpen->setText(QCoreApplication::translate("standard_dialog_window", "\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("standard_dialog_window", "\346\240\207\345\207\206\346\266\210\346\201\257\345\257\271\350\257\235\346\241\206QMessageDialog", nullptr));
        pushButtonMsgQuestion->setText(QCoreApplication::translate("standard_dialog_window", "Question", nullptr));
        pushButtonMsgInformation->setText(QCoreApplication::translate("standard_dialog_window", "Information", nullptr));
        pushButtonMsgWarning->setText(QCoreApplication::translate("standard_dialog_window", "Warning", nullptr));
        pushButtonMsgCritical->setText(QCoreApplication::translate("standard_dialog_window", "Critical", nullptr));
        pushButtonMsgAbout->setText(QCoreApplication::translate("standard_dialog_window", "About", nullptr));
        pushButtonMsgAboutQt->setText(QCoreApplication::translate("standard_dialog_window", "QboutQt", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("standard_dialog_window", "\346\240\207\345\207\206\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206QInputDialog", nullptr));
        pushButtonInputString->setText(QCoreApplication::translate("standard_dialog_window", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        pushButtonInputInteger->setText(QCoreApplication::translate("standard_dialog_window", "\350\276\223\345\205\245\346\225\264\346\225\260", nullptr));
        pushButtonInputFloat->setText(QCoreApplication::translate("standard_dialog_window", "\350\276\223\345\205\245\346\265\256\347\202\271\346\225\260", nullptr));
        pushButtonInputItem->setText(QCoreApplication::translate("standard_dialog_window", "\346\235\241\347\233\256\351\200\211\346\213\251\350\276\223\345\205\245", nullptr));
        groupBox_4->setTitle(QString());
        pushButtonClear->setText(QCoreApplication::translate("standard_dialog_window", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206\345\206\205\345\256\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class standard_dialog_window: public Ui_standard_dialog_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARD_DIALOG_WINDOW_H
