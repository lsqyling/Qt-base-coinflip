//
// Created by 10580.
//

#ifndef QT_BASE_DATETIME_TIMER_WINDOW_H
#define QT_BASE_DATETIME_TIMER_WINDOW_H

#include <QWidget>
#include <QTimer>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class datetime_timer_window; }
QT_END_NAMESPACE

class datetime_timer_window : public QWidget
{
Q_OBJECT

public:
    explicit datetime_timer_window(QWidget *parent = nullptr);

    ~datetime_timer_window() override;

private:
    void on_button_date_time_clicked();
    void on_calendar_widget_section();
    void on_timer_timeout();



    QTimer *timer_{nullptr};
    QTime time_start_;
    Ui::datetime_timer_window *ui;
};


#endif //QT_BASE_DATETIME_TIMER_WINDOW_H
