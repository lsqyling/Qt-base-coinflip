//
// Created by 10580.
//

#ifndef QT_BASE_PAINT_GRAPHIC_VIEW_IMPL_H
#define QT_BASE_PAINT_GRAPHIC_VIEW_IMPL_H

#include <QWidget>
#include <QGraphicsView>




class paint_graphic_view_impl : public QGraphicsView
{
Q_OBJECT

public:
    explicit paint_graphic_view_impl(QWidget *parent = nullptr);


signals:
    void key_pressed(QKeyEvent *event);
    void mouse_double_clicked(QPoint point);
    void mouse_pressed(QPoint point);


protected:
    void keyPressEvent(QKeyEvent *event) override;

    void mouseDoubleClickEvent(QMouseEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;




};


#endif //QT_BASE_PAINT_GRAPHIC_VIEW_IMPL_H
