//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_graph_view_window.h" resolved
#include <QPen>
#include <QGraphicsRectItem>
#include "graph_view_window.h"
#include "ui_graph_view_window.h"


graph_view_window::graph_view_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::graph_view_window)
{
    ui->setupUi(this);
    label_view_ = new QLabel("View坐标:");
    label_scene_ = new QLabel("Scene坐标:");
    label_item_ = new QLabel("Item坐标:");
    ui->statusbar->addWidget(label_view_);
    ui->statusbar->addWidget(label_scene_);
    ui->statusbar->addWidget(label_item_);

    ui->graphicsView->setCursor(Qt::CrossCursor);
    ui->graphicsView->setMouseTracking(true);

    init_graphics();

    connect(ui->graphicsView, &graph_view_impl::mouse_move_point, this, &graph_view_window::on_mouse_move_pos);
    connect(ui->graphicsView, &graph_view_impl::mouse_clicked, this, &graph_view_window::on_mouse_clicked);

}

void graph_view_window::resizeEvent(QResizeEvent *event)
{
    ui->labelGraphViewInfo->setText(QString::asprintf("Graphics View坐标，宽：%d，高：%d",
                                                      ui->graphicsView->width(),
                                                      ui->graphicsView->height()));
    auto rect = ui->graphicsView->sceneRect();
    ui->labelSceneRect->setText(QString::asprintf("GraphicsView::sceneRect=(L, T, W, H)=[%.0f, %.0f, %.0f, %.0f]",
                                                  rect.left(), rect.top(),
                                                  rect.width(), rect.height()));
    QWidget::resizeEvent(event);
}


void graph_view_window::on_mouse_clicked(QPoint point)
{
    auto point_scene = ui->graphicsView->mapToScene(point);
    QGraphicsItem *item = nullptr;
    item = scene_->itemAt(point_scene, ui->graphicsView->transform());
    if (item)
    {
        auto point_item = item->mapFromScene(point_scene);
        label_item_->setText(QString::asprintf("Item坐标: [%.2f, %.2f]", point_item.x(), point_item.y()));
    }
}


void graph_view_window::on_mouse_move_pos(QPoint point)
{
    label_view_->setText(QString::asprintf("View坐标: [%d，%d]", point.x(), point.y()));
    auto scene_point = ui->graphicsView->mapToScene(point);
    label_scene_->setText(QString::asprintf("Scene坐标: [%.2f,%.2f]", scene_point.x(), scene_point.y()));
}


graph_view_window::~graph_view_window()
{
    delete ui;
}

void graph_view_window::init_graphics()
{
    QRectF rect(-200, -100, 400, 200);
    scene_ = new QGraphicsScene(rect);
    ui->graphicsView->setScene(scene_);

    auto item = new QGraphicsRectItem(rect);
    item->setFlags(QGraphicsItem::ItemIsSelectable
                   | QGraphicsItem::ItemIsFocusable);
    QPen pen;
    pen.setWidth(2);
    item->setPen(pen);
    scene_->addItem(item);

    auto item1 = new QGraphicsEllipseItem(-100, -50, 200, 100);
    item1->setFlags(QGraphicsItem::ItemIsSelectable
                    | QGraphicsItem::ItemIsFocusable
                    | QGraphicsItem::ItemIsMovable);
    item1->setBrush(QBrush(Qt::blue));
    scene_->addItem(item1);

    auto item2 = new QGraphicsEllipseItem(-50, -50, 100, 100);
    item2->setFlags(QGraphicsItem::ItemIsSelectable
                    | QGraphicsItem::ItemIsFocusable
                    | QGraphicsItem::ItemIsMovable);

    item2->setPos(rect.right(), rect.bottom());
    item2->setBrush(QBrush(Qt::red));
    scene_->addItem(item2);
}
