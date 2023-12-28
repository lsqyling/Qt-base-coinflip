//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_choose_level_scene.h" resolved
#include <QLabel>
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include "choose_level_scene.h"
#include "ui_choose_level_scene.h"
#include "img_push_button.h"
#include "fmt/core.h"
#include "QSound"


choose_level_scene::choose_level_scene(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::choose_level_scene)
{
    ui->setupUi(this);
//    配置选择关卡场景
    this->setFixedSize(400, 600);
//    设置图标
    this->setWindowIcon(QIcon("../images/Coin0001.png"));
//    设置场景标题
    this->setWindowTitle("选择关卡场景");
//    点击实现游戏推出
    connect(ui->actionQuit, &QAction::triggered, [=]() {
        this->close();
    });
//    选择关卡音效
    auto choose_sound = new QSound("../images/TapButtonSound.wav", this);
//    返回音效
    auto back_sound = new QSound("../images/BackButtonSound.wav", this);


//    返回按钮
    auto back_btn = new img_push_button("../images/BackButton.png", "../images/BackButtonSelected.png");
    back_btn->setParent(this);
    back_btn->move(this->width() - back_btn->width(), this->height() - back_btn->height());
    connect(back_btn, &img_push_button::clicked, [=]() {
//        告诉主场景我返回了， 主场景监听img_push_button 返回信号
//        开启返回音效
        back_sound->play();
//        延时返回
        QTimer::singleShot(500, this, [=]() {
            emit this->img_btn_back_signal();
        });
    });

//    创建选择关卡按钮
    for (int i = 0; i < 20; ++i)
    {
        auto menu_btn = new img_push_button("../images/LevelIcon.png");
        menu_btn->setParent(this);
        menu_btn->move(48 + i%4 * 80, 130 + i/4 * 80);

//        监听鼠标事件
        connect(menu_btn, &img_push_button::clicked, [=]() {
//            播放按钮音效
            choose_sound->play();
//            进入关卡场景
            this->hide();
            play_scene_ = new play_scene(i+1);
            play_scene_->setGeometry(this->geometry());
            play_scene_->show();

            connect(play_scene_, &play_scene::img_btn_back_signal, [=]() {
                this->setGeometry(play_scene_->geometry());
                this->show();
                delete play_scene_;
                play_scene_ = nullptr;
            });



//            fmt::print(stderr, "这是第{}关\n", i + 1);
        });







        auto label = new QLabel;
        label->setParent(this);
        label->setFixedSize(menu_btn->width(), menu_btn->height());
        label->setText(QString::number(i+1));
        label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        label->move(48 + i%4 * 80, 130 + i/4 * 80);
//        设置鼠标穿透事件
        label->setAttribute(Qt::WA_TransparentForMouseEvents);

    }



}




choose_level_scene::~choose_level_scene()
{
    delete ui;
}

void choose_level_scene::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load("../images/OtherSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(), pix);

    pix.load("../images/Title.png");
    painter.drawPixmap((this->width() - pix.width()) * 0.5, 30, pix);


    QWidget::paintEvent(event);
}
