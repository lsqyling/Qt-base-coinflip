//
// Created by 10580 on 2023/12/24.
//

// You may need to build the project (run Qt uic code generator) to get "ui_common_ctrl_button.h" resolved
#include <QMovie>
#include <QPicture>
#include <QPixmap>
#include <QSize>
#include <iostream>
#include "common_ctrl_button.h"
#include "ui_common_ctrl_button.h"


common_ctrl_button::common_ctrl_button(QWidget *parent) :
        QWidget(parent), ui(new Ui::common_ctrl_button)
{
    ui->setupUi(this);
//    设置默认选中的按钮
    ui->radioButtion_man->setChecked(true);
//    设置选中女的响应
    connect(ui->radioButton_woman, &QRadioButton::clicked, [=]() {
        std::cout << "女的被选中了" << std::endl;
    });

//    多选按钮 2选中 0未选 1半选
    connect(ui->checkBox_5_lady, &QCheckBox::stateChanged, [=](int state) {
        std::cout << "state = " << state << std::endl;
    });

//  listWidget
    auto item = new QListWidgetItem("锄禾日当午");
    auto item1 = new QListWidgetItem("汗滴禾下土");
    auto item2 = new QListWidgetItem("谁知盘中餐");
    auto item3 = new QListWidgetItem("粒粒皆辛苦");
    ui->listWidget->addItem(item);
    ui->listWidget->addItem(item1);
    ui->listWidget->addItem(item2);
    ui->listWidget->addItem(item3);
    item->setTextAlignment(Qt::AlignHCenter);
    item1->setTextAlignment(Qt::AlignHCenter);
    item2->setTextAlignment(Qt::AlignHCenter);
    item3->setTextAlignment(Qt::AlignHCenter);

    QStringList list;
    list << "杜甫 登高"
         << "风急天高猿啸哀，渚清沙白鸟飞回。"
         << "无边落木萧萧下，不尽长江滚滚来。"
         << "万里悲秋常作客，百年多病独登台。"
         << "艰难苦恨繁霜鬓，潦倒新停浊酒杯。";
    ui->listWidget->addItems(list);
    for (int i = 0; i < ui->listWidget->count(); ++i)
    {
        ui->listWidget->item(i)->setTextAlignment(Qt::AlignHCenter);
    }
//    treeWidget
//    设置水平头
    ui->treeWidget->setHeaderLabels(QStringList() << "英雄" << "英雄介绍");

    auto tree_item = new QTreeWidgetItem(QStringList() << "力量");
    auto tree_item1 = new QTreeWidgetItem(QStringList() << "敏捷");
    auto tree_item2 = new QTreeWidgetItem(QStringList() << "智力");

//    加载顶层的节点
    ui->treeWidget->addTopLevelItem(tree_item);
    ui->treeWidget->addTopLevelItem(tree_item1);
    ui->treeWidget->addTopLevelItem(tree_item2);

//    追加子节点
    new QTreeWidgetItem(tree_item,
                        QStringList() << "刚被猪" << "前排坦克， 能在吸收伤害的同时造成可观的范围输出");
    new QTreeWidgetItem(tree_item1,
                        QStringList() << "刚被猪" << "前排坦克， 能在吸收伤害的同时造成可观的范围输出");
    new QTreeWidgetItem(tree_item2,
                        QStringList() << "刚被猪" << "前排坦克， 能在吸收伤害的同时造成可观的范围输出");

//    TableWidget
//    set column count
    ui->tableWidget->setColumnCount(3);
//    set horizontal header
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "姓名" << "性别" << "年龄");
//    set row number
    ui->tableWidget->setRowCount(5);
//    set content
    QStringList names, sex_list;
    names << "张三" << "赵云" << "张飞" << "关羽" << "花木兰";
    sex_list << "男" << "男" << "男" << "男" << "女";
    for (int i = 0; i < 5; ++i)
    {
        int col = 0;
        ui->tableWidget->setItem(i, col++, new QTableWidgetItem(names[i]));
        ui->tableWidget->setItem(i, col++, new QTableWidgetItem(sex_list[i]));
        ui->tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(18+i)));
    }

//    stackWidget
//    set default pos
    ui->stackedWidget->setCurrentIndex(1);

    connect(ui->pushButtonStack_1, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->pushButtonStack_2, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->pushButtonStack_3, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(2);
    });


//    下拉框
    ui->comboBox->addItems(QStringList() << "问界M7" << "U8" << "比亚迪");
    connect(ui->pushButtonComboBox, &QPushButton::clicked, [=]() {
        ui->comboBox->setCurrentIndex(1);
    });

//    QLabel
    ui->labelPicture->setPixmap(QPixmap("../images/panda.jpg"));
//    show .gif
    auto movie = new QMovie("../images/dog.gif");
    ui->labelGif->setMovie(movie);
    movie->start();
}

common_ctrl_button::~common_ctrl_button()
{
    delete ui;
}
