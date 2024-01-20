//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_multi_window.h" resolved
#include <QPainter>
#include "multi_window.h"
#include "ui_multi_window.h"


multi_window::multi_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::multi_window)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    ui->tabWidget->setVisible(false);

}

void multi_window::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0, ui->toolBar->height(),
                       width(), height() - ui->statusbar->height(),
                       QPixmap(":/images/icon_multi_window/back2.jpg"));

    QWidget::paintEvent(event);
}

multi_window::~multi_window()
{
    delete ui;
}
