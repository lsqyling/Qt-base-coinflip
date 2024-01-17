/********************************************************************************
** Form generated from reading UI file 'stringlist_model_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRINGLIST_MODEL_WINDOW_H
#define UI_STRINGLIST_MODEL_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stringlist_model_window
{
public:
    QGridLayout *gridLayout_3;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonListRecover;
    QPushButton *pushButtonItemAdd;
    QPushButton *pushButtonItemInsert;
    QPushButton *pushButtonItemDel;
    QPushButton *pushButtonListClear;
    QListView *listView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonTextClear;
    QPushButton *pushButtonShowData;
    QPlainTextEdit *plainTextEdit;
    QLabel *labelShowCellInfo;

    void setupUi(QWidget *stringlist_model_window)
    {
        if (stringlist_model_window->objectName().isEmpty())
            stringlist_model_window->setObjectName(QString::fromUtf8("stringlist_model_window"));
        stringlist_model_window->resize(1130, 627);
        gridLayout_3 = new QGridLayout(stringlist_model_window);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter_2 = new QSplitter(stringlist_model_window);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonListRecover = new QPushButton(groupBox);
        pushButtonListRecover->setObjectName(QString::fromUtf8("pushButtonListRecover"));

        gridLayout->addWidget(pushButtonListRecover, 0, 0, 1, 2);

        pushButtonItemAdd = new QPushButton(groupBox);
        pushButtonItemAdd->setObjectName(QString::fromUtf8("pushButtonItemAdd"));

        gridLayout->addWidget(pushButtonItemAdd, 1, 0, 1, 1);

        pushButtonItemInsert = new QPushButton(groupBox);
        pushButtonItemInsert->setObjectName(QString::fromUtf8("pushButtonItemInsert"));

        gridLayout->addWidget(pushButtonItemInsert, 1, 1, 1, 1);

        pushButtonItemDel = new QPushButton(groupBox);
        pushButtonItemDel->setObjectName(QString::fromUtf8("pushButtonItemDel"));

        gridLayout->addWidget(pushButtonItemDel, 2, 0, 1, 1);

        pushButtonListClear = new QPushButton(groupBox);
        pushButtonListClear->setObjectName(QString::fromUtf8("pushButtonListClear"));

        gridLayout->addWidget(pushButtonListClear, 2, 1, 1, 1);

        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 3, 0, 1, 2);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonTextClear = new QPushButton(groupBox_2);
        pushButtonTextClear->setObjectName(QString::fromUtf8("pushButtonTextClear"));

        gridLayout_2->addWidget(pushButtonTextClear, 0, 0, 1, 1);

        pushButtonShowData = new QPushButton(groupBox_2);
        pushButtonShowData->setObjectName(QString::fromUtf8("pushButtonShowData"));

        gridLayout_2->addWidget(pushButtonShowData, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 2, 0, 1, 1);

        splitter->addWidget(groupBox_2);
        splitter_2->addWidget(splitter);
        labelShowCellInfo = new QLabel(splitter_2);
        labelShowCellInfo->setObjectName(QString::fromUtf8("labelShowCellInfo"));
        splitter_2->addWidget(labelShowCellInfo);

        gridLayout_3->addWidget(splitter_2, 0, 0, 1, 1);


        retranslateUi(stringlist_model_window);

        QMetaObject::connectSlotsByName(stringlist_model_window);
    } // setupUi

    void retranslateUi(QWidget *stringlist_model_window)
    {
        stringlist_model_window->setWindowTitle(QCoreApplication::translate("stringlist_model_window", "stringlist_model_window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("stringlist_model_window", "QListView", nullptr));
        pushButtonListRecover->setText(QCoreApplication::translate("stringlist_model_window", "\346\201\242\345\244\215\345\210\227\350\241\250", nullptr));
        pushButtonItemAdd->setText(QCoreApplication::translate("stringlist_model_window", "\346\267\273\345\212\240\351\241\271", nullptr));
        pushButtonItemInsert->setText(QCoreApplication::translate("stringlist_model_window", "\346\217\222\345\205\245\351\241\271", nullptr));
        pushButtonItemDel->setText(QCoreApplication::translate("stringlist_model_window", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        pushButtonListClear->setText(QCoreApplication::translate("stringlist_model_window", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("stringlist_model_window", "QPlainEditText", nullptr));
        pushButtonTextClear->setText(QCoreApplication::translate("stringlist_model_window", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        pushButtonShowData->setText(QCoreApplication::translate("stringlist_model_window", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", nullptr));
        labelShowCellInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stringlist_model_window: public Ui_stringlist_model_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRINGLIST_MODEL_WINDOW_H
