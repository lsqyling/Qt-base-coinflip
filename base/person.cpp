//
// Created by 10580.
//

#include "person.h"

person::person(QString name, QObject *parent) : name_(std::move(name)), QObject(parent)
{

}

int person::age_of() const
{
    return age_;
}

void person::set_age(int value)
{
    age_ = value;
    emit(age_changed(value));
}

void person::increment_age()
{
    ++age_;
    emit age_changed(age_);

}
