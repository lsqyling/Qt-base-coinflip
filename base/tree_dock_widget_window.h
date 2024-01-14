//
// Created by 10580.
//

#ifndef QT_BASE_TREE_DOCK_WIDGET_WINDOW_H
#define QT_BASE_TREE_DOCK_WIDGET_WINDOW_H

#include <QMainWindow>
#include "QLabel"
#include "QTreeWidgetItem"


QT_BEGIN_NAMESPACE
namespace Ui { class tree_dock_widget_window; }
QT_END_NAMESPACE

class tree_dock_widget_window : public QMainWindow
{
Q_OBJECT

public:

    explicit tree_dock_widget_window(QWidget *parent = nullptr);

    ~tree_dock_widget_window() override;

private:
    void on_action_visible_float();
    void on_action_folder_files();
    void on_tree_widget_action();
    void on_action_traversal_nodes();
    void on_action_del_node();
    void on_action_pic_zoom_ops();

    void change_item_caption(QTreeWidgetItem *item);
    void show_pic_on_load();


    enum {ItTopItem = 1001, ItGroupItem, ItImageItem};
    enum {ColItem = 0, ColItemType};


    QLabel label_filename_{};
    QPixmap curr_pix_map_{};
    double pix_ratio{0};
    Ui::tree_dock_widget_window *ui;
};


#endif //QT_BASE_TREE_DOCK_WIDGET_WINDOW_H
