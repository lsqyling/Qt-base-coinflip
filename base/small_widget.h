//
// Created by 10580 on 2023/12/24.
//

#ifndef QT_TEST_SMALL_WIDGET_H
#define QT_TEST_SMALL_WIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class small_widget; }
QT_END_NAMESPACE

class small_widget : public QWidget
{
Q_OBJECT

public:
    explicit small_widget(QWidget *parent = nullptr);

    ~small_widget() override;

    int get_value() const;

    void set_value(int num);




private:
    Ui::small_widget *ui;

};


#endif //QT_TEST_SMALL_WIDGET_H
