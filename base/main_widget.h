//
// Created by 10580.
//

#ifndef QT_TEST_MAIN_WIDGET_H
#define QT_TEST_MAIN_WIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class main_widget; }
QT_END_NAMESPACE

class main_widget : public QWidget
{
Q_OBJECT

public:
    explicit main_widget(QWidget *parent = nullptr);

    ~main_widget() override;

    bool eventFilter(QObject *watched, QEvent *event) override;
protected:

    void timerEvent(QTimerEvent *event) override;


private:
//    定时器唯一id;
    int timer_id1{0};
    int timer_id2{0};


    Ui::main_widget *ui;
};


#endif //QT_TEST_MAIN_WIDGET_H
