//
// Created by 10580.
//

#ifndef QT_TEST_MY_PUSH_BUTTON_H
#define QT_TEST_MY_PUSH_BUTTON_H

#include <QWidget>
#include "QPushButton"


QT_BEGIN_NAMESPACE
namespace Ui { class my_push_button; }
QT_END_NAMESPACE

class my_push_button : public QPushButton
{
Q_OBJECT

public:
    explicit my_push_button(QWidget *parent = nullptr);

    ~my_push_button() override;

};


#endif //QT_TEST_MY_PUSH_BUTTON_H
