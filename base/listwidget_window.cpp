//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_listwidget_window.h" resolved

#include "listwidget_window.h"
#include "ui_listwidget_window.h"


listwidget_window::listwidget_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::listwidget_window)
{
    ui->setupUi(this);
    setCentralWidget(ui->splitter);

    ui->toolButtonListInit->setDefaultAction(ui->actionListInit);
    ui->toolButtonListClear->setDefaultAction(ui->actionListClear);
    ui->toolButtonListAdd->setDefaultAction(ui->actionListAddItem);
    ui->toolButtonListInsert->setDefaultAction(ui->actionListInsertItem);
    ui->toolButtonListDeleteItem->setDefaultAction(ui->actionListDeleteItem);

    ui->toolButtonSelectAll->setDefaultAction(ui->actionSelectAll);
    ui->toolButtonSelectNone->setDefaultAction(ui->actionSelectNone);
    ui->toolButtonSelectInvert->setDefaultAction(ui->actionSelectInverse);

    QMenu *menu = new QMenu(this);
    menu->addAction(ui->actionSelectAll);
    menu->addAction(ui->actionSelectNone);
    menu->addAction(ui->actionSelectInverse);
    ui->actionSelectItems->setMenu(menu);

    ui->toolButtonSelectItems->setDefaultAction(ui->actionSelectItems);
    ui->toolBar->addAction(ui->actionSelectItems);
    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->actionQuit);

    on_tool_box_event();
    on_action_event();
    on_action_selection();
    on_check_box_event();
    on_list_widget_right_key_menu();
}

listwidget_window::~listwidget_window()
{
    delete ui;
}

void listwidget_window::on_action_event()
{
    connect(ui->actionListInit, &QAction::triggered,
            [=, this] {
                ui->listWidget->clear();
                QIcon icon("../images/icon/Item.ico");
                bool chk = ui->checkBox->isChecked();
                for (int i = 0; i < 20; ++i)
                {
                    auto item = new QListWidgetItem(QString::asprintf("Item %d", i));
                    item->setIcon(icon);
                    item->setCheckState(Qt::Checked);
                    if (chk)
                        item->setFlags(Qt::ItemIsSelectable
                                       | Qt::ItemIsUserCheckable
                                       | Qt::ItemIsEnabled
                                       | Qt::ItemIsEditable);
                    else
                        item->setFlags(Qt::ItemIsSelectable
                                       | Qt::ItemIsUserCheckable
                                       | Qt::ItemIsEnabled);
                    ui->listWidget->addItem(item);
                }
            });
    connect(ui->actionListInsertItem, &QAction::triggered,
            [=, this] {
                QIcon icon("../images/icon/Item.ico");
                bool chk = ui->checkBox->isChecked();
                auto item = new QListWidgetItem("Insert Item");
                item->setIcon(icon);
                item->setCheckState(Qt::Checked);
                if (chk)
                    item->setFlags(Qt::ItemIsSelectable
                                   | Qt::ItemIsUserCheckable
                                   | Qt::ItemIsEnabled
                                   | Qt::ItemIsEditable);
                else
                    item->setFlags(Qt::ItemIsSelectable
                                   | Qt::ItemIsUserCheckable
                                   | Qt::ItemIsEnabled);
                ui->listWidget->insertItem(ui->listWidget->currentRow(), item);
            });

    connect(ui->actionListAddItem, &QAction::triggered,
            [=, this] {
                QIcon icon("../images/icon/Item.ico");
                bool chk = ui->checkBox->isChecked();
                auto item = new QListWidgetItem("Add Item");
                item->setIcon(icon);
                item->setCheckState(Qt::Checked);
                if (chk)
                    item->setFlags(Qt::ItemIsSelectable
                                   | Qt::ItemIsUserCheckable
                                   | Qt::ItemIsEnabled
                                   | Qt::ItemIsEditable);
                else
                    item->setFlags(Qt::ItemIsSelectable
                                   | Qt::ItemIsUserCheckable
                                   | Qt::ItemIsEnabled);
                ui->listWidget->addItem(item);
            });

    connect(ui->actionListDeleteItem, &QAction::triggered,
            [=, this] {
                auto item = ui->listWidget->currentItem();
                delete item;
            });

    connect(ui->actionListClear, &QAction::triggered,
            [=, this] {
                ui->listWidget->clear();
            });
}

void listwidget_window::on_tool_box_event()
{
    connect(ui->toolBox, qOverload<int>(&QToolBox::currentChanged),
            [=, this](int index) {
        ui->tabWidget->setCurrentIndex(index);
    });
}

void listwidget_window::on_action_selection()
{
    connect(ui->actionSelectAll, &QAction::triggered,
            [=, this] {

                int cnt = ui->listWidget->count();
                for (int i = 0; i < cnt; ++i)
                {
                    auto item = ui->listWidget->item(i);
                    item->setCheckState(Qt::Checked);
                }
            });

    connect(ui->actionSelectNone, &QAction::triggered,
            [=, this] {

                int cnt = ui->listWidget->count();
                for (int i = 0; i < cnt; ++i)
                {
                    auto item = ui->listWidget->item(i);
                    item->setCheckState(Qt::Unchecked);
                }
            });

    connect(ui->actionSelectInverse, &QAction::triggered,
            [=, this] {

                int cnt = ui->listWidget->count();
                for (int i = 0; i < cnt; ++i)
                {
                    auto item = ui->listWidget->item(i);
                    if (item->checkState() == Qt::Checked)
                        item->setCheckState(Qt::Unchecked);
                    else
                        item->setCheckState(Qt::Checked);
                }
            });

    connect(ui->listWidget, qOverload<int>(&QListWidget::currentRowChanged),
            [=, this](int row) {
                QString str;
                if (row > 0)
                    str = "前一项：" + ui->listWidget->item(row - 1)->text()
                          + ", 当前项：" + ui->listWidget->item(row)->text();
                else
                    str = "当前项：" + ui->listWidget->item(row)->text();
                ui->lineEdit->setText(str);
            });
}

void listwidget_window::on_check_box_event()
{
    connect(ui->checkBox, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
                int cnt = ui->listWidget->count();
                for (int i = 0; i < cnt; ++i)
                {
                    auto item = ui->listWidget->item(i);
                    if (checked)
                        item->setFlags(Qt::ItemIsSelectable
                                       | Qt::ItemIsUserCheckable
                                       | Qt::ItemIsEnabled
                                       | Qt::ItemIsEditable);
                    else
                        item->setFlags(Qt::ItemIsSelectable
                                       | Qt::ItemIsUserCheckable
                                       | Qt::ItemIsEnabled);
                }
            });

}

void listwidget_window::on_list_widget_right_key_menu()
{
    connect(ui->listWidget, qOverload<const QPoint &>(&QListWidget::customContextMenuRequested),
            [=, this](const QPoint &pos) {

                QMenu *menu = new QMenu(this);
                menu->addAction(ui->actionListInit);
                menu->addAction(ui->actionListClear);
                menu->addAction(ui->actionListDeleteItem);
                menu->addAction(ui->actionListAddItem);
                menu->addAction(ui->actionListInsertItem);
                menu->addSeparator();
                menu->addAction(ui->actionSelectAll);
                menu->addAction(ui->actionSelectNone);
                menu->addAction(ui->actionSelectInverse);

                menu->exec(QCursor::pos());
                delete menu;
            });
}
