//
// Created by 10580 on 2023/12/23.
//

#ifndef QT_TEST_LOGIN_WINDOW_H
#define QT_TEST_LOGIN_WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class login_window; }
QT_END_NAMESPACE

class login_window : public QWidget
{
Q_OBJECT

public:
    explicit login_window(QWidget *parent = nullptr);

    ~login_window() override;

private:
    Ui::login_window *ui;
};


#endif //QT_TEST_LOGIN_WINDOW_H
