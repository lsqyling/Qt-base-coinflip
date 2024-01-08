/********************************************************************************
** Form generated from reading UI file 'datetime_timer_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIME_TIMER_WINDOW_H
#define UI_DATETIME_TIMER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datetime_timer_window
{
public:
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonQuit;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonReadDateTime;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QTimeEdit *timeEdit;
    QLineEdit *lineEditTime;
    QPushButton *pushButtonSetTime;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLineEdit *lineEditDate;
    QPushButton *pushButtonSetDate;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *lineEditDateTime;
    QPushButton *pushButtonSetDateTime;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonTimerStart;
    QPushButton *pushButtonTimerEnd;
    QLabel *labelElapsed;
    QLabel *label_5;
    QSpinBox *spinBoxCycle;
    QPushButton *pushButtonSetCycle;
    QSpacerItem *horizontalSpacer_2;
    QLCDNumber *lcdNumberHours;
    QLCDNumber *lcdNumberMinutes;
    QLCDNumber *lcdNumberSeconds;
    QProgressBar *progressBar;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *lineEditCalendar;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *datetime_timer_window)
    {
        if (datetime_timer_window->objectName().isEmpty())
            datetime_timer_window->setObjectName(QString::fromUtf8("datetime_timer_window"));
        datetime_timer_window->resize(1179, 427);
        gridLayout_4 = new QGridLayout(datetime_timer_window);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButtonQuit = new QPushButton(datetime_timer_window);
        pushButtonQuit->setObjectName(QString::fromUtf8("pushButtonQuit"));

        gridLayout_4->addWidget(pushButtonQuit, 1, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(datetime_timer_window);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonReadDateTime = new QPushButton(groupBox);
        pushButtonReadDateTime->setObjectName(QString::fromUtf8("pushButtonReadDateTime"));

        gridLayout->addWidget(pushButtonReadDateTime, 0, 0, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        lineEditTime = new QLineEdit(groupBox);
        lineEditTime->setObjectName(QString::fromUtf8("lineEditTime"));

        gridLayout->addWidget(lineEditTime, 1, 2, 1, 1);

        pushButtonSetTime = new QPushButton(groupBox);
        pushButtonSetTime->setObjectName(QString::fromUtf8("pushButtonSetTime"));

        gridLayout->addWidget(pushButtonSetTime, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        lineEditDate = new QLineEdit(groupBox);
        lineEditDate->setObjectName(QString::fromUtf8("lineEditDate"));

        gridLayout->addWidget(lineEditDate, 2, 2, 1, 1);

        pushButtonSetDate = new QPushButton(groupBox);
        pushButtonSetDate->setObjectName(QString::fromUtf8("pushButtonSetDate"));

        gridLayout->addWidget(pushButtonSetDate, 2, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout->addWidget(dateTimeEdit, 3, 1, 1, 1);

        lineEditDateTime = new QLineEdit(groupBox);
        lineEditDateTime->setObjectName(QString::fromUtf8("lineEditDateTime"));

        gridLayout->addWidget(lineEditDateTime, 3, 2, 1, 1);

        pushButtonSetDateTime = new QPushButton(groupBox);
        pushButtonSetDateTime->setObjectName(QString::fromUtf8("pushButtonSetDateTime"));

        gridLayout->addWidget(pushButtonSetDateTime, 3, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(datetime_timer_window);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonTimerStart = new QPushButton(groupBox_2);
        pushButtonTimerStart->setObjectName(QString::fromUtf8("pushButtonTimerStart"));

        gridLayout_2->addWidget(pushButtonTimerStart, 0, 0, 1, 1);

        pushButtonTimerEnd = new QPushButton(groupBox_2);
        pushButtonTimerEnd->setObjectName(QString::fromUtf8("pushButtonTimerEnd"));

        gridLayout_2->addWidget(pushButtonTimerEnd, 0, 1, 1, 2);

        labelElapsed = new QLabel(groupBox_2);
        labelElapsed->setObjectName(QString::fromUtf8("labelElapsed"));

        gridLayout_2->addWidget(labelElapsed, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        spinBoxCycle = new QSpinBox(groupBox_2);
        spinBoxCycle->setObjectName(QString::fromUtf8("spinBoxCycle"));
        spinBoxCycle->setMaximum(1000000000);
        spinBoxCycle->setValue(1000);

        gridLayout_2->addWidget(spinBoxCycle, 1, 1, 1, 1);

        pushButtonSetCycle = new QPushButton(groupBox_2);
        pushButtonSetCycle->setObjectName(QString::fromUtf8("pushButtonSetCycle"));

        gridLayout_2->addWidget(pushButtonSetCycle, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(413, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 2);

        lcdNumberHours = new QLCDNumber(groupBox_2);
        lcdNumberHours->setObjectName(QString::fromUtf8("lcdNumberHours"));

        gridLayout_2->addWidget(lcdNumberHours, 2, 0, 1, 3);

        lcdNumberMinutes = new QLCDNumber(groupBox_2);
        lcdNumberMinutes->setObjectName(QString::fromUtf8("lcdNumberMinutes"));

        gridLayout_2->addWidget(lcdNumberMinutes, 2, 3, 1, 1);

        lcdNumberSeconds = new QLCDNumber(groupBox_2);
        lcdNumberSeconds->setObjectName(QString::fromUtf8("lcdNumberSeconds"));

        gridLayout_2->addWidget(lcdNumberSeconds, 2, 4, 1, 1);

        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(102);
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 3, 0, 1, 5);


        verticalLayout->addWidget(groupBox_2);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 2, 1);

        groupBox_3 = new QGroupBox(datetime_timer_window);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        lineEditCalendar = new QLineEdit(groupBox_3);
        lineEditCalendar->setObjectName(QString::fromUtf8("lineEditCalendar"));

        gridLayout_3->addWidget(lineEditCalendar, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_3);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_3->addWidget(calendarWidget, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_3, 0, 1, 1, 1);


        retranslateUi(datetime_timer_window);
        QObject::connect(pushButtonQuit, SIGNAL(clicked()), datetime_timer_window, SLOT(close()));

        QMetaObject::connectSlotsByName(datetime_timer_window);
    } // setupUi

    void retranslateUi(QWidget *datetime_timer_window)
    {
        datetime_timer_window->setWindowTitle(QCoreApplication::translate("datetime_timer_window", "datetime_timer_window", nullptr));
        pushButtonQuit->setText(QCoreApplication::translate("datetime_timer_window", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("datetime_timer_window", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        pushButtonReadDateTime->setText(QCoreApplication::translate("datetime_timer_window", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("datetime_timer_window", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("datetime_timer_window", "\346\227\266\351\227\264\357\274\232", nullptr));
        pushButtonSetTime->setText(QCoreApplication::translate("datetime_timer_window", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("datetime_timer_window", "\346\227\245\346\234\237\357\274\232", nullptr));
        pushButtonSetDate->setText(QCoreApplication::translate("datetime_timer_window", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        label_3->setText(QCoreApplication::translate("datetime_timer_window", "\346\227\245\346\234\237\346\227\266\351\227\264\357\274\232", nullptr));
        pushButtonSetDateTime->setText(QCoreApplication::translate("datetime_timer_window", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("datetime_timer_window", "\345\256\232\346\227\266\345\231\250", nullptr));
        pushButtonTimerStart->setText(QCoreApplication::translate("datetime_timer_window", "\345\274\200\345\247\213", nullptr));
        pushButtonTimerEnd->setText(QCoreApplication::translate("datetime_timer_window", "\345\201\234\346\255\242", nullptr));
        labelElapsed->setText(QCoreApplication::translate("datetime_timer_window", "\346\265\201\351\200\235\347\232\204\346\227\266\351\227\264\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("datetime_timer_window", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        spinBoxCycle->setSuffix(QCoreApplication::translate("datetime_timer_window", " ms", nullptr));
        pushButtonSetCycle->setText(QCoreApplication::translate("datetime_timer_window", "\350\256\276\347\275\256\345\221\250\346\234\237", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("datetime_timer_window", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_7->setText(QCoreApplication::translate("datetime_timer_window", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class datetime_timer_window: public Ui_datetime_timer_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIME_TIMER_WINDOW_H
