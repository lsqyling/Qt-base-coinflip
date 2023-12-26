//
// Created by 10580 on 2023/12/23.
//
#include <QDebug>
#include <iostream>
#include "student.h"

student::student(QObject *parent) : QObject(parent)
{

}

void student::treat()
{
    std::cout << "学生请老师吃饭" << std::endl;
}

void student::treat(const QString& food_name)
{
    std::cout << "学生请老师吃饭，老师要吃： " << food_name.toStdString() << std::endl;

}
