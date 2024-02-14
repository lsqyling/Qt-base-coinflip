//
// Created by 10580.
//

#ifndef QT_BASE_PAINT_APP_WINDOW_H
#define QT_BASE_PAINT_APP_WINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QLabel>
#include <random>

QT_BEGIN_NAMESPACE
namespace Ui { class paint_app_window; }
QT_END_NAMESPACE

class paint_app_window : public QMainWindow
{
Q_OBJECT

public:
    explicit paint_app_window(QWidget *parent = nullptr);

    ~paint_app_window() override;

    static int random(int left, int right);

private:
    void on_key_pressed(QKeyEvent *event);
    void on_mouse_double_clicked(QPoint point);
    void on_mouse_pressed(QPoint point);
    void on_item_actions();
    void on_edit_actions();

    QLabel *label_item_info_{nullptr};
    QGraphicsScene *scene_{nullptr};
    int seq_num_{0};

    static constexpr int ItemId = 1;
    static constexpr int ItemDesc = 2;



    Ui::paint_app_window *ui;
};


#endif //QT_BASE_PAINT_APP_WINDOW_H
