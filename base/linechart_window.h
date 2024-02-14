//
// Created by 10580.
//

#ifndef QT_BASE_LINECHART_WINDOW_H
#define QT_BASE_LINECHART_WINDOW_H

#include <QMainWindow>
#include <QChartView>
#include <QLineSeries>
#include <QValueAxis>
#include <QChart>

QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui { class linechart_window; }
QT_END_NAMESPACE

class linechart_window : public QMainWindow
{
Q_OBJECT

public:
    explicit linechart_window(QWidget *parent = nullptr);

    ~linechart_window() override;

private:
    void create_chart();
    void on_actions();
    void on_chart_actions();
    void on_series_actions();
    void on_axis_actions();


    QLineSeries *cur_series_{nullptr};
    QValueAxis *cur_axis_{nullptr};
    Ui::linechart_window *ui;

    void prepare_data();

    void update_from_chart();
};


#endif //QT_BASE_LINECHART_WINDOW_H
