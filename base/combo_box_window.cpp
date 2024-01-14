//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_combo_box_window.h" resolved
#include <QTextBlock>
#include "combo_box_window.h"
#include "ui_combo_box_window.h"


combo_box_window::combo_box_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::combo_box_window)
{
    ui->setupUi(this);
    this->setWindowTitle("ComboBox练习");
    on_button_init_clear_list();
    on_button_city_NO();
    on_check_box_checked();
    on_combo_box_changed();
    on_plain_text_edit_events();
}

combo_box_window::~combo_box_window()
{
    delete ui;
}

void combo_box_window::on_button_init_clear_list()
{
    connect(ui->pushButtonInitList, &QPushButton::clicked,
            [=, this] {
                ui->comboBoxList->clear();
                QIcon icon("../images/icon/aim.ico");
                for (int i = 0; i < 20; ++i)
                {
                    ui->comboBoxList->addItem(icon, QString::asprintf("Item %d", i));
                }
            });
    connect(ui->pushButtonClearList, &QPushButton::clicked,
            [=, this] {
                ui->comboBoxList->clear();
            });
}

void combo_box_window::on_button_city_NO()
{
    connect(ui->pushButtonInitCity, &QPushButton::clicked,
            [=, this] {
                ui->comboBoxCityNO->clear();
                QIcon icon("../images/icon/UNIT.ICO");
                std::map<QString, int> city_zone;
                city_zone.insert({"北京", 10});
                city_zone.insert({"上海", 20});
                city_zone.insert({"天津", 30});
                city_zone.insert({"郑州", 03});
                for (const auto &[key, value]: city_zone)
                {
                    ui->comboBoxCityNO->addItem(icon, key, value);
                }

            });
}

void combo_box_window::on_check_box_checked()
{
    connect(ui->checkBoxEnableEdit, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
        ui->comboBoxList->setEditable(checked);
    });

}

void combo_box_window::on_combo_box_changed()
{
    connect(ui->comboBoxList, qOverload<int>(&QComboBox::currentIndexChanged),
            [=, this](int index) {
        if (!ui->comboBoxList->currentText().isEmpty())
            ui->plainTextEdit->appendPlainText(ui->comboBoxList->currentText());
    });
    connect(ui->comboBoxCityNO, qOverload<int>(&QComboBox::currentIndexChanged),
            [=, this](int index) {
        if (!ui->comboBoxCityNO->currentText().isEmpty())
        {
            auto zone = ui->comboBoxCityNO->currentData().toString();
            ui->plainTextEdit->appendPlainText(ui->comboBoxCityNO->currentText() + "区号：" + zone);
        }
    });
}

void combo_box_window::on_plain_text_edit_events()
{
    connect(ui->checkBoxReadOnly, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
        ui->plainTextEdit->setReadOnly(checked);
    });
    connect(ui->pushButtonClearContent, &QPushButton::clicked,
            [=, this] {
        ui->plainTextEdit->clear();
    });
    connect(ui->pushButtonTextAdd, &QPushButton::clicked,
            [=, this] {

        auto doc = ui->plainTextEdit->document();
        QIcon icon("../images/icon/aim.ico");
        for (int i = 0; i < doc->blockCount(); ++i)
        {
            if (!doc->findBlockByLineNumber(i).text().isEmpty())
                ui->comboBoxList->addItem(icon, doc->findBlockByLineNumber(i).text());
        }
    });
}
