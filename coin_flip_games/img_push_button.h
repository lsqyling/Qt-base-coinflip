//
// Created by 10580.
//

#ifndef QT_BASE_IMG_PUSH_BUTTON_H
#define QT_BASE_IMG_PUSH_BUTTON_H
#include <QPushButton>
#include <QString>

class img_push_button : public QPushButton
{
public:
    img_push_button(QString normal_img, QString pressed_img = "");

//    设置弹跳效果
//    向上弹跳
    void bounce_up();
//    向下弹跳
    void bounce_down();


//    重写鼠标点击和释放的动作
protected:
    void mousePressEvent(QMouseEvent *e) override;

    void mouseReleaseEvent(QMouseEvent *e) override;


private:
    QString normal_img_path_;
    QString pressed_img_path_;



};


#endif //QT_BASE_IMG_PUSH_BUTTON_H
