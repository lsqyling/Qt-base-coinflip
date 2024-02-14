//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_five_pointed_star.h" resolved
#include <QTimer>
#include <QPainterPath>
#include <QPainter>
#include "five_pointed_star.h"
#include "ui_five_pointed_star.h"

namespace math {
int x(int r, double degree)
{
    return static_cast<int>(r * std::cos(five_pointed_star::pi/180 * degree));
}

int y(int r, double degree)
{
    return static_cast<int>(r * std::sin(five_pointed_star::pi/180 * degree));
}
}


five_pointed_star::five_pointed_star(QWidget *parent) :
        QWidget(parent), ui(new Ui::five_pointed_star)
{
    ui->setupUi(this);
    setPalette(QPalette(Qt::white));
    setAutoFillBackground(true);
}


void five_pointed_star::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::RenderHint::Antialiasing);

    QPen pen;
    pen.setColor(Qt::red);
    pen.setStyle(Qt::PenStyle::SolidLine);
    painter.setPen(pen);

    QBrush brush;
    brush.setColor(Qt::yellow);
    brush.setStyle(Qt::BrushStyle::SolidPattern);
    painter.setBrush(brush);

    QPoint points[5] = {{math::x(r, 0), math::y(r, 0)},
                        {math::x(r, 72*1), math::y(r, 72*1)},
                        {math::x(r, 72*2), math::y(r, 72*2)},
                        {math::x(r, 72*3), math::y(r, 72*3)},
                        {math::x(r, 72*4), math::y(r, 72*4)}};


    QPainterPath path;
    path.moveTo(points[2]);
    path.lineTo(points[0]);
    path.lineTo(points[3]);
    path.lineTo(points[1]);
    path.lineTo(points[4]);
    path.closeSubpath();
    QFont font;
    font.setPointSize(12);
    path.addText(points[0], font, "0");
    path.addText(points[1], font, "1");
    path.addText(points[2], font, "2");
    path.addText(points[3], font, "3");
    path.addText(points[4], font, "4");
    painter.setFont(font);

    painter.save();
    painter.translate(width()/4, height()/2);
    painter.drawText(0, 0, "S1");
    painter.drawPath(path);

    painter.restore();
    painter.translate(width()/2, height()/2);
    painter.rotate(72);
    painter.scale(0.7, 0.7);
    painter.drawText(0, 0, "S2");
    painter.drawPath(path);

    painter.resetTransform();
    painter.translate(width()*3/4, height()/2);
    painter.scale(1.2, 1.2);
    painter.rotate(-72);
    painter.drawPath(path);
    painter.drawText(0, 0, "S3");




    QWidget::paintEvent(event);
}


five_pointed_star::~five_pointed_star()
{
    delete ui;
}
