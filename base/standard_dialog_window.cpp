//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_standard_dialog_window.h" resolved
#include <QInputDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>
#include "standard_dialog_window.h"
#include "ui_standard_dialog_window.h"
#include "QMessageBox"


standard_dialog_window::standard_dialog_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::standard_dialog_window)
{
    ui->setupUi(this);
    this->setWindowTitle("StandardDialog应用");

    on_input_dialog_clicked();
    on_standard_dialog_clicked();
    on_message_dialog_clicked();

}

standard_dialog_window::~standard_dialog_window()
{
    delete ui;
}

void standard_dialog_window::on_standard_dialog_clicked()
{
    connect(ui->pushButtonFileOpen, &QPushButton::clicked,
            [=, this] {
        QString filename = QFileDialog::getOpenFileName(this,"打开一个文件", "../images",
                                                        "打开文本文件(*.txt)"
                                                        ";;打开图片(*.jpg *.gif *.jpeg *.png)"
                                                        ";;所有文件(*.*)");
        if (filename.isEmpty())
            return ;
        ui->plainTextEdit->appendPlainText(filename);
    });

    connect(ui->pushButtonFileListOpen, &QPushButton::clicked,
            [=, this] {
            QStringList files = QFileDialog::getOpenFileNames(this,"打开一个文件", "../images",
                                                            "打开文本文件(*.txt)"
                                                            ";;打开图片(*.jpg *.gif *.jpeg *.png)"
                                                            ";;所有文件(*.*)");
            if (files.isEmpty())
                return ;
            for (const auto &file: files)
                ui->plainTextEdit->appendPlainText(file);
    });

    connect(ui->pushButtonDirSelect, &QPushButton::clicked,
            [=, this] {
        QString dir = QFileDialog::getExistingDirectory(this, "选择目录", "../images");
        if (dir.isEmpty())
            return ;
        ui->plainTextEdit->appendPlainText(dir);
    });

    connect(ui->pushButtonFileSave, &QPushButton::clicked,
            [=, this] {
            QString filename = QFileDialog::getSaveFileName(this,"打开一个文件", "../images",
                                                            "打开文本文件(*.txt)"
                                                            ";;打开图片(*.jpg *.gif *.jpeg *.png)"
                                                            ";;所有文件(*.*)");
            if (filename.isEmpty())
                return ;
            ui->plainTextEdit->appendPlainText(filename);

    });
    connect(ui->pushButtonColorSelect, &QPushButton::clicked,
            [=, this] {
        auto plt = ui->plainTextEdit->palette();
        auto color = QColorDialog::getColor(plt.color(QPalette::Text), this, "选择颜色");
        if (!color.isValid())
            return ;
        plt.setColor(QPalette::Text, color);
        ui->plainTextEdit->setPalette(plt);
    });

    connect(ui->pushButtonFontSelect, &QPushButton::clicked,
            [=, this] {
        bool ok = false;
        auto font = QFontDialog::getFont(&ok, ui->plainTextEdit->font(), this, "选择字体");
        if (!ok) return ;
        ui->plainTextEdit->setFont(font);
    });
}

void standard_dialog_window::on_input_dialog_clicked()
{

    connect(ui->pushButtonInputString, &QPushButton::clicked,
            [=, this] {
        bool ok = false;
        QString text = QInputDialog::getText(this, "输入字符串", "请输入文件名",
                                             QLineEdit::Normal,
                                             "xxxx.txt", &ok);
        if (!ok) return ;
        ui->plainTextEdit->appendPlainText(text);
    });

    connect(ui->pushButtonInputInteger, &QPushButton::clicked,
            [=, this] {
        bool ok = false;
        int value = QInputDialog::getInt(this, "输入数字", "请输入数字",
                                             100, -100, 350, 1, &ok);
        if (!ok) return ;
        ui->plainTextEdit->appendPlainText(QString::number(value));
    });
    connect(ui->pushButtonInputFloat, &QPushButton::clicked,
            [=, this] {
        bool ok = false;
        double value = QInputDialog::getDouble(this, "输入浮点数", "请输入浮点数",
                                             100, -1000, 1000, 2, &ok);
        if (!ok) return ;
        ui->plainTextEdit->appendPlainText(QString::number(value));
    });

    connect(ui->pushButtonInputItem, &QPushButton::clicked,
            [=, this] {
        bool ok = false;
        QStringList items;
        items << "item1" << "item2" << "item3";
        QString text = QInputDialog::getItem(this, "输入条目", "请输入条目",
                                             items, 0, false, &ok);
        if (!ok) return ;
        ui->plainTextEdit->appendPlainText(text);
    });
}

void standard_dialog_window::on_message_dialog_clicked()
{
    connect(ui->pushButtonMsgQuestion, &QPushButton::clicked,
            [=, this] {
                auto result = QMessageBox::question(this, "Question 消息框", "文件已修改，是否保存？",
                                                    QMessageBox::Yes
                                                    | QMessageBox::No
                                                    | QMessageBox::Cancel);
                QString str;
                switch (result)
                {
                    case QMessageBox::Yes:
                        str = "Question message box: yes selected.";
                        break;
                    case QMessageBox::No:
                        str = "Question message box: no selected.";
                        break;
                    case QMessageBox::Cancel:
                        str = "Question message box: cancel selected.";
                        break;
                    default:;
                }
                ui->plainTextEdit->appendPlainText(str);
            });

    connect(ui->pushButtonMsgInformation, &QPushButton::clicked,
            [=, this] {
        QMessageBox::information(this, "Information消息框", "这是一条消息");
    });

    connect(ui->pushButtonMsgWarning, &QPushButton::clicked,
            [=, this] {
        QMessageBox::warning(this, "Warning消息框", "这是一条warning");
    });

    connect(ui->pushButtonMsgCritical, &QPushButton::clicked,
            [=, this] {
        QMessageBox::critical(this, "Critical消息框", "这是一条Critical消息");

    });


    connect(ui->pushButtonMsgAbout, &QPushButton::clicked,
            [=, this] {
        QMessageBox::about(this, "About消息框", "这是一条About消息");

    });
   connect(ui->pushButtonMsgAboutQt, &QPushButton::clicked,
            [=, this] {
        QMessageBox::aboutQt(this, "AboutQT消息框");

    });
}
