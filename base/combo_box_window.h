//
// Created by 10580.
//

#ifndef QT_BASE_COMBO_BOX_WINDOW_H
#define QT_BASE_COMBO_BOX_WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class combo_box_window; }
QT_END_NAMESPACE

class combo_box_window : public QWidget
{
Q_OBJECT

public:
    explicit combo_box_window(QWidget *parent = nullptr);

    ~combo_box_window() override;

private:
    void on_button_init_clear_list();
    void on_button_city_NO();
    void on_check_box_checked();
    void on_combo_box_changed();
    void on_plain_text_edit_events();


    Ui::combo_box_window *ui;
};


#endif //QT_BASE_COMBO_BOX_WINDOW_H
