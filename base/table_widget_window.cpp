//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_table_widget_window.h" resolved

#include "table_widget_window.h"
#include "ui_table_widget_window.h"
#include "QDate"


table_widget_window::table_widget_window(QWidget *parent) :
        QWidget(parent), ui(new Ui::table_widget_window)
{
    ui->setupUi(this);
    this->setWindowTitle("QTableWidget应用");

    on_push_button_clicked();
    on_check_box_checked();
    on_radio_button_clicked();



}

table_widget_window::~table_widget_window()
{
    delete ui;
}

void table_widget_window::on_push_button_clicked()
{
//    set sheet header
    connect(ui->pushButtonSetHeader, &QPushButton::clicked,
            [=, this] {
                QStringList head_text;
                head_text << "姓 名" << "性 别" << "出生日期" << "民 族" << "分 数" << "是否党员";
                ui->tableWidget->setColumnCount(head_text.count());
                for (int i = 0; i < ui->tableWidget->columnCount(); ++i)
                {
                    auto ht = new QTableWidgetItem(head_text.at(i));
                    auto font = ui->tableWidget->font();
                    font.setBold(true);
                    font.setPointSize(12);
                    ht->setFont(font);
                    ht->setForeground(QBrush(Qt::red));
                    ui->tableWidget->setHorizontalHeaderItem(i, ht);
                }
            });
//    set sheet rows
    connect(ui->pushButtonSetRows, &QPushButton::clicked,
            [=, this] {
                ui->tableWidget->setRowCount(ui->spinBoxRows->value());
                bool chk = ui->checkBoxSheetRowColor->isChecked();
                ui->tableWidget->setAlternatingRowColors(chk);
            });
//    init sheet data
    connect(ui->pushButtonSheetInitData, &QPushButton::clicked,
            [=, this] {
                QString sex, name;
                QDate birth(2016, 8, 20);
                bool is_party = false;
                int score = 80;
                for (int i = 0; i < ui->tableWidget->rowCount(); ++i)
                {
                    name = QString::asprintf("学生%d", i);
                    i % 2 == 0 ? sex = "男" : sex = "女";
                    create_items_a_row(i, name, sex, birth, "汉族", is_party, score);
                    is_party = !is_party;
                    ++score;
                    if (score > 100)
                        score = 80;
                    birth = birth.addDays(20);
                    birth = birth.addMonths(1);
                }
            });
//    insert sheet row
    connect(ui->pushButtonInsertRow, &QPushButton::clicked,
            [=, this] {

                int row = ui->tableWidget->currentRow();
                ui->tableWidget->insertRow(row);
                create_items_a_row(row, "新学生", "男", QDate::fromString("1989-03-25", "yyyy-MM-dd"),
                                   "汉族", false, 98);
            });
//    add sheet row
    connect(ui->pushButtonAddRow, &QPushButton::clicked,
            [=, this] {

                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);
                create_items_a_row(row, "新学生", "女", QDate::fromString("1987-10-25", "yyyy-MM-dd"),
                                   "汉族", true, 89);
            });

//    del row
    connect(ui->pushButtonDelCurRow, &QPushButton::clicked,
            [=, this] {
                ui->tableWidget->removeRow(ui->tableWidget->currentRow());
            });
//    auto row adjust
    connect(ui->pushButtonAutoRowHigh, &QPushButton::clicked,
            [=, this] {

                ui->tableWidget->resizeRowsToContents();
            });
//    auto col width
    connect(ui->pushButtonAutoColWidth, &QPushButton::clicked,
            [=, this] {

                ui->tableWidget->resizeColumnsToContents();
            });
//    read contents to text
    connect(ui->pushButtonReadSheetToText, &QPushButton::clicked,
            [=, this] {
                ui->plainTextEdit->clear();
                for (int i = 0, j; i < ui->tableWidget->rowCount(); ++i)
                {
                    QString str;
                    for (j = 0; j < ui->tableWidget->columnCount() - 1; ++j)
                    {
                        auto item = ui->tableWidget->item(i, j);
                        str += item->text() + " ";
                    }
                    auto item = ui->tableWidget->item(i, j);
                    if (item->checkState() == Qt::Checked)
                        str += "党员";
                    else
                        str += "群众";
                    ui->plainTextEdit->appendPlainText(str);
                }
            });


}

void table_widget_window::on_check_box_checked()
{
//    row change colour
    connect(ui->checkBoxSheetRowColor, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
                ui->tableWidget->setAlternatingRowColors(checked);
            });

//    sheet editable
    connect(ui->checkBoxSheetEditable, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
                if (checked)
                    ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked
                                                     | QAbstractItemView::SelectedClicked);
                else
                    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
            });

    connect(ui->checkBoxShowSheetColHeader, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
                ui->tableWidget->verticalHeader()->setVisible(checked);

    });

    connect(ui->checkBoxShowSheetRowHeader, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
                ui->tableWidget->horizontalHeader()->setVisible(checked);
    });

}


void table_widget_window::create_items_a_row(int row_num, QString name, QString sex,
                                             QDate birth, QString nationality,
                                             bool is_party, int score)
{

    QTableWidgetItem *item;
    static int stu_id = 2000000;
//    Name
    item = new QTableWidgetItem(name, cell_type_to_int(cell_type::Name));
    item->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    item->setData(Qt::UserRole, ++stu_id);
    ui->tableWidget->setItem(row_num, field_col_num_to_int(field_col_num::Name), item);
//    Sex
    QIcon icon;
    if (sex == "男")
        icon.addFile("../images/icon/boy.ico");
    else
        icon.addFile("../images/icon/girl.ico");

    item = new QTableWidgetItem(sex, cell_type_to_int(cell_type::Sex));
    item->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    item->setIcon(icon);
    ui->tableWidget->setItem(row_num, field_col_num_to_int(field_col_num::Sex), item);
//    Birth
    item = new QTableWidgetItem(birth.toString("yyyy-MM-dd"), cell_type_to_int(cell_type::Birth));
    item->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem(row_num, field_col_num_to_int(field_col_num::Birth), item);
//    Nation
    item = new QTableWidgetItem(nationality, cell_type_to_int(cell_type::Nation));
    item->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem(row_num, field_col_num_to_int(field_col_num::Nation), item);
//    IsParty

    item = new QTableWidgetItem("党员", cell_type_to_int(cell_type::IsParty));
    if (is_party)
        item->setCheckState(Qt::Checked);
    else
        item->setCheckState(Qt::Unchecked);
    item->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    item->setBackground(QBrush(Qt::yellow));
    ui->tableWidget->setItem(row_num, field_col_num_to_int(field_col_num::IsParty), item);
//    Score
    item = new QTableWidgetItem(QString::number(score), cell_type_to_int(cell_type::Score));
    item->setTextAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
    ui->tableWidget->setItem(row_num, field_col_num_to_int(field_col_num::Score), item);
}

void table_widget_window::on_radio_button_clicked()
{
    connect(ui->radioButtonRow, &QRadioButton::clicked,
            [=, this] {
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    });

    connect(ui->radioButtonCell, &QRadioButton::clicked,
            [=, this] {
        ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
    });
}
