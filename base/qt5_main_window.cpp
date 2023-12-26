//
// Created by 10580 on 2023/12/23.
//

// You may need to build the project (run Qt uic code generator) to get "ui_qt5_main_window.h" resolved
#include <QDockWidget>
#include <QToolBar>
#include <QMenu>
#include <QMenuBar>
#include "qt5_main_window.h"
#include "QPushButton"
#include "QLabel"
#include "QStatusBar"
#include "QTextEdit"


qt5_main_window::qt5_main_window(QWidget *parent) :
        QMainWindow(parent)
{
//    菜单栏 最多只能有一个
    auto bar = menuBar();
//    将菜单栏放入主窗口中
    setMenuBar(bar);
//    创建菜单
    auto file_menu = bar->addMenu("文件");
    auto edit_menu = bar->addMenu("编辑");
//    创建菜单项
    file_menu->addAction("新建");
    file_menu->addAction("打开");
//    添加分割线
    file_menu->addSeparator();
    file_menu->addAction("保存");
    file_menu->addAction("另存为");
    edit_menu->addAction("拷贝");
    edit_menu->addAction("粘贴");

//    工具栏 可以有多个
    auto tool_bar = new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea, tool_bar);
//    设置停靠范围
    tool_bar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
//    设置浮动
    tool_bar->setFloatable(false);
//    设置移动
    tool_bar->setMovable(false);
//    工具栏添加内容
    tool_bar->addAction("设置");
    tool_bar->addSeparator();
    tool_bar->addAction("文本");
//    工具栏添加控件
    auto btn = new QPushButton("aaa", this);
    tool_bar->addWidget(btn);

//    状态栏 最多只能有一个
    auto status_bar = statusBar();
//    设置到窗口中
    setStatusBar(status_bar);
//    放标签控件
    auto label = new QLabel("提示");
    auto label2 = new QLabel("字数");
    auto label3 = new QLabel("统计");
    auto label4 = new QLabel("通知");
    status_bar->addWidget(label);
    status_bar->addWidget(label2);
    status_bar->addPermanentWidget(label3);
    status_bar->addPermanentWidget(label4);
//    铆接部件（浮动窗口）可以有多个
    auto dock_widget = new QDockWidget("浮动", this);
    addDockWidget(Qt::BottomDockWidgetArea, dock_widget);
    dock_widget->setAllowedAreas(Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea);
//    设置中心部件 只有一个
    auto text_edit = new QTextEdit("中心部件", this);
    setCentralWidget(text_edit);

    resize(800, 600);
}


qt5_main_window::~qt5_main_window()
{
}
