//
// Created by 10580.
//
#include <QPropertyAnimation>
#include <QPixmap>
#include <utility>

#include "img_push_button.h"
#include "fmt/core.h"

img_push_button::img_push_button(QString normal_img, QString pressed_img) :
normal_img_path_(std::move(normal_img)),
pressed_img_path_(std::move(pressed_img))
{
    QPixmap pix;
    if (!pix.load(normal_img_path_))
    {
        fmt::print(stderr, "图片加载失败");
        return ;
    }
//    设置固定图片大小
    this->setFixedSize(pix.width(), pix.height());
//    设置不规则图片样式
    this->setStyleSheet("QPushButton{border:0px}");
//    设置图标
    this->setIcon(pix);
//    设置图标大小
    this->setIconSize({pix.width(), pix.height()});
}


void img_push_button::bounce_up()
{
//    创建动态对象
    auto animation = new QPropertyAnimation(this, "geometry");
//    设置动画时间间隔
    animation->setDuration(200);
//    起始位置
    animation->setStartValue(QRect{this->x(), this->y(), this->width(), this->height()});
//    结束位置
    animation->setEndValue(QRect{this->x(), this->y() + 10, this->width(), this->height()});
//    设置弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);
//    执行动画
    animation->start();
}

void img_push_button::bounce_down()
{
    //    创建动态对象
    auto animation = new QPropertyAnimation(this, "geometry");
//    设置动画时间间隔
    animation->setDuration(200);
//    起始位置
    animation->setStartValue(QRect{this->x(), this->y() + 10, this->width(), this->height()});
//    结束位置
    animation->setEndValue(QRect{this->x(), this->y(), this->width(), this->height()});
//    设置弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);
//    执行动画
    animation->start();
}

void img_push_button::mousePressEvent(QMouseEvent *e)
{
    if (!pressed_img_path_.isEmpty())
    {
        QPixmap pix;
        if (!pix.load(pressed_img_path_))
        {
            fmt::print(stderr, "图片加载失败");
            return ;
        }
        this->setFixedSize(pix.width(), pix.height());
        this->setStyleSheet("QPushButton{border:0px}");
        this->setIcon(pix);
        this->setIconSize({pix.width(), pix.height()});
    }
    QAbstractButton::mousePressEvent(e);
}

void img_push_button::mouseReleaseEvent(QMouseEvent *e)
{
    if (!pressed_img_path_.isEmpty())
    {
        QPixmap pix;
        if (!pix.load(normal_img_path_))
        {
            fmt::print(stderr, "图片加载失败");
            return ;
        }
        this->setFixedSize(pix.width(), pix.height());
        this->setStyleSheet("QPushButton{border:0px}");
        this->setIcon(pix);
        this->setIconSize({pix.width(), pix.height()});
    }
    QAbstractButton::mouseReleaseEvent(e);
}
