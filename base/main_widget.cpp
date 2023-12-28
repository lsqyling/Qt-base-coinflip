//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_main_widget.h" resolved
#include <QTimer>
#include <QMouseEvent>
#include <iostream>
#include <fmt/core.h>
#include "main_widget.h"
#include "ui_main_widget.h"

static void print_helper(const std::string &msg, QMouseEvent *ev)
{
    fmt::print("{}: x:{}, y:{}, globalX:{}, globalY: {}",
               msg, ev->x(), ev->y(), ev->globalX(), ev->globalY());
    std::cout << std::endl;
}

main_widget::main_widget(QWidget *parent) :
        QWidget(parent), ui(new Ui::main_widget)
{
    ui->setupUi(this);


//    get
    connect(ui->pushButtonGetValue, &QPushButton::clicked, [=]() {
        std::cout << ui->widget->get_value() << std::endl;
    });

//    set
    connect(ui->pushButtonHalfValue, &QPushButton::clicked, [=]() {
        ui->widget->set_value(50);
    });

//    启动定时器 单位：毫秒ms
    timer_id1 = startTimer(1000);
    timer_id2 = startTimer(2000);

//    定时器第二种使用方式 推荐的方式
    QTimer *timer = new QTimer(this);
    timer->start(500);

    connect(timer, &QTimer::timeout, [=]() {
        static int i = 0;
        ui->labelTimer3->setText(QString::number(i++));
    });

//    暂停
    connect(ui->pushButtonTimer3Stop, &QPushButton::clicked, [=]() {
        timer->stop();
    });
//    恢复
    connect(ui->pushButtonTimer3Start, &QPushButton::clicked, [=]() {
        timer->start(500);
    });

//    1.安装事件过滤器
    ui->label->installEventFilter(this);
//    2. 重写eventFilter



}

main_widget::~main_widget()
{
    delete ui;
}

void main_widget::timerEvent(QTimerEvent *event)
{
    if (timer_id1 == event->timerId())
    {
        static int i = 0;
        ui->labelTimer1->setText(QString::number(i++));
    }
    if (timer_id2 == event->timerId())
    {
        static int j = 0;
        ui->labelTimer2->setText(QString::number(j++));
    }
}

bool main_widget::eventFilter(QObject *watched, QEvent *event)
{
    if (watched == ui->label)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            if (auto ev = dynamic_cast<QMouseEvent*>(event))
            {
                print_helper("EventFilter: ", ev);
                return true;
            }
        }
    }
//    其他默认处理
    return QObject::eventFilter(watched, event);
}
