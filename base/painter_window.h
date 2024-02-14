//
// Created by 10580.
//

#ifndef QT_BASE_PAINTER_WINDOW_H
#define QT_BASE_PAINTER_WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class painter_window; }
QT_END_NAMESPACE

class painter_window : public QWidget
{
Q_OBJECT
protected:
    void paintEvent(QPaintEvent *e) override;


public:
    explicit painter_window(QWidget *parent = nullptr);

    ~painter_window() override;

private:
    Ui::painter_window *ui;
};


#endif //QT_BASE_PAINTER_WINDOW_H
