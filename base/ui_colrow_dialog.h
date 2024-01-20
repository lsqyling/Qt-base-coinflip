/********************************************************************************
** Form generated from reading UI file 'colrow_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLROW_DIALOG_H
#define UI_COLROW_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_colrow_dialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxColNum;
    QLabel *label_2;
    QSpinBox *spinBoxRowNum;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *colrow_dialog)
    {
        if (colrow_dialog->objectName().isEmpty())
            colrow_dialog->setObjectName(QString::fromUtf8("colrow_dialog"));
        colrow_dialog->resize(419, 125);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(colrow_dialog->sizePolicy().hasHeightForWidth());
        colrow_dialog->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(colrow_dialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(colrow_dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxColNum = new QSpinBox(groupBox);
        spinBoxColNum->setObjectName(QString::fromUtf8("spinBoxColNum"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBoxColNum->sizePolicy().hasHeightForWidth());
        spinBoxColNum->setSizePolicy(sizePolicy1);
        spinBoxColNum->setSingleStep(1);
        spinBoxColNum->setValue(8);

        gridLayout->addWidget(spinBoxColNum, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxRowNum = new QSpinBox(groupBox);
        spinBoxRowNum->setObjectName(QString::fromUtf8("spinBoxRowNum"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBoxRowNum->sizePolicy().hasHeightForWidth());
        spinBoxRowNum->setSizePolicy(sizePolicy2);
        spinBoxRowNum->setValue(6);

        gridLayout->addWidget(spinBoxRowNum, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(colrow_dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonOK = new QPushButton(groupBox_2);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        sizePolicy2.setHeightForWidth(pushButtonOK->sizePolicy().hasHeightForWidth());
        pushButtonOK->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/icon/yes.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOK->setIcon(icon);

        gridLayout_2->addWidget(pushButtonOK, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(groupBox_2);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        sizePolicy2.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/icon/no.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCancel->setIcon(icon1);

        gridLayout_2->addWidget(pushButtonCancel, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);


        retranslateUi(colrow_dialog);
        QObject::connect(pushButtonOK, SIGNAL(clicked()), colrow_dialog, SLOT(accept()));
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), colrow_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(colrow_dialog);
    } // setupUi

    void retranslateUi(QDialog *colrow_dialog)
    {
        colrow_dialog->setWindowTitle(QCoreApplication::translate("colrow_dialog", "colrow_dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("colrow_dialog", "\350\256\276\347\275\256\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("colrow_dialog", "\345\210\227 \346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("colrow_dialog", "\350\241\214 \346\225\260", nullptr));
        groupBox_2->setTitle(QString());
        pushButtonOK->setText(QCoreApplication::translate("colrow_dialog", "\347\241\256\345\256\232", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("colrow_dialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class colrow_dialog: public Ui_colrow_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLROW_DIALOG_H
