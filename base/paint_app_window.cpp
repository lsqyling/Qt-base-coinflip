//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_paint_app_window.h" resolved
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QTimer>
#include "paint_app_window.h"
#include "ui_paint_app_window.h"
#include "QInputDialog"
#include "QColorDialog"



paint_app_window::paint_app_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::paint_app_window)
{
    ui->setupUi(this);
    setCentralWidget(ui->graphicsView);

    label_item_info_ = new QLabel("ItemInfo:");
    label_item_info_->setMinimumWidth(150);

    scene_ = new QGraphicsScene(-300, -100, 600, 200);
    ui->graphicsView->setScene(scene_);
    ui->graphicsView->setCursor(Qt::CrossCursor);
    ui->graphicsView->setMouseTracking(true);
    ui->graphicsView->setDragMode(QGraphicsView::DragMode::RubberBandDrag);
    ui->statusbar->addWidget(label_item_info_);

    connect(ui->graphicsView, &paint_graphic_view_impl::mouse_pressed,
            this, &paint_app_window::on_mouse_pressed);

    connect(ui->graphicsView, &paint_graphic_view_impl::mouse_double_clicked,
            this, &paint_app_window::on_mouse_double_clicked);

    connect(ui->graphicsView, &paint_graphic_view_impl::key_pressed,
            this, &paint_app_window::on_key_pressed);
    on_item_actions();
    on_edit_actions();
}

paint_app_window::~paint_app_window()
{
    delete ui;
}

void paint_app_window::on_key_pressed(QKeyEvent *event)
{
    int count = scene_->selectedItems().count();
    if (count == 0)
        return ;
    switch (event->key())
    {
        case Qt::Key_Delete:
            emit ui->actionEditDel->triggered();
            break;
        case Qt::Key_Up:
        {
            for (int i = 0; i < count; ++i)
            {
                auto item = scene_->selectedItems().at(i);
                item->setY(item->y()-2);
            }
            break;
        }
        case Qt::Key_Down:
        {
            for (int i = 0; i < count; ++i)
            {
                auto item = scene_->selectedItems().at(i);
                item->setY(item->y()+2);
            }
            break;
        }
        case Qt::Key_Left:
        {
            for (int i = 0; i < count; ++i)
            {
                auto item = scene_->selectedItems().at(i);
                item->setX(item->x()-2);
            }
            break;
        }
        case Qt::Key_Right:
        {
            for (int i = 0; i < count; ++i)
            {
                auto item = scene_->selectedItems().at(i);
                item->setX(item->x()+2);
            }
            break;
        }
        default:;
    }
}

void paint_app_window::on_mouse_double_clicked(QPoint point)
{
    auto scene_point = ui->graphicsView->mapToScene(point);
    QGraphicsItem *item = nullptr;
    item = scene_->itemAt(scene_point, ui->graphicsView->transform());
    if (item == nullptr)
        return;
    switch (item->type())
    {
        case QGraphicsRectItem::Type:
        {
            auto the = qgraphicsitem_cast<QGraphicsRectItem *>(item);
            auto color = the->brush().color();
            color = QColorDialog::getColor(color, nullptr, "选择颜色");
            if (color.isValid())
                the->setBrush(QBrush(color));
            break;
        }
        case QGraphicsEllipseItem::Type:
        {
            auto the = qgraphicsitem_cast<QGraphicsEllipseItem *>(item);
            auto color = the->brush().color();
            color = QColorDialog::getColor(color, nullptr, "选择颜色");
            if (color.isValid())
                the->setBrush(QBrush(color));
            break;
        }
        case QGraphicsPolygonItem::Type:
        {
            auto the = qgraphicsitem_cast<QGraphicsPolygonItem *>(item);
            auto color = the->brush().color();
            color = QColorDialog::getColor(color, nullptr, "选择颜色");
            if (color.isValid())
                the->setBrush(QBrush(color));
            break;
        }
        case QGraphicsLineItem::Type:
        {
            auto the = qgraphicsitem_cast<QGraphicsLineItem *>(item);
            auto color = the->pen().color();
            color = QColorDialog::getColor(color, nullptr, "选择颜色");
            if (color.isValid())
                the->setPen(QPen(color));
            break;
        }
        case QGraphicsTextItem::Type:
        {
            auto the = qgraphicsitem_cast<QGraphicsTextItem *>(item);
            auto color = the->defaultTextColor();
            color = QColorDialog::getColor(color, nullptr, "选择颜色");
            if (color.isValid())
                the->setDefaultTextColor(color);
            break;
        }
        default:;
    }


}

