//
// Created by 10580.
//

#ifndef QT_BASE_CHOOSE_LEVEL_SCENE_H
#define QT_BASE_CHOOSE_LEVEL_SCENE_H

#include <QMainWindow>
#include "play_scene.h"


QT_BEGIN_NAMESPACE
namespace Ui { class choose_level_scene; }
QT_END_NAMESPACE

class choose_level_scene : public QMainWindow
{
Q_OBJECT

public:
    explicit choose_level_scene(QWidget *parent = nullptr);

    ~choose_level_scene() override;

//    自定义返回信号
signals:
    void img_btn_back_signal();


protected:
    void paintEvent(QPaintEvent *event) override;


private:


    play_scene *play_scene_{nullptr};

    Ui::choose_level_scene *ui;
};


#endif //QT_BASE_CHOOSE_LEVEL_SCENE_H
