/********************************************************************************
** Form generated from reading UI file 'login_window.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WINDOW_H
#define UI_LOGIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_window
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *login_window)
    {
        if (login_window->objectName().isEmpty())
            login_window->setObjectName("login_window");
        login_window->resize(400, 250);
        login_window->setMinimumSize(QSize(400, 250));
        login_window->setMaximumSize(QSize(400, 250));
        verticalLayout = new QVBoxLayout(login_window);
        verticalLayout->setObjectName("verticalLayout");
        widget_3 = new QWidget(login_window);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 2, 2, 1, 1);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        label = new QLabel(widget_3);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(login_window);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(25, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);


        retranslateUi(login_window);

        QMetaObject::connectSlotsByName(login_window);
    } // setupUi

    void retranslateUi(QWidget *login_window)
    {
        login_window->setWindowTitle(QCoreApplication::translate("login_window", "\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("login_window", "\345\257\206\347\240\201\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("login_window", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("login_window", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login_window", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_window: public Ui_login_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WINDOW_H
