/********************************************************************************
** Form generated from reading UI file 'file_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_WIDGET_H
#define UI_FILE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_file_widget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *file_widget)
    {
        if (file_widget->objectName().isEmpty())
            file_widget->setObjectName("file_widget");
        file_widget->resize(1021, 677);
        verticalLayout = new QVBoxLayout(file_widget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(file_widget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addWidget(widget);

        textEdit = new QTextEdit(file_widget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        retranslateUi(file_widget);

        QMetaObject::connectSlotsByName(file_widget);
    } // setupUi

    void retranslateUi(QWidget *file_widget)
    {
        file_widget->setWindowTitle(QCoreApplication::translate("file_widget", "file_widget", nullptr));
        pushButton->setText(QCoreApplication::translate("file_widget", "\351\200\211\345\217\226\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class file_widget: public Ui_file_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_WIDGET_H
