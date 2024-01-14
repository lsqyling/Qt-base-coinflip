//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_tree_dock_widget_window.h" resolved
#include <QFileDialog>
#include "tree_dock_widget_window.h"
#include "ui_tree_dock_widget_window.h"
#include "fmt/core.h"


tree_dock_widget_window::tree_dock_widget_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::tree_dock_widget_window)
{
    ui->setupUi(this);
    ui->statusbar->addWidget(&label_filename_);

    this->setWindowTitle("QTreeWidget和QDockWidget");

    on_action_visible_float();
    on_action_folder_files();
    on_tree_widget_action();
    on_action_traversal_nodes();
    on_action_del_node();
    on_action_pic_zoom_ops();
}

tree_dock_widget_window::~tree_dock_widget_window()
{
    delete ui;
}

void tree_dock_widget_window::on_action_visible_float()
{
    connect(ui->actionDockVisible, qOverload<bool>(&QAction::toggled),
            [=, this](bool arg) {
                ui->dockWidget->setVisible(arg);
            });
    connect(ui->actionDockFloat, qOverload<bool>(&QAction::toggled),
            [=, this](bool arg) {
                ui->dockWidget->setFloating(arg);
            });

    connect(ui->dockWidget, qOverload<bool>(&QDockWidget::topLevelChanged),
            [=, this](bool top) {
                ui->actionDockFloat->setChecked(top);
            });
}

void tree_dock_widget_window::on_action_folder_files()
{
    connect(ui->actionAddFolder, &QAction::triggered,
            [=, this] {
                QString full_name = QFileDialog::getExistingDirectory();
                if (full_name.isEmpty())
                    return;
                QString dir = full_name.right(full_name.length() - full_name.lastIndexOf("/") - 1);
                if (!ui->treeWidget->currentIndex().isValid())
                    return;
                QTreeWidgetItem *parent = ui->treeWidget->currentItem();
                QTreeWidgetItem *item = new QTreeWidgetItem(ItGroupItem);

                QIcon icon("../images/icon/add_folder.bmp");
                item->setIcon(ColItem, icon);
                item->setText(ColItem, dir);
                item->setText(ColItemType, "type:group");
                item->setFlags(Qt::ItemIsSelectable
                               | Qt::ItemIsUserTristate
                               | Qt::ItemIsEnabled
                               | Qt::ItemIsUserCheckable);
                item->setCheckState(ColItem, Qt::Checked);
                parent->addChild(item);
            });

    connect(ui->actionAddFile, &QAction::triggered,
            [=, this] {
                QStringList files = QFileDialog::getOpenFileNames(this, "选择一个或多个文件",
                                                                  "",
                                                                  "Images(*.jpg *.png *.jpeg)");
                if (files.isEmpty())
                    return;
                QTreeWidgetItem *parent, *item;
                item = ui->treeWidget->currentItem();
                if (item->type() == ItImageItem)
                    parent = item->parent();
                else
                    parent = item;

                for (const auto &file: files)
                {
                    item = new QTreeWidgetItem(ItImageItem);
                    QString short_name = file.right(file.length() - file.lastIndexOf("/") - 1);
                    QIcon icon("../images/icon/add_files.ico");
                    item->setIcon(ColItem, icon);
                    item->setText(ColItem, short_name);
                    item->setText(ColItemType, "type:ImageFile");
                    item->setFlags(Qt::ItemIsSelectable
                                   | Qt::ItemIsUserTristate
                                   | Qt::ItemIsEnabled
                                   | Qt::ItemIsUserCheckable);
                    item->setCheckState(ColItem, Qt::Checked);
                    item->setData(ColItem, Qt::UserRole, file);
                    parent->addChild(item);
                }
            });
}

