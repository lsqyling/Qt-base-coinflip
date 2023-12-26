//
// Created by 10580 on 2023/12/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_paint_widdget.h" resolved

#include <QPainter>
#include <QImage>
#include <QPaintDevice>
#include "paint_widget.h"
#include "ui_paint_widget.h"
#include "QPicture"

paint_widget::paint_widget(QWidget *parent) :
        QWidget(parent), ui(new Ui::paint_widget)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, [=]() {
        pos_x += 20;
        update();
    });

//    Pixmap 绘图设备,专门为平台做了显示优化
    QPixmap pix(300, 300);
//    填充颜色
    pix.fill(Qt::white);
//    声明画家
    QPainter painter(&pix);
    painter.setPen(QPen(Qt::green));
    painter.drawEllipse(QPoint{150, 150}, 150, 150);

//    保存
    pix.save("../images/circle.png");

//    QImage 绘图设备,可以对像素进行访问
    QImage img(600, 400, QImage::Format_RGB32);
    img.fill(Qt::white);

    QPainter painter_img(&img);
    QPen pen_img(Qt::red);
    pen_img.setWidth(3);
    painter_img.setPen(pen_img);
    painter_img.drawEllipse(QPoint{300, 200}, 300, 200);

    img.save("../images/eclipse.png");

//    QPicture 绘图设备，可以记录和重现绘图指令
    QPicture pic;
    QPainter painter_pic;
//    开始绘图
    painter_pic.begin(&pic);
    painter_pic.setPen(QPen(Qt::blue));
    painter_pic.drawEllipse(QPoint{300, 300}, 150, 150);
//    结束绘图
    painter_pic.end();
    pic.save("../images/pic.data");


}

paint_widget::~paint_widget()
{
    delete ui;
}

void paint_widget::paintEvent(QPaintEvent *event)
{
//    实例化画家对象 this 指定绘图设备
    QPainter painter(this);
//    高级设置
//    抗锯齿的设置
    painter.setRenderHint(QPainter::Antialiasing);



//    设置画笔
    QPen pen(QColor(255, 0, 0));
//    设置画笔的宽度
    pen.setWidth(3);
//    设置画笔风格
    pen.setStyle(Qt::DotLine);
    painter.setPen(pen);

//    设置画刷
    QBrush brush(Qt::cyan);
//    设置画刷的风格
    brush.setStyle(Qt::Dense3Pattern);
//    让画家使用画刷
    painter.setBrush(brush);


//    line
    painter.drawLine(0, 0, 500, 500);
//    circle
    painter.drawEllipse(QPoint{200, 200}, 100, 100);
//    矩形
    painter.drawRect(100, 100, 200, 200);
//    矩形文字
    painter.drawText(QRect{10, 400, 200, 50}, "好好学习天天向上");



    painter.drawRect(500, 50, 100, 100);
//    对画家进行移动
    painter.translate(100, 0);
//    保持画家状态
    painter.save();
    painter.drawRect(500, 50, 100, 100);
//    还原画家的状态
    painter.restore();

    painter.drawRect(600, 50, 100, 100);
    painter.drawPixmap(800, 800, QPixmap("../images/panda.jpg"));


//    移动举行
    painter.drawRect(pos_x, 0, 100, 100);
//    如果超出屏幕从 0 开始重新绘制
    if (pos_x > this->width())
        pos_x = -100;


    //    修改像素点
    QImage image;
    image.load("../images/circle.png");
    for (int i = 50; i < 100; ++i)
    {
        for (int j = 50; j < 100; ++j)
        {
            QRgb value = qRgb(255, 0, 0);
            image.setPixel(i, j, value);
        }
    }

    painter.drawImage(250, 250, image);

//    QPicture 重现绘图指令
    QPicture pic;
    pic.load("../images/pic.data");
    painter.drawPicture(300, 300, pic);



    QWidget::paintEvent(event);
}


















