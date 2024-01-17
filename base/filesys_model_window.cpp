//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_filesys_model_window.h" resolved

#include "filesys_model_window.h"
#include "ui_filesys_model_window.h"


filesys_model_window::filesys_model_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::filesys_model_window)
{
    ui->setupUi(this);
    this->setWindowTitle("QFileSystemModel应用");

    file_model_ = new QFileSystemModel(this);
    file_model_->setRootPath(QDir::currentPath());

    ui->treeView->setModel(file_model_);
    ui->listView->setModel(file_model_);
    ui->tableView->setModel(file_model_);
    ui->tableView->verticalHeader()->setVisible(false);

    connect(ui->treeView, qOverload<const QModelIndex &>(&QTreeView::clicked),
            ui->listView, qOverload<const QModelIndex &>(&QListView::setRootIndex));

    connect(ui->treeView, qOverload<const QModelIndex &>(&QTreeView::clicked),
            ui->tableView, qOverload<const QModelIndex &>(&QTableView::setRootIndex));

    on_tree_view_clicked();



}

filesys_model_window::~filesys_model_window()
{
    delete ui;
}

void filesys_model_window::on_tree_view_clicked()
{
    connect(ui->treeView, qOverload<const QModelIndex &>(&QTreeView::clicked),
            [=, this](const QModelIndex &index) {

                ui->labelFileName->setText(file_model_->fileName(index));
                ui->labelFilePath->setText(file_model_->filePath(index));
                ui->labelFileType->setText(file_model_->type(index));
                auto sz = file_model_->size(index);
                if (sz < 1024)
                    ui->labelFileSize->setText(QString::asprintf("%d Byte", sz));
                else if (sz < 1024 * 1024)
                    ui->labelFileSize->setText(QString::asprintf("%.2f KB", 1.0 * sz/1024));
                else
                    ui->labelFileSize->setText(QString::asprintf("%.2f MB", 1.0 * sz/(1024 * 1024)));
                ui->checkBox->setChecked(file_model_->isDir(index));
    });
}
