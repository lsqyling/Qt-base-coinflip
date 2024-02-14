/********************************************************************************
** Form generated from reading UI file 'splash_login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_LOGIN_DIALOG_H
#define UI_SPLASH_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_splash_login_dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditUserName;
    QLabel *label_3;
    QLineEdit *lineEditPassword;
    QCheckBox *checkBox;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *splash_login_dialog)
    {
        if (splash_login_dialog->objectName().isEmpty())
            splash_login_dialog->setObjectName(QString::fromUtf8("splash_login_dialog"));
        splash_login_dialog->setWindowModality(Qt::NonModal);
        splash_login_dialog->resize(835, 580);
        verticalLayout = new QVBoxLayout(splash_login_dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(splash_login_dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/splash_icon/splash2.jpg")));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(splash_login_dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditUserName = new QLineEdit(splash_login_dialog);
        lineEditUserName->setObjectName(QString::fromUtf8("lineEditUserName"));

        horizontalLayout->addWidget(lineEditUserName);

        label_3 = new QLabel(splash_login_dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEditPassword = new QLineEdit(splash_login_dialog);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setContextMenuPolicy(Qt::NoContextMenu);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEditPassword);

        checkBox = new QCheckBox(splash_login_dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButtonOK = new QPushButton(splash_login_dialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));

        horizontalLayout->addWidget(pushButtonOK);

        pushButtonCancel = new QPushButton(splash_login_dialog);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(splash_login_dialog);
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), splash_login_dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(splash_login_dialog);
    } // setupUi

    void retranslateUi(QDialog *splash_login_dialog)
    {
        splash_login_dialog->setWindowTitle(QCoreApplication::translate("splash_login_dialog", "splash_login_dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("splash_login_dialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("splash_login_dialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("splash_login_dialog", "\344\277\235\345\255\230\347\224\250\346\210\267", nullptr));
        pushButtonOK->setText(QCoreApplication::translate("splash_login_dialog", "\347\241\256\350\256\244", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("splash_login_dialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class splash_login_dialog: public Ui_splash_login_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_LOGIN_DIALOG_H
