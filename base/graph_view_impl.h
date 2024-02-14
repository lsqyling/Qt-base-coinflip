//
// Created by 10580.
//

#ifndef QT_BASE_GRAPH_VIEW_IMPL_H
#define QT_BASE_GRAPH_VIEW_IMPL_H

#include <QGraphicsView>
#include <QWidget>


class graph_view_impl : public QGraphicsView
{
Q_OBJECT

public:
    explicit graph_view_impl(QWidget *parent = nullptr);


signals:
    void mouse_clicked(QPoint point);
    void mouse_move_point(QPoint point);

protected:
    void mousePressEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;


};


#endif //QT_BASE_GRAPH_VIEW_IMPL_H
