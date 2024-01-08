//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_main_scence.h" resolved
#include <QSound>
#include <QTimer>
#include <QPainter>
#include <iostream>
#include "main_scene.h"
#include "ui_main_scene.h"
#include "img_push_button.h"
#include "fmt/core.h"


main_scene::main_scene(QWidget *parent) :
        QMainWindow(parent), level_scene_(new choose_level_scene), ui(new Ui::main_scene)
{
    ui->setupUi(this);
//    设置固定大小
    this->setFixedSize(400, 600);
//    设置应用图片
    this->setWindowIcon(QPixmap("../images/Coin0001.png"));
//    设置窗口标题
    this->setWindowTitle("CoinFlipGames");

//  设置推出按钮
    connect(ui->actionQuit, &QAction::triggered, [=, this]() {
        this->close();
    });
//    设置开始按钮
    auto start_btn = new img_push_button("../images/MenuSceneStartButton.png");
    start_btn->setParent(this);
    start_btn->move((this->width() - start_btn->width()) * 0.5, this->height() * 0.7);

//    主场景监听level_scene 返回信号
    connect(level_scene_, &choose_level_scene::img_btn_back_signal, this, [=]() {
        this->setGeometry(level_scene_->geometry());
        level_scene_->hide();
        this->show();
    });

//    开始按钮的音效
    auto start_btn_sound = new QSound("../images/TapButtonSound.wav", this);


    connect(start_btn, &QPushButton::clicked, [=, this]() {
//        播放音效资源
        start_btn_sound->play();
//        弹跳效果
        start_btn->bounce_down();
        start_btn->bounce_up();




//        延时进入到选择关卡场景中
        QTimer::singleShot(500, this, [=, this]() {
//            自身隐藏
            this->hide();
//            获取位置
            level_scene_->setGeometry(this->geometry());
//            显示选择关卡场景
            level_scene_->show();



        });


    });



}

main_scene::~main_scene()
{
    delete ui;
}

void main_scene::paintEvent(QPaintEvent *event)
{
//    绘制背景图
    QPainter painter(this);
    QPixmap pix;
    pix.load("../images/PlayLevelSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(), pix);
//    背景图标
    pix.load("../images/Title.png");
    pix = pix.scaled(pix.width() * 0.5, pix.height() * 0.5);
    painter.drawPixmap(10, 30, pix);

    QWidget::paintEvent(event);
}



