void tree_dock_widget_window::on_tree_widget_action()
{
    connect(ui->treeWidget, qOverload<QTreeWidgetItem *, QTreeWidgetItem *>(&QTreeWidget::currentItemChanged),
            [=, this](QTreeWidgetItem *curr, QTreeWidgetItem *prev) {

                if (curr == nullptr)
                    return;
                int type = curr->type();
                switch (type)
                {
                    case ItTopItem:
                        ui->actionAddFolder->setEnabled(true);
                        ui->actionAddFile->setEnabled(true);
                        ui->actionDelItem->setEnabled(false);
                        break;
                    case ItGroupItem:
                        ui->actionAddFolder->setEnabled(true);
                        ui->actionAddFile->setEnabled(true);
                        ui->actionDelItem->setEnabled(true);
                        break;
                    case ItImageItem:
                        ui->actionAddFolder->setEnabled(false);
                        ui->actionAddFile->setEnabled(true);
                        ui->actionDelItem->setEnabled(true);
                        label_filename_.setText(curr->data(ColItem, Qt::UserRole).toString());
                        curr_pix_map_.load(curr->data(ColItem, Qt::UserRole).toString());

                        ui->actionZoomWidth->setEnabled(true);
                        ui->actionZoomHigh->setEnabled(true);
                        ui->actionZoomOut->setEnabled(true);
                        ui->actionZoomIn->setEnabled(true);
                        ui->actionZoomOut->setEnabled(true);
                        ui->actionZoomRealSize->setEnabled(true);
                        show_pic_on_load();
                        break;


                    default:;


                }


            });
}


void tree_dock_widget_window::on_action_traversal_nodes()
{
    connect(ui->actionScanItems, &QAction::triggered,
            [=, this] {
                for (int i = 0; i < ui->treeWidget->topLevelItemCount(); ++i)
                {
                    auto item = ui->treeWidget->topLevelItem(i);
                    change_item_caption(item);
                }
            });

}

void tree_dock_widget_window::change_item_caption(QTreeWidgetItem *item)
{
    QString str = "*" + item->text(ColItem);
    item->setText(ColItem, str);
    for (int i = 0; i < item->childCount(); ++i)
    {
        change_item_caption(item->child(i));
    }
}

void tree_dock_widget_window::on_action_del_node()
{
    connect(ui->actionDelItem, &QAction::triggered,
            [=, this] {

                auto item = ui->treeWidget->currentItem();
                auto parent = item->parent();
                parent->removeChild(item);
                delete item;
            });
}

void tree_dock_widget_window::on_action_pic_zoom_ops()
{
    connect(ui->actionZoomHigh, &QAction::triggered,
            [=, this] {
                int H = ui->scrollArea->height();
                int realH = curr_pix_map_.height();
                pix_ratio = 1.0 * H / realH;
                auto pix = curr_pix_map_.scaledToHeight(H - 30);
                ui->label->setPixmap(pix);
            });
    connect(ui->actionZoomWidth, &QAction::triggered,
            [=, this] {
                int W = ui->scrollArea->width();
                int realW = curr_pix_map_.width();
                pix_ratio = 1.0 * W / realW;
                auto pix = curr_pix_map_.scaledToWidth(W - 30);
                ui->label->setPixmap(pix);
            });
    connect(ui->actionZoomIn, &QAction::triggered,
            [=, this] {
                pix_ratio *= 1.2;
                int w = curr_pix_map_.width() * pix_ratio;
                int h = curr_pix_map_.height() * pix_ratio;
                auto pix = curr_pix_map_.scaled(w, h);
                ui->label->setPixmap(pix);
            });
    connect(ui->actionZoomOut, &QAction::triggered,
            [=, this] {
                pix_ratio /= 1.2;
                int w = curr_pix_map_.width() * pix_ratio;
                int h = curr_pix_map_.height() * pix_ratio;
                auto pix = curr_pix_map_.scaled(w, h);
                ui->label->setPixmap(pix);
            });
    connect(ui->actionZoomRealSize, &QAction::triggered,
            [=, this] {
                pix_ratio = 1;
                ui->label->setPixmap(curr_pix_map_);
            });
}

void tree_dock_widget_window::show_pic_on_load()
{
    int H = ui->scrollArea->height();
    int realH = curr_pix_map_.height();
    pix_ratio = 1.0 * H / realH;
    auto pix = curr_pix_map_.scaledToHeight(H - 30);
    ui->label->setPixmap(pix);
}
