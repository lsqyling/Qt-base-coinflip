//
// Created by 10580.
//

#ifndef QT_BASE_COIN_PUSH_BUTTON_H
#define QT_BASE_COIN_PUSH_BUTTON_H


#include "QPushButton"
#include "QTimer"

class coin_push_button : public QPushButton
{
Q_OBJECT
public:
    explicit coin_push_button(const QString &img_path);

    void change_flag();


    int pos_x, pos_y;
    bool flag;
    QTimer *timer1, *timer2;
    int min{1};
    int max{8};

    bool is_animation{false};
    bool is_win{false};

protected:
    void mousePressEvent(QMouseEvent *e) override;


};


#endif //QT_BASE_COIN_PUSH_BUTTON_H
