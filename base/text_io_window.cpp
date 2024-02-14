//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_text_io_window.h" resolved
#include <QFileDialog>
#include <QTextStream>
#include <QFile>
#include "text_io_window.h"
#include "ui_text_io_window.h"


text_io_window::text_io_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::text_io_window)
{
    ui->setupUi(this);
    this->setWindowTitle("TextIO的应用");
    this->setCentralWidget(ui->tabWidget);

    on_actions_triggered();
}

text_io_window::~text_io_window()
{
    delete ui;
}

void text_io_window::on_actions_triggered()
{
    connect(ui->actionQFileOpen, &QAction::triggered,
            [=, this] {
        QString filename = QFileDialog::getOpenFileName(this, "选中要打开的文件", "../",
                                                        "程序文件(*.h *.cpp);;所有文件(*.*)");
        if (filename.isEmpty())
            return ;
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            ui->plainTextEditFile->clear();
            ui->plainTextEditFile->setPlainText(QString(file.readAll()));
        }
        ui->tabWidget->setCurrentIndex(1);
    });

    connect(ui->actionQFileSave, &QAction::triggered,
            [=, this] {
        QString filename = QFileDialog::getSaveFileName(this, "选中要保存的文件", "../",
                                                        "程序文件(*.h *.cpp);;所有文件(*.*)");
        if (filename.isEmpty())
            return ;
        QFile file(filename);
        if (file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text))
        {
            file.write(ui->plainTextEditFile->toPlainText().toUtf8());
        }
        ui->tabWidget->setCurrentIndex(1);
    });

    connect(ui->actionQTextStreamOpen, &QAction::triggered,
            [=, this] {
        QString filename = QFileDialog::getOpenFileName(this, "选中要保存的文件", "../",
                                                        "程序文件(*.h *.cpp);;所有文件(*.*)");
        if (filename.isEmpty())
            return ;
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream stream(&file);
            ui->plainTextEditStream->clear();
            while (!stream.atEnd())
            {
                ui->plainTextEditStream->appendPlainText(stream.readLine());
            }
        }
        ui->tabWidget->setCurrentIndex(0);
    });
    connect(ui->actionQTextStreamSave, &QAction::triggered,
            [=, this] {
        QString filename = QFileDialog::getSaveFileName(this, "选中要保存的文件", "../",
                                                        "程序文件(*.h *.cpp);;所有文件(*.*)");
        if (filename.isEmpty())
            return ;
        QFile file(filename);
        if (file.open(QIODevice::ReadWrite | QIODevice::Truncate | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << ui->plainTextEditStream->toPlainText();
        }
        ui->tabWidget->setCurrentIndex(0);
    });
}
