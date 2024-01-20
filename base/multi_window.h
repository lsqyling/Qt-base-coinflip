//
// Created by 10580.
//

#ifndef QT_BASE_MULTI_WINDOW_H
#define QT_BASE_MULTI_WINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class multi_window; }
QT_END_NAMESPACE

class multi_window : public QMainWindow
{
Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) override;

public:
    explicit multi_window(QWidget *parent = nullptr);

    ~multi_window() override;

private:
    Ui::multi_window *ui;
};


#endif //QT_BASE_MULTI_WINDOW_H
