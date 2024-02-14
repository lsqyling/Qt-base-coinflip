//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_doc_form.h" resolved
#include <QToolBar>
#include <QVBoxLayout>
#include "doc_form.h"
#include "ui_doc_form.h"


doc_form::doc_form(QWidget *parent) :
        QWidget(parent), ui(new Ui::doc_form)
{
    ui->setupUi(this);
    auto loc_tool_bar = new QToolBar("文档", this);
    loc_tool_bar->addAction(ui->actionOpen);
    loc_tool_bar->addAction(ui->actionFont);
    loc_tool_bar->addSeparator();
    loc_tool_bar->addAction(ui->actionCut);
    loc_tool_bar->addAction(ui->actionCopy);
    loc_tool_bar->addAction(ui->actionPaste);
    loc_tool_bar->addAction(ui->actionUndo);
    loc_tool_bar->addAction(ui->actionRedo);
    loc_tool_bar->addSeparator();
    loc_tool_bar->addAction(ui->actionQuit);
    loc_tool_bar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

    auto layout = new QVBoxLayout;
    layout->addWidget(loc_tool_bar);
    layout->addWidget(ui->plainTextEdit);
    layout->setContentsMargins(2, 2, 2, 2);
    layout->setSpacing(2);
    setLayout(layout);
}

doc_form::~doc_form()
{
    delete ui;
}