void paint_app_window::on_mouse_pressed(QPoint point)
{
    auto scene_point = ui->graphicsView->mapToScene(point);
    QGraphicsItem *item = nullptr;
    item = scene_->itemAt(scene_point, ui->graphicsView->transform());
    if (item)
    {
        label_item_info_->setText(QString("ItemInfo: [%1, %2]")
                                          .arg(item->data(ItemId).toString())
                                          .arg(item->data(ItemDesc).toString()));
    }
}

void paint_app_window::on_item_actions()
{
//    Rect
    connect(ui->actionItemRect, &QAction::triggered,
            [=, this] {

                auto item = new QGraphicsRectItem(-50, -30, 100, 60);
                item->setFlags(QGraphicsItem::ItemIsFocusable
                               | QGraphicsItem::ItemIsSelectable
                               | QGraphicsItem::ItemIsMovable);
                item->setBrush(QBrush(Qt::yellow));

                item->setPos(-100 + random(0, 200), -60 + random(0, 120));
                item->setData(ItemId, ++seq_num_);
                item->setData(ItemDesc, "矩形");
                scene_->addItem(item);
                scene_->clearSelection();
                item->setSelected(true);
            });
//    Circle
    connect(ui->actionItemCircle, &QAction::triggered,
            [=, this] {

                auto item = new QGraphicsEllipseItem(-50, -50, 100, 100);
                item->setFlags(QGraphicsItem::ItemIsFocusable
                               | QGraphicsItem::ItemIsSelectable
                               | QGraphicsItem::ItemIsMovable);
                item->setBrush(QBrush(Qt::yellow));

                item->setPos(-100 + random(0, 200), -100 + random(0, 200));
                item->setData(ItemId, ++seq_num_);
                item->setData(ItemDesc, "圆形");
                scene_->addItem(item);
                scene_->clearSelection();
                item->setSelected(true);
            });
//    Ellipse
    connect(ui->actionItemEllipse, &QAction::triggered,
            [=, this] {

                auto item = new QGraphicsEllipseItem(-100, -50, 200, 100);
                item->setFlags(QGraphicsItem::ItemIsFocusable
                               | QGraphicsItem::ItemIsSelectable
                               | QGraphicsItem::ItemIsMovable);
                item->setBrush(QBrush(Qt::yellow));

                item->setPos(-200 + random(0, 200), -100 + random(0, 100));
                item->setData(ItemId, ++seq_num_);
                item->setData(ItemDesc, "椭圆");
                scene_->addItem(item);
                scene_->clearSelection();
                item->setSelected(true);
            });

//    Line
    connect(ui->actionItemLine, &QAction::triggered,
            [=, this] {

                auto item = new QGraphicsLineItem(-100, -50, 200, 100);
                item->setFlags(QGraphicsItem::ItemIsFocusable
                               | QGraphicsItem::ItemIsSelectable
                               | QGraphicsItem::ItemIsMovable);
                QPen pen(Qt::black);
                pen.setWidth(2);
                item->setPen(pen);
                item->setPos(-200 + random(0, 200), -100 + random(0, 100));
                item->setData(ItemId, ++seq_num_);
                item->setData(ItemDesc, "直线");
                scene_->addItem(item);
                scene_->clearSelection();
                item->setSelected(true);
            });


//    Polygon
    connect(ui->actionItemPolygon, &QAction::triggered,
            [=, this] {

                auto item = new QGraphicsPolygonItem;
                QPolygonF points;
                points.append(QPointF(-40, -40));
                points.append(QPointF(40, -40));
                points.append(QPointF(60, 40));
                points.append(QPointF(-60, 40));
                item->setPolygon(points);
                item->setFlags(QGraphicsItem::ItemIsFocusable
                               | QGraphicsItem::ItemIsSelectable
                               | QGraphicsItem::ItemIsMovable);
                item->setBrush(QBrush(Qt::yellow));
                item->setPos(-200 + random(0, 200), -100 + random(0, 100));
                item->setData(ItemId, ++seq_num_);
                item->setData(ItemDesc, "梯形");
                scene_->addItem(item);
                scene_->clearSelection();
                item->setSelected(true);
            });

//    Triangle
    connect(ui->actionItemTriangle, &QAction::triggered,
            [=, this] {

                auto item = new QGraphicsPolygonItem;
                QPolygonF points;
                points.append(QPointF(0, -40));
                points.append(QPointF(60, 40));
                points.append(QPointF(-60, 40));
                item->setPolygon(points);
                item->setFlags(QGraphicsItem::ItemIsFocusable
                               | QGraphicsItem::ItemIsSelectable
                               | QGraphicsItem::ItemIsMovable);
                item->setBrush(QBrush(Qt::yellow));
                item->setPos(-200 + random(0, 200), -100 + random(0, 100));
                item->setData(ItemId, ++seq_num_);
                item->setData(ItemDesc, "三角形");
                scene_->addItem(item);
                scene_->clearSelection();
                item->setSelected(true);
            });
//    Text
    connect(ui->actionItemText, &QAction::triggered,
            [=, this] {

                QString str = QInputDialog::getText(this, "输入对话框", "请输入：");
                auto item = new QGraphicsTextItem(str);

                item->setFlags(QGraphicsItem::ItemIsFocusable
                               | QGraphicsItem::ItemIsSelectable
                               | QGraphicsItem::ItemIsMovable);
                item->setDefaultTextColor(Qt::black);
                QFont font;
                font.setPointSize(20);
                item->setFont(font);
                item->setPos(-200 + random(0, 200), -100 + random(0, 100));
                item->setData(ItemId, ++seq_num_);
                item->setData(ItemDesc, "文字");
                scene_->addItem(item);
                scene_->clearSelection();
                item->setSelected(true);
            });
}

