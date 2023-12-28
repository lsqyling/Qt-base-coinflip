//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_my_push_button.h" resolved
#include <iostream>
#include "my_push_button.h"


my_push_button::my_push_button(QWidget *parent) :
        QPushButton(parent)
{
    std::cout << "my self button constructor." << '\n';
}

my_push_button::~my_push_button()
{
    std::cout << "my self button destructor." << '\n';

}
