/********************************************************************************
** Form generated from reading UI file 'cell_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_DIALOG_H
#define UI_CELL_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_cell_dialog
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxRow;
    QCheckBox *checkBoxRowAdd;
    QLabel *label_2;
    QSpinBox *spinBoxCol;
    QCheckBox *checkBoxColAdd;
    QLabel *label_3;
    QLineEdit *lineEditText;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonFont;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *cell_dialog)
    {
        if (cell_dialog->objectName().isEmpty())
            cell_dialog->setObjectName(QString::fromUtf8("cell_dialog"));
        cell_dialog->resize(527, 194);
        gridLayout_3 = new QGridLayout(cell_dialog);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox = new QGroupBox(cell_dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));

        gridLayout->addWidget(spinBoxRow, 0, 1, 1, 1);

        checkBoxRowAdd = new QCheckBox(groupBox);
        checkBoxRowAdd->setObjectName(QString::fromUtf8("checkBoxRowAdd"));

        gridLayout->addWidget(checkBoxRowAdd, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxCol = new QSpinBox(groupBox);
        spinBoxCol->setObjectName(QString::fromUtf8("spinBoxCol"));

        gridLayout->addWidget(spinBoxCol, 1, 1, 1, 1);

        checkBoxColAdd = new QCheckBox(groupBox);
        checkBoxColAdd->setObjectName(QString::fromUtf8("checkBoxColAdd"));

        gridLayout->addWidget(checkBoxColAdd, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEditText = new QLineEdit(groupBox);
        lineEditText->setObjectName(QString::fromUtf8("lineEditText"));

        gridLayout->addWidget(lineEditText, 2, 1, 1, 2);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(cell_dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMaximumSize(QSize(200, 16777215));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonFont = new QPushButton(groupBox_2);
        pushButtonFont->setObjectName(QString::fromUtf8("pushButtonFont"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonFont->sizePolicy().hasHeightForWidth());
        pushButtonFont->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/icon/font.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonFont->setIcon(icon);

        gridLayout_2->addWidget(pushButtonFont, 0, 0, 1, 1);

        pushButtonClose = new QPushButton(groupBox_2);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        sizePolicy1.setHeightForWidth(pushButtonClose->sizePolicy().hasHeightForWidth());
        pushButtonClose->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../images/icon/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonClose->setIcon(icon1);

        gridLayout_2->addWidget(pushButtonClose, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 0, 1, 1, 1);


        retranslateUi(cell_dialog);
        QObject::connect(pushButtonClose, SIGNAL(clicked()), cell_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(cell_dialog);
    } // setupUi

    void retranslateUi(QDialog *cell_dialog)
    {
        cell_dialog->setWindowTitle(QCoreApplication::translate("cell_dialog", "cell_dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("cell_dialog", "\350\241\214 \345\217\267", nullptr));
        checkBoxRowAdd->setText(QCoreApplication::translate("cell_dialog", "\350\241\214\345\242\236", nullptr));
        label_2->setText(QCoreApplication::translate("cell_dialog", "\345\210\227 \345\217\267", nullptr));
        checkBoxColAdd->setText(QCoreApplication::translate("cell_dialog", "\345\210\227\345\242\236", nullptr));
        label_3->setText(QCoreApplication::translate("cell_dialog", "\350\256\276\345\256\232\346\226\207\345\255\227", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("cell_dialog", "GroupBox", nullptr));
        pushButtonFont->setText(QCoreApplication::translate("cell_dialog", "\350\256\276\345\256\232\346\226\207\345\255\227", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("cell_dialog", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cell_dialog: public Ui_cell_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_DIALOG_H
