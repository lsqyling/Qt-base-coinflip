//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_paint_graphic_view_impl.h" resolved
#include <QMouseEvent>
#include "paint_graphic_view_impl.h"


paint_graphic_view_impl::paint_graphic_view_impl(QWidget *parent) :
        QGraphicsView(parent)
{
}

void paint_graphic_view_impl::keyPressEvent(QKeyEvent *event)
{
    emit key_pressed(event);
    QGraphicsView::keyPressEvent(event);
}

void paint_graphic_view_impl::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        emit mouse_double_clicked(event->pos());
    }
    QGraphicsView::mouseDoubleClickEvent(event);
}

void paint_graphic_view_impl::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        emit mouse_pressed(event->pos());
    }
    QGraphicsView::mousePressEvent(event);
}


