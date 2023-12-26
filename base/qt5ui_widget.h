//
// Created by 10580 on 2023/12/22.
//

#ifndef QT_TEST_QT5UI_WIDGET_H
#define QT_TEST_QT5UI_WIDGET_H

#include <QWidget>
#include "teacher.h"
#include "student.h"


QT_BEGIN_NAMESPACE
namespace Ui { class qt5ui_widget; }
QT_END_NAMESPACE

class qt5ui_widget : public QWidget
{
Q_OBJECT

public:
    explicit qt5ui_widget(QWidget *parent = nullptr);

    ~qt5ui_widget() override;



private:


    void class_over();



    teacher *tc_;
    student *stu_;


};


#endif //QT_TEST_QT5UI_WIDGET_H
