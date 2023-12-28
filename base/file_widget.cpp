//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_file_widget.h" resolved

#include <QFileDialog>
#include <QFileInfo>
#include <QDateTime>
#include <QFile>
#include "file_widget.h"
#include "ui_file_widget.h"
#include "fmt/core.h"


file_widget::file_widget(QWidget *parent) :
        QWidget(parent), ui(new Ui::file_widget)
{
    ui->setupUi(this);

//  设置读取文件路径，将文件内容加载到文本区域中
    connect(ui->pushButton, &QPushButton::clicked, [=]() {
        QString path = QFileDialog::getOpenFileName(this, "打开文件", "../");
//        将路径放入lineEdit中
        ui->lineEdit->setText(path);
//        将内容读取到textEdit中
//        QFile 默认格式UTF-8 编码类 QTextCodec
        QFile file(path);
//        设置打开方式
        file.open(QIODevice::ReadOnly);
        auto arr = file.readAll();
//        将数据读取到文本框中
        ui->textEdit->setText(arr);
        file.close();

        file.open(QIODevice::Append);
        file.write("/**这是一个注释*/");

//        文件信息类：QFileInfo
        QFileInfo info(path);
        fmt::print("大小：{}\n文件名：{}\n文件路径：{}\n后缀名：{}\n",
                   info.size(), info.fileName().toStdString(),
                   info.filePath().toStdString(), info.suffix().toStdString());
        fmt::print("创建时间：{}\n最后修改时间：{}\n拥有者: {}\n",
                   info.birthTime().toString("yyyy-MM-dd hh:mm:ss").toStdString(),
                   info.lastModified().toString("yyyy-MM-dd hh:mm:ss").toStdString(),
                   info.owner().toStdString());
    });
}

file_widget::~file_widget()
{
    delete ui;
}
