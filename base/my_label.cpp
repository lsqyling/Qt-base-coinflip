//
//
#include <iostream>
#include <format>
#include "my_label.h"
#include <QMouseEvent>


void my_label::leaveEvent(QEvent *event)
{
    std::cout << "鼠标离开了..." << std::endl;
}

my_label::my_label(QWidget *parent) : QLabel(parent)
{
//    设置鼠标追踪
    setMouseTracking(false);
}

static void print_helper(const std::string &msg, QMouseEvent *ev)
{
    std::cout << std::format("{}: x:{}, y:{}, globalX:{}, globalY: {}",
               msg, ev->x(), ev->y(), ev->globalX(), ev->globalY());
    std::cout << std::endl;
}


void my_label::mousePressEvent(QMouseEvent *ev)
{

    if (ev->button() == Qt::LeftButton)
        print_helper("鼠标按下", ev);
}

void my_label::mouseMoveEvent(QMouseEvent *ev)
{
    if (ev->buttons() & Qt::LeftButton)
        print_helper("鼠标在移动", ev);
}

void my_label::mouseReleaseEvent(QMouseEvent *ev)
{
    if (ev->button() == Qt::LeftButton)
        print_helper("鼠标释放", ev);
}

bool my_label::event(QEvent *e)
{
    if (e->type() == QEvent::MouseButtonPress)
    {
        if (auto ev = dynamic_cast<QMouseEvent *>(e))
            print_helper("Event 函数中：", ev);

//        返回true ，代表用户自己处理，不向下分发
        return true;
    }

//    其他事件交给父类处理
    return QLabel::event(e);
}

void my_label::enterEvent(QEvent *event)
{
    std::cout << "鼠标进入了..." << std::endl;
    QWidget::enterEvent(event);
}


