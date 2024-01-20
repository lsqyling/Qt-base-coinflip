/********************************************************************************
** Form generated from reading UI file 'headerset_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEADERSET_DIALOG_H
#define UI_HEADERSET_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_headerset_dialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListView *listView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonOk;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonCancel;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *headerset_dialog)
    {
        if (headerset_dialog->objectName().isEmpty())
            headerset_dialog->setObjectName(QString::fromUtf8("headerset_dialog"));
        headerset_dialog->resize(349, 352);
        gridLayout_3 = new QGridLayout(headerset_dialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(headerset_dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(headerset_dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        pushButtonOk = new QPushButton(groupBox_2);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));

        gridLayout_2->addWidget(pushButtonOk, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);

        pushButtonCancel = new QPushButton(groupBox_2);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        gridLayout_2->addWidget(pushButtonCancel, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 4, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);


        retranslateUi(headerset_dialog);
        QObject::connect(pushButtonOk, SIGNAL(clicked()), headerset_dialog, SLOT(accept()));
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), headerset_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(headerset_dialog);
    } // setupUi

    void retranslateUi(QDialog *headerset_dialog)
    {
        headerset_dialog->setWindowTitle(QCoreApplication::translate("headerset_dialog", "headerset_dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("headerset_dialog", "\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        groupBox_2->setTitle(QString());
        pushButtonOk->setText(QCoreApplication::translate("headerset_dialog", "\347\241\256\350\256\244", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("headerset_dialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class headerset_dialog: public Ui_headerset_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEADERSET_DIALOG_H
