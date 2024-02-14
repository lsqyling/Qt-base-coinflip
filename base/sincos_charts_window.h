//
// Created by 10580.
//

#ifndef QT_BASE_SINCOS_CHARTS_WINDOW_H
#define QT_BASE_SINCOS_CHARTS_WINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class sincos_charts_window; }
QT_END_NAMESPACE

class sincos_charts_window : public QMainWindow
{
Q_OBJECT

public:
    explicit sincos_charts_window(QWidget *parent = nullptr);

    ~sincos_charts_window() override;

private:
    Ui::sincos_charts_window *ui;
};


#endif //QT_BASE_SINCOS_CHARTS_WINDOW_H
