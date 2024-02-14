//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_sincos_charts_window.h" resolved
#include <QChartView>
#include "sincos_charts_window.h"
#include "ui_sincos_charts_window.h"
#include "QLineSeries"
#include <QValueAxis>

QT_CHARTS_USE_NAMESPACE

sincos_charts_window::sincos_charts_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::sincos_charts_window)
{
    ui->setupUi(this);
    setWindowTitle("正余弦曲线图");
    resize(1600, 600);
//    create charts
    auto view = new QChartView(this);
    auto chart = new QChart;
    chart->setTitle("sin|cos 曲线");
    view->setChart(chart);
    setCentralWidget(view);
//    创建折线序列
    auto sin = new QLineSeries;
    auto cos = new QLineSeries;
    sin->setName("sin曲线");
    cos->setName("cos曲线");
    chart->addSeries(sin);
    chart->addSeries(cos);
//    序列添加值
    double y0, y1, t = -10, intv = 0.1;
    for (int i = 0; i < 200; ++i)
    {
        y0 = std::sin(t);
        y1 = std::cos(t);
        sin->append(t, y0);
        cos->append(t, y1);
        t += intv;
    }
//    创建坐标轴
    chart->createDefaultAxes();
    chart->axes(Qt::Horizontal).first()->setRange(-10, 10);
    chart->axes(Qt::Vertical).first()->setRange(-1, 1);
    chart->axes(Qt::Horizontal).first()->setTitleText("X");
    chart->axes(Qt::Vertical).first()->setTitleText("Y");
}

sincos_charts_window::~sincos_charts_window()
{
    delete ui;
}
