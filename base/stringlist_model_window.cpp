//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_stringlist_model_window.h" resolved

#include "stringlist_model_window.h"
#include "ui_stringlist_model_window.h"


stringlist_model_window::stringlist_model_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::stringlist_model_window)
{
    ui->setupUi(this);
    this->setWindowTitle("QStringListModel应用");

    list_model_ = new QStringListModel(this);
    QStringList list;
    list << "北京" << "上海" << "广州" << "深圳" << "成都" << "重庆" << "杭州" << "郑州" << "云南";
    list_model_->setStringList(list);
    ui->listView->setModel(list_model_);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked
    | QAbstractItemView::SelectedClicked);


    on_left_button_clicked();
    on_right_button_clicked();
    on_list_view_clicked();


}

stringlist_model_window::~stringlist_model_window()
{
    delete ui;
}

void stringlist_model_window::on_left_button_clicked()
{
    connect(ui->pushButtonListRecover, &QPushButton::clicked,
            [=, this] {
                QStringList list;
                list << "北京" << "上海" << "广州" << "深圳" << "成都" << "重庆" << "杭州" << "郑州" << "云南";
                list_model_->setStringList(list);
    });

    connect(ui->pushButtonListClear, &QPushButton::clicked,
            [=, this] {
        list_model_->removeRows(0, list_model_->rowCount());
    });


    connect(ui->pushButtonItemDel, &QPushButton::clicked,
            [=, this] {
        list_model_->removeRow(ui->listView->currentIndex().row());
    });



    connect(ui->pushButtonItemAdd, &QPushButton::clicked,
            [=, this] {
        list_model_->insertRow(list_model_->rowCount());
        auto index = list_model_->index(list_model_->rowCount() - 1, 0);
        list_model_->setData(index, "新城市", Qt::DisplayRole);
        ui->listView->setCurrentIndex(index);
    });
    connect(ui->pushButtonItemInsert, &QPushButton::clicked,
            [=, this] {
        auto row = ui->listView->currentIndex().row();
        list_model_->insertRow(row);
        auto index = list_model_->index(row, 0);
        list_model_->setData(index, "新城市", Qt::DisplayRole);
        ui->listView->setCurrentIndex(index);
    });
}

void stringlist_model_window::on_right_button_clicked()
{
    connect(ui->pushButtonTextClear, &QPushButton::clicked,
            [=, this] {
        ui->plainTextEdit->clear();
    });

    connect(ui->pushButtonShowData, &QPushButton::clicked,
            [=, this] {
                ui->plainTextEdit->clear();
                auto list = list_model_->stringList();
                for (const auto &item: list)
                {
                    ui->plainTextEdit->appendPlainText(item);
                }
            });
}

void stringlist_model_window::on_list_view_clicked()
{
    connect(ui->listView, qOverload<const QModelIndex &>(&QListView::clicked),
            [=, this](const QModelIndex &index) {

        ui->labelShowCellInfo->setText(QString::asprintf("当前项：row=%d, column=%d", index.row(), index.column()));

    });





}
