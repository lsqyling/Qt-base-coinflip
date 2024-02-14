//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_painter_window.h" resolved
#include <QPainter>
#include "painter_window.h"
#include "ui_painter_window.h"


painter_window::painter_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::painter_window)
{
    ui->setupUi(this);
    this->setPalette(QPalette(Qt::white));
    this->setAutoFillBackground(true);
}

void painter_window::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);

    int w = this->width();
    int h = this->height();

    QRect rect(w/4, h/4, w/2, h/2);

    QPen pen;
    pen.setColor(Qt::red);
    pen.setWidth(5);
    pen.setStyle(Qt::PenStyle::DashDotDotLine);
    pen.setJoinStyle(Qt::PenJoinStyle::RoundJoin);

    QBrush brush;
    brush.setColor(QColor(Qt::blue));
    brush.setStyle(Qt::BrushStyle::Dense1Pattern);



    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(rect);

    QImage image(":/images/painter/qt.jpg");
    painter.drawImage(rect, image);
    QFont font;
    font.setPointSize(30);
    painter.setFont(font);
    painter.drawText(rect, "Hello Qt!");
    QWidget::paintEvent(e);
}


painter_window::~painter_window()
{
    delete ui;
}
