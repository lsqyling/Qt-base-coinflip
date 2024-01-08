//
// Created by 10580.
//

#ifndef QT_BASE_SPINBOX_WINDOW_H
#define QT_BASE_SPINBOX_WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class spinbox_window; }
QT_END_NAMESPACE

class spinbox_window : public QWidget
{
Q_OBJECT

public:
    explicit spinbox_window(QWidget *parent = nullptr);

    ~spinbox_window() override;

private:

    void on_button_calc();
    void on_spin_box_by_price_total();

    void on_button_base_conversion();


    Ui::spinbox_window *ui;
};


#endif //QT_BASE_SPINBOX_WINDOW_H
