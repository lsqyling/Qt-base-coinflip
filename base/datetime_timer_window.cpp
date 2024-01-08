//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_datetime_timer_window.h" resolved

#include "datetime_timer_window.h"
#include "ui_datetime_timer_window.h"


datetime_timer_window::datetime_timer_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::datetime_timer_window)
{
    ui->setupUi(this);
    this->setWindowTitle("日期时间，定时器");


    timer_ = new QTimer(this);
    timer_->setInterval(1000);

    on_button_date_time_clicked();
    on_calendar_widget_section();
    on_timer_timeout();


}

datetime_timer_window::~datetime_timer_window()
{
    delete ui;
}

void datetime_timer_window::on_button_date_time_clicked()
{
    connect(ui->pushButtonReadDateTime, &QPushButton::clicked,
            [=, this] {
                QDateTime dt = QDateTime::currentDateTime();
                ui->timeEdit->setTime(dt.time());
                ui->lineEditTime->setText(dt.toString("hh:mm:ss"));
                ui->dateEdit->setDate(dt.date());
                ui->lineEditDate->setText(dt.toString("yyyy-MM-dd"));
                ui->dateTimeEdit->setDateTime(dt);
                ui->lineEditDateTime->setText(dt.toString("yyyy-MM-dd hh:mm:ss"));
            });

    connect(ui->pushButtonSetTime, &QPushButton::clicked,
            [=, this] {
                QString str = ui->lineEditTime->text();
                QTime time = QTime::fromString(str, "hh:mm:ss");
                ui->timeEdit->setTime(time);
            });
    connect(ui->pushButtonSetDate, &QPushButton::clicked,
            [=, this] {
                QString str = ui->lineEditDate->text();
                QDate date = QDate::fromString(str, "yyyy-MM-dd");
                ui->dateEdit->setDate(date);
            });
    connect(ui->pushButtonSetDateTime, &QPushButton::clicked,
            [=, this] {
                QString str = ui->lineEditDateTime->text();
                QDateTime dt = QDateTime::fromString(str, "yyyy-MM-dd hh:mm:ss");
                ui->dateTimeEdit->setDateTime(dt);
            });

}

void datetime_timer_window::on_calendar_widget_section()
{
    connect(ui->calendarWidget, &QCalendarWidget::selectionChanged,
            [=, this] {
                QDate date = ui->calendarWidget->selectedDate();
                ui->lineEditCalendar->setText(date.toString("yyyy年MM月dd日"));
            });


}

void datetime_timer_window::on_timer_timeout()
{
    connect(ui->pushButtonSetCycle, &QPushButton::clicked,
            [=, this] {
                timer_->setInterval(ui->spinBoxCycle->value());
            });

    connect(ui->pushButtonTimerStart, &QPushButton::clicked,
            [=, this] {
                timer_->start();
                ui->pushButtonTimerStart->setEnabled(false);
                ui->spinBoxCycle->setEnabled(false);
                ui->pushButtonTimerEnd->setEnabled(true);
                time_start_ = QTime::currentTime();
            });

    connect(ui->pushButtonTimerEnd, &QPushButton::clicked,
            [=, this] {
                timer_->stop();
                ui->pushButtonTimerStart->setEnabled(true);
                ui->spinBoxCycle->setEnabled(true);
                ui->pushButtonTimerEnd->setEnabled(false);
                int tm_msecs = time_start_.msecsTo(QTime::currentTime());
                ui->labelElapsed->setText(
                        QString::asprintf("流逝的时间是：%d秒%d毫秒", tm_msecs / 1000, tm_msecs % 1000));
            });

    connect(timer_, &QTimer::timeout,
            [=, this] {
                ui->lcdNumberHours->display(QTime::currentTime().hour());
                ui->lcdNumberMinutes->display(QTime::currentTime().minute());
                ui->lcdNumberSeconds->display(QTime::currentTime().second());
                int count = ui->progressBar->value();
                ++count;
                if (count > 100)
                    count = 0;
                ui->progressBar->setValue(count);
            });
}























