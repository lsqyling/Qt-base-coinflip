//
// Created by 10580 on 2023/12/24.
//

#ifndef QT_TEST_COMMON_CTRL_BUTTON_H
#define QT_TEST_COMMON_CTRL_BUTTON_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class common_ctrl_button; }
QT_END_NAMESPACE

class common_ctrl_button : public QWidget
{
Q_OBJECT

public:
    explicit common_ctrl_button(QWidget *parent = nullptr);

    ~common_ctrl_button() override;

private:
    Ui::common_ctrl_button *ui;
};


#endif //QT_TEST_COMMON_CTRL_BUTTON_H
