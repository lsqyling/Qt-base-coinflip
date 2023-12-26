//
// Created by 10580 on 2023/12/25.
//

#ifndef QT_TEST_PAINT_WIDGET_H
#define QT_TEST_PAINT_WIDGET_H

#include <QWidget>
#include "ui_paint_widget.h"


QT_BEGIN_NAMESPACE
namespace Ui { class paint_widdget; }
QT_END_NAMESPACE

class paint_widget : public QWidget
{
Q_OBJECT

public:
    explicit paint_widget(QWidget *parent = nullptr);

    ~paint_widget() override;

protected:
//    绘图事件
    void paintEvent(QPaintEvent *event) override;

private:

    int pos_x{0};


    Ui::paint_widget *ui;
};


#endif //QT_TEST_PAINT_WIDGET_H
