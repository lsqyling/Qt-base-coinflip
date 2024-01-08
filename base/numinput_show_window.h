//
// Created by 10580.
//

#ifndef QT_BASE_NUMINPUT_SHOW_WINDOW_H
#define QT_BASE_NUMINPUT_SHOW_WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class numinput_show_window; }
QT_END_NAMESPACE

class numinput_show_window : public QWidget
{
Q_OBJECT

public:
    explicit numinput_show_window(QWidget *parent = nullptr);

    ~numinput_show_window() override;

private:
    void on_horizontal_slider_rgb();
    void on_horizontal_slider_H();
    void on_vertical_slider_V();
    void on_dial_value_changed();
    void on_radio_button_checked();



    Ui::numinput_show_window *ui;
};


#endif //QT_BASE_NUMINPUT_SHOW_WINDOW_H
