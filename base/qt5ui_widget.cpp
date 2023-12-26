//
// Created by 10580 on 2023/12/22.
//

// You may need to build the project (run Qt uic code generator) to get "ui_qt5ui_widget.h" resolved

#include <QPushButton>
#include "qt5ui_widget.h"
#include "my_push_button.h"



qt5ui_widget::qt5ui_widget(QWidget *parent) :
        QWidget(parent)
{
    auto *btn = new QPushButton;
    btn->setParent(this);
    btn->setText("第一个按钮");

    auto *btn2 = new QPushButton("第二个按钮", this);
    btn2->move(100, 100);
    btn2->resize(100, 50);


    auto *my_btn = new my_push_button;
    my_btn->setParent(this);
    my_btn->move(200, 0);
    my_btn->setText("myselfbutton");


    connect(my_btn, &QPushButton::clicked, this, &QWidget::close);


    tc_ = new teacher(this);
    stu_ = new student(this);
//
//    connect(tc_, &teacher::hungry, stu_, &student::treat);
//    class_over();


//    连接代参数的 信号和槽
    void (teacher:: *tc_signal)(QString) = &teacher::hungry;
    void (student:: *stu_slot)(const QString&) = &student::treat;
    connect(tc_, tc_signal, stu_, stu_slot);
    class_over();



//    点击按钮触发下课
    auto btn3 = new QPushButton("下课", this);
    btn3->move(0, 200);
    connect(btn3, &QPushButton::clicked, this, &qt5ui_widget::class_over);

//    信号连接信号

    void (teacher:: *tc_signal2)() = &teacher::hungry;
    void (student:: *stu_slot2)() = &student::treat;
    connect(tc_, tc_signal2, stu_, stu_slot2);
    auto btn4 = new QPushButton("信号连接信号", this);
    btn4->move(0, 300);

    connect(btn4, &QPushButton::clicked, tc_, tc_signal2);

//    断开信号
//    disconnect(tc_, tc_signal, stu_, stu_slot);


    /*
     * 1.信号可以连接信号
     * 2. 一个信号可以连接多个槽函数
     * 3. 多个信号可以连接同一个槽函数
     * 4. 信号和槽函数的参数必须类型一一对应
     * 5. 信号参数的个数可以多余槽函数，但是类型应该一一对应
     */

//    lambda
    auto btn5 = new QPushButton("Lambda", this);
    btn5->move(0, 400);
    connect(btn5, &QPushButton::clicked, this, [=](){
        emit tc_->hungry("酸菜鱼");
        this->close();
    });


    resize(800, 600);
    setFixedSize(800, 600);
    setWindowTitle("第一个窗口");


}


void qt5ui_widget::class_over()
{
//    emit tc_->hungry();

    emit tc_->hungry("宫保鸡丁");
}


qt5ui_widget::~qt5ui_widget() = default;
