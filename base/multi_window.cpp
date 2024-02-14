//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_multi_window.h" resolved
#include <QPainter>
#include "multi_window.h"
#include "ui_multi_window.h"
#include "doc_form.h"
#include "table_form.h"


multi_window::multi_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::multi_window)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    ui->tabWidget->setVisible(false);

    on_action_triggered();
    on_widgets_event();




}

void multi_window::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0, ui->toolBar->height(),
                       width(), height() - ui->statusbar->height(),
                       QPixmap(":/images/icon_multi_window/back2.jpg"));

    QWidget::paintEvent(event);
}

multi_window::~multi_window()
{
    delete ui;
}

void multi_window::on_action_triggered()
{
    connect(ui->actionWidgetInside, &QAction::triggered,
            [=, this] {
                auto docform = new doc_form(this);
                docform->setAttribute(Qt::WA_DeleteOnClose);
                int cur = ui->tabWidget->addTab(docform, QString("Doc %1").arg(ui->tabWidget->count()));
                ui->tabWidget->setCurrentIndex(cur);
                ui->tabWidget->setVisible(true);
            });
    connect(ui->actionWidgetDetached, &QAction::triggered,
            [=, this] {
                auto docform = new doc_form;
                docform->setAttribute(Qt::WA_DeleteOnClose);
                docform->setWindowTitle("Widget独立显示");
                docform->setWindowOpacity(0.85);
                docform->show();
            });

    connect(ui->actionMainWindowInside, &QAction::triggered,
            [=, this] {
                auto tableform = new table_form(this);
                tableform->setAttribute(Qt::WA_DeleteOnClose);
                int cur = ui->tabWidget->addTab(tableform, QString("Table %1").arg(ui->tabWidget->count()));
                ui->tabWidget->setCurrentIndex(cur);
                ui->tabWidget->setVisible(true);
    });
connect(ui->actionMainWindowDetached, &QAction::triggered,
            [=, this] {
                auto tableform = new table_form(this);
                tableform->setAttribute(Qt::WA_DeleteOnClose);
                tableform->setWindowTitle("MainWindow独立显示");
                tableform->setWindowOpacity(0.95);
                tableform->show();
    });


}

void multi_window::on_widgets_event()
{
    connect(ui->tabWidget, qOverload<int>(&QTabWidget::tabCloseRequested),
            [=, this](int index) {
        if (index < 0)
            return ;
        auto tab = ui->tabWidget->widget(index);
        tab->close();
    });

    connect(ui->tabWidget, qOverload<int>(&QTabWidget::currentChanged),
            [=, this](int index) {
        bool flag = ui->tabWidget->count() > 0;
        ui->tabWidget->setVisible(flag);
    });



}
