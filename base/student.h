//
// Created by 10580 on 2023/12/23.
//

#ifndef QT_TEST_STUDENT_H
#define QT_TEST_STUDENT_H
#include <QObject>

class student : public QObject
{
    Q_OBJECT
public:
    explicit student(QObject *parent);

//  早期QT 必须写到public slots,高级版本写在public 或全局作用域下
//  返回值void 需要生命需要实现
//  可以有参数可以重载
    void treat();

    void treat(const QString& food_name);


};


#endif //QT_TEST_STUDENT_H
