//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mdi_app_window.h" resolved
#include <QFileDialog>
#include <QMdiSubWindow>
#include "mdi_app_window.h"
#include "ui_mdi_app_window.h"
#include "doc_app_form.h"


mdi_app_window::mdi_app_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::mdi_app_window)
{
    ui->setupUi(this);
    setCentralWidget(ui->mdiArea);
    on_actions_triggered();
    on_widgets();
}

mdi_app_window::~mdi_app_window()
{
    delete ui;
}

void mdi_app_window::on_actions_triggered()
{
    connect(ui->actionNew, &QAction::triggered,
            [=, this] {

                auto doc = new doc_app_form(this);
                ui->mdiArea->addSubWindow(doc);
                doc->show();

                ui->actionCut->setEnabled(true);
                ui->actionCopy->setEnabled(true);
                ui->actionPaste->setEnabled(true);
                ui->actionFont->setEnabled(true);
            });

    connect(ui->actionOpen, &QAction::triggered,
            [=, this] {
                bool flag = false;
                doc_app_form *doc;
                if (ui->mdiArea->subWindowList().count() > 0)
                {
                    doc = dynamic_cast<doc_app_form *>(ui->mdiArea->activeSubWindow()->widget());
                    flag = doc->is_file_opened();
                }
                else
                    flag = true;
                if (flag)
                {
                    doc = new doc_app_form(this);
                    ui->mdiArea->addSubWindow(doc);
                }
                QString filename = QFileDialog::getOpenFileName(this, "打开文件", "../",
                                                                "C++文件(*.cpp *.h);;所有文件(*.*)");
                doc->loadFile(filename);
                doc->show();

                ui->actionCut->setEnabled(true);
                ui->actionCopy->setEnabled(true);
                ui->actionPaste->setEnabled(true);
                ui->actionFont->setEnabled(true);
            });

    connect(ui->actionCloseAll, &QAction::triggered,
            [=, this] {
                ui->mdiArea->closeAllSubWindows();
            });

    connect(ui->actionFont, &QAction::triggered,
            [=, this] {
                auto doc = dynamic_cast<doc_app_form *>(ui->mdiArea->activeSubWindow()->widget());
                doc->set_text_font();
            });
    connect(ui->actionCopy, &QAction::triggered,
            [=, this] {
                auto doc = dynamic_cast<doc_app_form *>(ui->mdiArea->activeSubWindow()->widget());
                doc->text_copy();
            });
    connect(ui->actionPaste, &QAction::triggered,
            [=, this] {
                auto doc = dynamic_cast<doc_app_form *>(ui->mdiArea->activeSubWindow()->widget());
                doc->text_paste();
            });
    connect(ui->actionCut, &QAction::triggered,
            [=, this] {
                auto doc = dynamic_cast<doc_app_form *>(ui->mdiArea->activeSubWindow()->widget());
                doc->text_cut();
            });
    connect(ui->actionMDI, qOverload<bool>(&QAction::triggered),
            [=, this](bool checked) {
        if (checked)
        {
            ui->mdiArea->setViewMode(QMdiArea::TabbedView);
            ui->mdiArea->setTabsClosable(true);
            ui->actionTiles->setEnabled(false);
            ui->actionCascade->setEnabled(false);
        }
        else
        {
            ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
            ui->actionTiles->setEnabled(true);
            ui->actionCascade->setEnabled(true);
        }

    });

    connect(ui->actionTiles, &QAction::triggered,
            [=, this] {
                ui->mdiArea->tileSubWindows();
            });

    connect(ui->actionCascade, &QAction::triggered,
            [=, this] {
                ui->mdiArea->cascadeSubWindows();
            });
}

void mdi_app_window::on_widgets()
{
    connect(ui->mdiArea, qOverload<QMdiSubWindow *>(&QMdiArea::subWindowActivated),
            [=, this](QMdiSubWindow *cur) {
        if (ui->mdiArea->subWindowList().empty())
        {
            ui->actionCut->setEnabled(false);
            ui->actionCopy->setEnabled(false);
            ui->actionPaste->setEnabled(false);
            ui->actionFont->setEnabled(false);
            ui->statusbar->clearMessage();
        }
        else
        {
            auto doc = dynamic_cast<doc_app_form *>(ui->mdiArea->activeSubWindow()->widget());
            ui->statusbar->showMessage(doc->get_curr_filename());
        }
    });



}
