//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_play_scene.h" resolved

#include <QPainter>
#include <QTimer>
#include <QSound>
#include "play_scene.h"
#include "ui_play_scene.h"
#include "img_push_button.h"
#include "fmt/core.h"
#include "QLabel"
#include "coin_push_button.h"
#include "dataconfig.h"
#include "QPropertyAnimation"


play_scene::play_scene(int level, QWidget *parent) :
        QMainWindow(parent), index_level_(level), ui(new Ui::play_scene)
{
    ui->setupUi(this);
    this->setFixedSize(400, 600);
    this->setWindowIcon(QPixmap("../images/Coin0001.png"));
    this->setWindowTitle("翻金币场景");
    connect(ui->actionQuit, &QAction::triggered, [=]() {
        this->close();
    });

//    添加音效
    auto back_sound = new QSound("../images/BackButtonSound.wav", this);
    auto flip_sound = new QSound("../images/ConFlipSound.wav", this);
    auto win_sound = new QSound("../images/LevelWinSound.wav", this);


    //    返回按钮
    auto back_btn = new img_push_button("../images/BackButton.png", "../images/BackButtonSelected.png");
    back_btn->setParent(this);
    back_btn->move(this->width() - back_btn->width(), this->height() - back_btn->height());
    connect(back_btn, &img_push_button::clicked, [=]() {
//        告诉主场景我返回了， 主场景监听img_push_button 返回信号
//        返回音效
        back_sound->play();
//        延时返回
        QTimer::singleShot(500, this, [=]() {
            emit this->img_btn_back_signal();
        });
    });

//    初始化每个关卡数据
    data_config data;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            game_array_[i][j] = data.mData[this->index_level_][i][j];
        }
    }


//    显示当前关卡数
    auto label = new QLabel;
    label->setParent(this);
    QFont font;
    font.setFamily("华文新魏");
    font.setPointSize(20);

    label->setFont(font);
    std::string str = fmt::format("Level:{}", this->index_level_);
    label->setText(QString::fromStdString(str));
    label->setGeometry(30, this->height() - 50, 150, 50);
//    加载胜利的图片
    auto win_label = load_win_picture_use_label();


//    显示金币背景图案
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            QPixmap pix("../images/BoardNode.png");
            auto label_node = new QLabel;
            label_node->setParent(this);
            label_node->setPixmap(pix);
            label_node->setGeometry(0, 0, pix.width(), pix.height());
            label_node->move(85 + i * 60, 200 + j * 60);
//
            QString coin_path = game_array_[i][j] ? "../images/Coin0001.png" : "../images/Coin0008.png";
            auto coin = new coin_push_button(coin_path);
            coin->setParent(this);
            coin->move(87 + i * 60, 205 + j * 60);

            coin->pos_x = i;
            coin->pos_y = j;
            coin->flag = game_array_[i][j];

            coin_array_[i][j] = coin;


//            点击金币进行反转
            connect(coin, &coin_push_button::clicked, [=]() {
//                翻金币音效
                flip_sound->play();
                coin->change_flag();
                game_array_[i][j] ? game_array_[i][j] = 0 : game_array_[i][j] = 1;
//               翻转周围的金币
//                延时翻转效果
                QTimer::singleShot(300, this, [=]() {
                    //                翻转右侧
                    if (coin->pos_x + 1 <= 3)
                    {
                        coin_array_[coin->pos_x + 1][coin->pos_y]->change_flag();
                        game_array_[coin->pos_x + 1][coin->pos_y] = game_array_[coin->pos_x + 1][coin->pos_y] ? 0 : 1;
                    }
                    //                翻转左侧
                    if (coin->pos_x - 1 >= 0)
                    {
                        coin_array_[coin->pos_x - 1][coin->pos_y]->change_flag();
                        game_array_[coin->pos_x - 1][coin->pos_y] = game_array_[coin->pos_x - 1][coin->pos_y] ? 0 : 1;

                    }
                    //                翻转上侧
                    if (coin->pos_y - 1 >= 0)
                    {

                        coin_array_[coin->pos_x][coin->pos_y - 1]->change_flag();
                        game_array_[coin->pos_x][coin->pos_y - 1] = game_array_[coin->pos_x][coin->pos_y - 1] ? 0 : 1;
                    }
                    //                翻转下侧
                    if (coin->pos_y + 1 <= 3)
                    {
                        coin_array_[coin->pos_x][coin->pos_y + 1]->change_flag();
                        game_array_[coin->pos_x][coin->pos_y + 1] = game_array_[coin->pos_x][coin->pos_y + 1] ? 0 : 1;
                    }
                    if (is_win())
                    {

                        for (int i = 0; i < 4; ++i)
                        {
                            for (int j = 0; j < 4; ++j)
                            {
                                coin_array_[i][j]->is_win = true;
                            }
                        }
//                        执行胜利的动画
                        win_picture_animation(win_label);
//                        胜利音效
                        win_sound->play();


                    }


                });


            });


        }
    }


}

void play_scene::paintEvent(QPaintEvent *event)
{
//    create backgrounds
    QPainter painter(this);
    QPixmap pix;
    pix.load("../images/PlayLevelSceneBg.png");
    painter.drawPixmap(0, 0, this->width(), this->height(), pix);
//    loading title
    pix.load("../images/Title.png");
    pix = pix.scaled(pix.width() * 0.5, pix.height() * 0.7);
    painter.drawPixmap(10, 30, pix.width(), pix.height(), pix);


    QWidget::paintEvent(event);
}


play_scene::~play_scene()
{
    delete ui;
}


bool play_scene::is_win() const
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (!game_array_[i][j])
                return false;
        }
    }
    return true;
}


QLabel *play_scene::load_win_picture_use_label()
{
    auto label = new QLabel;
    QPixmap pix;
    pix.load("../images/LevelCompletedDialogBg.png");
    label->setParent(this);
    label->setGeometry(0, 0, pix.width(), pix.height());
    label->setPixmap(pix);
    label->move((this->width() - pix.width()) * 0.5, -pix.height());
    return label;
}

void play_scene::win_picture_animation(QLabel *label)
{
    auto animation = new QPropertyAnimation(label, "geometry");
    animation->setDuration(1000);
    animation->setStartValue(QRect(label->x(), label->y(), label->width(), label->height()));
    animation->setEndValue(QRect(label->x(), label->y() + 114, label->width(), label->height()));
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}

