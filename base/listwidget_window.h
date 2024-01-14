//
// Created by 10580.
//

#ifndef QT_BASE_LISTWIDGET_WINDOW_H
#define QT_BASE_LISTWIDGET_WINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class listwidget_window; }
QT_END_NAMESPACE

class listwidget_window : public QMainWindow
{
Q_OBJECT

public:
    explicit listwidget_window(QWidget *parent = nullptr);

    ~listwidget_window() override;


private:
    void on_tool_box_event();
    void on_action_event();
    void on_action_selection();
    void on_check_box_event();
    void on_list_widget_right_key_menu();


    Ui::listwidget_window *ui;
};


#endif //QT_BASE_LISTWIDGET_WINDOW_H
