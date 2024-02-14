//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_rhombus_circle.h" resolved
#include <QPainter>
#include "rhombus_circle.h"
#include "ui_rhombus_circle.h"


rhombus_circle::rhombus_circle(QWidget *parent) :
        QWidget(parent), ui(new Ui::rhombus_circle)
{
    ui->setupUi(this);
    this->setPalette(QPalette(Qt::white));
    this->setAutoFillBackground(true);
    this->resize(600, 600);
}


void rhombus_circle::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::RenderHint::Antialiasing);

    int W = this->width();
    int H = this->height();

    int min = std::min(W, H);
    QRect rect((W - min)/2, (H - min)/2, min, min);
    painter.setViewport(rect);
    painter.drawRect(rect);
    painter.setWindow(-100, -100, 200, 200);

    QLinearGradient linear_gradient(0, 0, 100, 0);
    linear_gradient.setColorAt(0, Qt::yellow);
    linear_gradient.setColorAt(1, Qt::red);
    linear_gradient.setSpread(QGradient::ReflectSpread);
    painter.setCompositionMode(QPainter::CompositionMode::RasterOp_SourceXorDestination);
    painter.setBrush(linear_gradient);

    for (int i = 0; i < 36; ++i)
    {
        painter.drawEllipse(QPoint(50, 0), 50, 50);
        painter.rotate(10);
    }
    QWidget::paintEvent(event);
}

rhombus_circle::~rhombus_circle()
{
    delete ui;
}