void paint_app_window::on_edit_actions()
{
//    ZoomIn
    connect(ui->actionZoomIn, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                if (count == 0)
                {
                    ui->graphicsView->scale(1.1, 1.1);
                    return;
                }
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(i);
                    item->setScale(0.1 + item->scale());
                }
            });
//    ZoomOut
    connect(ui->actionZoomOut, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                if (count == 0)
                {
                    ui->graphicsView->scale(0.9, 0.9);
                    return;
                }
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(i);
                    item->setScale(-0.1 + item->scale());
                }
            });

//    Restore
    connect(ui->actionRestore, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                if (count == 0)
                {
                    ui->graphicsView->resetTransform();
                    return;
                }
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(i);
                    item->setScale(1);
                }
            });


//    RotateLeft
    connect(ui->actionRotateLeft, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                if (count == 0)
                {
                    ui->graphicsView->rotate(-45);
                    return;
                }
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(i);
                    item->setRotation(item->rotation() - 45);
                }
            });

//    RotateRight
    connect(ui->actionRotateRight, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                if (count == 0)
                {
                    ui->graphicsView->rotate(45);
                    return;
                }
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(i);
                    item->setRotation(item->rotation() + 45);
                }
            });
//  Front
    connect(ui->actionEditFront, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(i);
                    item->setZValue(item->zValue() + 1);
                }
            });

//  Back
    connect(ui->actionEditBack, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(i);
                    item->setZValue(item->zValue() - 1);
                }
            });


//  Group
    connect(ui->actionGroup, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                if (count <= 1)
                    return;
                auto group = new QGraphicsItemGroup;
                scene_->addItem(group);

                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(0);
                    item->setSelected(false);
                    group->addToGroup(item);
                }
                group->setFlags(QGraphicsItem::GraphicsItemFlag::ItemIsFocusable
                                | QGraphicsItem::GraphicsItemFlag::ItemIsSelectable
                                | QGraphicsItem::GraphicsItemFlag::ItemIsMovable);
                scene_->clearSelection();
                group->setSelected(true);

            });
//  GroupBreak
    connect(ui->actionGroupBreak, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                if (count == 0)
                    return;
                QList<QGraphicsItemGroup *> list;
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(i);
                    if (item->type() == QGraphicsItemGroup::Type)
                        list.append(qgraphicsitem_cast<QGraphicsItemGroup *>(item));
                }
                for (auto group: list)
                {
                    scene_->destroyItemGroup(group);
                }
            });

//  Del
    connect(ui->actionEditDel, &QAction::triggered,
            [=, this] {
                int count = scene_->selectedItems().count();
                if (count == 0)
                    return;
                for (int i = 0; i < count; ++i)
                {
                    auto item = scene_->selectedItems().at(0);
                    scene_->removeItem(item);
                }
            });
}

int paint_app_window::random(int left, int right)
{
    static std::random_device device;
    static std::mt19937 e(device());
    static std::uniform_int_distribution<int> distribution(left, right);
    return distribution(e);
}
