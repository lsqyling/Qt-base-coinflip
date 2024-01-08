//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_qt5_ui_main_window.h" resolved
#include <QFontDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QDialog>
#include <iostream>
#include "qt5_ui_main_window.h"
#include "ui_qt5_ui_main_window.h"
#include "QColorDialog"


qt5_ui_main_window::qt5_ui_main_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::qt5_ui_main_window)
{
    ui->setupUi(this);
//    ui->actionNew->setIcon(QIcon("D:\\dev\\workspace\\clion\\qt-base\\images\\panda.jpg"));
    ui->actionNew->setIcon(QIcon("../images/panda.jpg"));

//    点击新建按钮弹出一个对话框
    connect(ui->actionNew, &QAction::triggered, [=]() {
//        对话框 分类
//      模态对话框（不可以对其他对话框操作） 和 非模态对话框（可以对其他对话框操作）
//      模态创建
        QDialog dlg(this);
        dlg.resize(200, 100);
        dlg.exec();
        std::cout << "模态对话框弹出了" << std::endl;
    });

    connect(ui->actionSave, &QAction::triggered, [=]() {
//        非模态创建
        auto dlg2 = new QDialog(this);
        dlg2->setAttribute(Qt::WA_DeleteOnClose);
        dlg2->resize(200, 100);
        dlg2->show();
        std::cout << "非模态对话框弹出了" << std::endl;

    });

    connect(ui->actionItem, &QAction::triggered, [=]() {
//        消息对话框
//        错误对话框
        QMessageBox::critical(this, "critical", "错误");
//        信息对话框
        QMessageBox::information(this, "information", "信息");
//        提问对话框
//        参数分析：参数1，父亲 参数2 标题 参数3 提示内容 参数4 按键类型 参数5 默认关联回车键
        auto ret = QMessageBox::question(this, "question", "提问", QMessageBox::Save | QMessageBox::Cancel, QMessageBox::Cancel);
        if (ret == QMessageBox::Save)
        {
            std::cout << "选择的是保存" << std::endl;
        }
        else
        {
            std::cout << "选择的取消" << std::endl;
        }

//        警告对话框
        QMessageBox::warning(this, "warning", "警告");
//        其他标准对话框
//        颜色对话框
        auto color = QColorDialog::getColor(QColor(255, 0, 0));
        std::cout << std::format("r:{}, g:{}, b:{}", color.red(), color.green(), color.blue());

//        文件对话框
        QFileDialog::getOpenFileName(this, "打开文件", "D:/dev", "(*.exe)");
//        字体对话框
        bool flag;
        auto front = QFontDialog::getFont(&flag, this);
        std::cout << std::format("字体：{}， 字号：{}， 是否加粗：{}， 是否倾斜:{}\n",
                   front.family().toStdString(), front.pointSize(), front.bold(), front.italic());





    });








}

qt5_ui_main_window::~qt5_ui_main_window()
{
    delete ui;
}
