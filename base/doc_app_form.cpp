//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_doc_app_form.h" resolved
#include <QFontDialog>
#include "doc_app_form.h"
#include "ui_doc_app_form.h"
#include "QTextStream"
#include "QFileInfo"


doc_app_form::doc_app_form(QWidget *parent) :
        QWidget(parent), ui(new Ui::doc_app_form)
{
    ui->setupUi(this);
}

doc_app_form::~doc_app_form()
{
    delete ui;
}

bool doc_app_form::is_file_opened() const
{
    return is_opened_;
}

void doc_app_form::loadFile(QString filename)
{
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream ts(&file);
        ui->plainTextEdit->clear();
        ui->plainTextEdit->setPlainText(ts.readAll());
        file.close();
        filename_ = filename;
        this->setWindowTitle(QFileInfo(filename).fileName());
        is_opened_ = true;
    }
}

void doc_app_form::set_text_font()
{
    auto font = ui->plainTextEdit->font();
    bool ok;
    font = QFontDialog::getFont(&ok, font);
    ui->plainTextEdit->setFont(font);
}

void doc_app_form::text_copy()
{
    ui->plainTextEdit->copy();

}

void doc_app_form::text_paste()
{
    ui->plainTextEdit->paste();

}

void doc_app_form::text_cut()
{
    ui->plainTextEdit->cut();
}

QString doc_app_form::get_curr_filename() const
{
    return filename_;
}
