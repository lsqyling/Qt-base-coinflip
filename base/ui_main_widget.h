/********************************************************************************
** Form generated from reading UI file 'main_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WIDGET_H
#define UI_MAIN_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include <my_label.h>
#include <small_widget.h>

QT_BEGIN_NAMESPACE

class Ui_main_widget
{
public:
    small_widget *widget;
    my_label *label;
    QLabel *labelTimer3;
    QPushButton *pushButtonTimer3Stop;
    QPushButton *pushButtonTimer3Start;
    QSplitter *splitter;
    QPushButton *pushButtonGetValue;
    QPushButton *pushButtonHalfValue;
    QSplitter *splitter_2;
    QLabel *labelTimer1;
    QLabel *labelTimer2;
    QPushButton *pushButton;

    void setupUi(QWidget *main_widget)
    {
        if (main_widget->objectName().isEmpty())
            main_widget->setObjectName("main_widget");
        main_widget->resize(1067, 755);
        widget = new small_widget(main_widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 371, 51));
        label = new my_label(main_widget);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 20, 201, 61));
        label->setFrameShape(QFrame::Box);
        labelTimer3 = new QLabel(main_widget);
        labelTimer3->setObjectName("labelTimer3");
        labelTimer3->setGeometry(QRect(90, 240, 212, 51));
        labelTimer3->setFrameShape(QFrame::WinPanel);
        pushButtonTimer3Stop = new QPushButton(main_widget);
        pushButtonTimer3Stop->setObjectName("pushButtonTimer3Stop");
        pushButtonTimer3Stop->setGeometry(QRect(310, 250, 93, 28));
        pushButtonTimer3Start = new QPushButton(main_widget);
        pushButtonTimer3Start->setObjectName("pushButtonTimer3Start");
        pushButtonTimer3Start->setGeometry(QRect(410, 250, 93, 28));
        splitter = new QSplitter(main_widget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(100, 110, 186, 28));
        splitter->setOrientation(Qt::Horizontal);
        pushButtonGetValue = new QPushButton(splitter);
        pushButtonGetValue->setObjectName("pushButtonGetValue");
        splitter->addWidget(pushButtonGetValue);
        pushButtonHalfValue = new QPushButton(splitter);
        pushButtonHalfValue->setObjectName("pushButtonHalfValue");
        splitter->addWidget(pushButtonHalfValue);
        splitter_2 = new QSplitter(main_widget);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(90, 180, 431, 51));
        splitter_2->setOrientation(Qt::Horizontal);
        labelTimer1 = new QLabel(splitter_2);
        labelTimer1->setObjectName("labelTimer1");
        labelTimer1->setFrameShape(QFrame::Box);
        splitter_2->addWidget(labelTimer1);
        labelTimer2 = new QLabel(splitter_2);
        labelTimer2->setObjectName("labelTimer2");
        labelTimer2->setFrameShape(QFrame::Panel);
        splitter_2->addWidget(labelTimer2);
        pushButton = new QPushButton(main_widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(650, 390, 93, 28));

        retranslateUi(main_widget);
        QObject::connect(pushButton, &QPushButton::clicked, main_widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(main_widget);
    } // setupUi

    void retranslateUi(QWidget *main_widget)
    {
        main_widget->setWindowTitle(QCoreApplication::translate("main_widget", "main_widget", nullptr));
        label->setText(QCoreApplication::translate("main_widget", "TextLabel", nullptr));
        labelTimer3->setText(QString());
        pushButtonTimer3Stop->setText(QCoreApplication::translate("main_widget", "\346\232\202\345\201\234", nullptr));
        pushButtonTimer3Start->setText(QCoreApplication::translate("main_widget", "\346\201\242\345\244\215", nullptr));
        pushButtonGetValue->setText(QCoreApplication::translate("main_widget", "\350\216\267\345\217\226\345\275\223\345\211\215\347\232\204\345\200\274", nullptr));
        pushButtonHalfValue->setText(QCoreApplication::translate("main_widget", "\350\256\276\347\275\256\345\200\274\345\210\260\344\270\200\345\215\212", nullptr));
        labelTimer1->setText(QString());
        labelTimer2->setText(QString());
        pushButton->setText(QCoreApplication::translate("main_widget", "Colse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_widget: public Ui_main_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WIDGET_H
