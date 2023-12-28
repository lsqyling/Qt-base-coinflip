//
// Created by 10580.
//

#ifndef QT_TEST_TEACHER_H
#define QT_TEST_TEACHER_H
#include <QObject>
#include <QString>
class teacher : public QObject
{
    Q_OBJECT
public:
    explicit teacher(QObject *parent);


// 自定义信号 写在signal
// 返回值void 只需写声明无需写实现
// 可以有参可以重载
signals:
    void hungry();

    void hungry(QString food_name);

};


#endif //QT_TEST_TEACHER_H
