//
// Created by 10580 on 2023/12/23.
//

#ifndef QT_TEST_QT5_UI_MAIN_WINDOW_H
#define QT_TEST_QT5_UI_MAIN_WINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class qt5_ui_main_window; }
QT_END_NAMESPACE

class qt5_ui_main_window : public QMainWindow
{
Q_OBJECT

public:
    explicit qt5_ui_main_window(QWidget *parent = nullptr);

    ~qt5_ui_main_window() override;

private:
    Ui::qt5_ui_main_window *ui;
};


#endif //QT_TEST_QT5_UI_MAIN_WINDOW_H
