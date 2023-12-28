//
// Created by 10580.
//

#include "coin_push_button.h"
#include "fmt/core.h"

coin_push_button::coin_push_button(const QString& img_path)
{
    QPixmap pix;
    if (!pix.load(img_path))
    {
        fmt::print(stderr, "图片: {}加载失败\n");
        return;
    }
    this->setFixedSize(pix.width(), pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    this->setIcon(pix);
    this->setIconSize({pix.width(), pix.height()});

    timer1 = new QTimer(this);
    timer2 = new QTimer(this);

    connect(timer1, &QTimer::timeout, [=]() {
        QPixmap pix;
        std::string str = fmt::format("../images/Coin000{}.png", min++);
        pix.load(QString::fromStdString(str));

        this->setFixedSize(pix.width(), pix.height());
        this->setStyleSheet("QPushButton{border:0px}");
        this->setIcon(pix);
        this->setIconSize({pix.width(), pix.height()});

        if (min > max)
        {
            min = 1;
            is_animation = false;
            timer1->stop();
        }

    });

    connect(timer2, &QTimer::timeout, [=]() {
        QPixmap pix;
        std::string str = fmt::format("../images/Coin000{}.png", max--);
        pix.load(QString::fromStdString(str));

        this->setFixedSize(pix.width(), pix.height());
        this->setStyleSheet("QPushButton{border:0px}");
        this->setIcon(pix);
        this->setIconSize({pix.width(), pix.height()});

        if (max < min)
        {
            max = 8;
            is_animation = false;
            timer2->stop();
        }
    });




}

void coin_push_button::change_flag()
{
    if (flag)
    {
        timer1->start(30);
        flag = false;
    }
    else
    {
        timer2->start(30);
        flag = true;
    }
    is_animation = true;
}

void coin_push_button::mousePressEvent(QMouseEvent *e)
{
    if (is_animation || is_win)
        return;
    QAbstractButton::mousePressEvent(e);
}
