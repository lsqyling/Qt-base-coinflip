//
// Created by 10580.
//

#ifndef QT_BASE_GRAPH_VIEW_WINDOW_H
#define QT_BASE_GRAPH_VIEW_WINDOW_H
#include <QGraphicsScene>
#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class graph_view_window; }
QT_END_NAMESPACE

class graph_view_window : public QMainWindow
{
Q_OBJECT

public:
    explicit graph_view_window(QWidget *parent = nullptr);

    ~graph_view_window() override;

private:
    void on_mouse_clicked(QPoint point);
    void on_mouse_move_pos(QPoint point);

    void init_graphics();

protected:
    void resizeEvent(QResizeEvent *event) override;

private:

    QLabel *label_view_{nullptr};
    QLabel *label_scene_{nullptr};
    QLabel *label_item_{nullptr};
    QGraphicsScene *scene_{nullptr};

    Ui::graph_view_window *ui;
};


#endif //QT_BASE_GRAPH_VIEW_WINDOW_H
