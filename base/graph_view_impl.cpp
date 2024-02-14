//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_graph_view_impl.h" resolved

#include <QMouseEvent>
#include "graph_view_impl.h"



graph_view_impl::graph_view_impl(QWidget *parent) :
        QGraphicsView(parent)
{
}

void graph_view_impl::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        emit mouse_clicked(event->pos());
    }
    QGraphicsView::mousePressEvent(event);
}

void graph_view_impl::mouseMoveEvent(QMouseEvent *event)
{
    emit mouse_move_point(event->pos());
    QGraphicsView::mouseMoveEvent(event);
}



