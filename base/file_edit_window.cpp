//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_file_edit_window.h" resolved
#include <fmt/core.h>
#include "file_edit_window.h"
#include "ui_file_edit_window.h"


file_edit_window::file_edit_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::file_edit_window)
{
    ui->setupUi(this);
    init_ui();

    this->setWindowTitle("FileEditor");
    this->setWindowIcon(QIcon("../images/icon/editor.ico"));
    on_font_fmt();
    on_spin_box_combo_box();

}

file_edit_window::~file_edit_window()
{
    delete ui;
}

void file_edit_window::init_ui()
{
    label_file_ = new QLabel;
    label_file_->setText("当前文件：");
    label_file_->setMinimumWidth(170);
    ui->statusbar->addWidget(label_file_);

    progress_bar_ = new QProgressBar;
    progress_bar_->setMinimum(5);
    progress_bar_->setMaximum(50);
    progress_bar_->setValue(ui->textEdit->font().pointSize());
    ui->statusbar->addWidget(progress_bar_);

    spin_box_ = new QSpinBox;
    spin_box_->setMinimum(5);
    spin_box_->setMaximum(50);
    ui->toolBar->addWidget(new QLabel("字体大小"));
    ui->toolBar->addWidget(spin_box_);

    font_combo_box_ = new QFontComboBox;
    ui->toolBar->addWidget(new QLabel("字体"));
    ui->toolBar->addWidget(font_combo_box_);
}



void file_edit_window::on_font_fmt()
{
    connect(ui->actionBold, qOverload<bool>(&QAction::triggered), [=, this](bool checked) {
        auto font = ui->textEdit->currentFont();
        font.setBold(checked);
        ui->textEdit->setFont(font);
        ui->actionBold->setChecked(checked);
    });

    connect(ui->actionItalic, qOverload<bool>(&QAction::triggered), [=, this](bool checked) {
        auto font = ui->textEdit->currentFont();
        font.setItalic(checked);

        ui->actionItalic->setChecked(checked);
        ui->textEdit->setFont(font);
    });

    connect(ui->actionUnderline, qOverload<bool>(&QAction::triggered), [=, this](bool checked) {
        auto font = ui->textEdit->currentFont();
        font.setUnderline(checked);

        ui->actionUnderline->setChecked(checked);
        ui->textEdit->setFont(font);
    });

}

void file_edit_window::on_textEdit_copyAvailable(bool b)
{
    ui->actionCut->setEnabled(b);
    ui->actionCopy->setEnabled(b);
    ui->actionPaste->setEnabled(ui->textEdit->canPaste());

}

void file_edit_window::on_spin_box_combo_box()
{
    connect(font_combo_box_, qOverload<const QFont &>(&QFontComboBox::currentFontChanged),
            [=, this](const QFont &font) {
                ui->textEdit->setFont(font);
            });

    connect(spin_box_, qOverload<int>(&QSpinBox::valueChanged),
            [=, this](int fz) {
                auto font = ui->textEdit->currentFont();
                font.setPointSize(fz);
                ui->textEdit->setFont(font);
                progress_bar_->setValue(fz);
            });
}



