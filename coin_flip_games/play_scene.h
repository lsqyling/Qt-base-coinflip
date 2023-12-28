//
// Created by 10580.
//

#ifndef QT_BASE_PLAY_SCENE_H
#define QT_BASE_PLAY_SCENE_H

#include <QMainWindow>
#include <array>
#include "coin_push_button.h"
#include "QLabel"


QT_BEGIN_NAMESPACE
namespace Ui { class play_scene; }
QT_END_NAMESPACE

class play_scene : public QMainWindow
{
Q_OBJECT

public:
    explicit play_scene(int level, QWidget *parent = nullptr);

    ~play_scene() override;


    bool is_win() const;


signals:
    void img_btn_back_signal();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    int index_level_;
    std::array<std::array<int, 4>, 4> game_array_{};
    std::array<std::array<coin_push_button *, 4>, 4> coin_array_{};

    Ui::play_scene *ui;

    QLabel * load_win_picture_use_label();

    void win_picture_animation(QLabel *label);
};


#endif //QT_BASE_PLAY_SCENE_H
