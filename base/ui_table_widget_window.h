/********************************************************************************
** Form generated from reading UI file 'table_widget_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_WIDGET_WINDOW_H
#define UI_TABLE_WIDGET_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_table_widget_window
{
public:
    QGridLayout *gridLayout_2;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButtonSetHeader;
    QPushButton *pushButtonSetRows;
    QSpinBox *spinBoxRows;
    QPushButton *pushButtonSheetInitData;
    QPushButton *pushButtonDelCurRow;
    QPushButton *pushButtonReadSheetToText;
    QCheckBox *checkBoxSheetEditable;
    QCheckBox *checkBoxSheetRowColor;
    QCheckBox *checkBoxShowSheetRowHeader;
    QCheckBox *checkBoxShowSheetColHeader;
    QRadioButton *radioButtonRow;
    QRadioButton *radioButtonCell;
    QPushButton *pushButtonInsertRow;
    QPushButton *pushButtonAddRow;
    QPushButton *pushButtonAutoRowHigh;
    QPushButton *pushButtonAutoColWidth;
    QSplitter *splitter;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *table_widget_window)
    {
        if (table_widget_window->objectName().isEmpty())
            table_widget_window->setObjectName(QString::fromUtf8("table_widget_window"));
        table_widget_window->resize(1182, 610);
        gridLayout_2 = new QGridLayout(table_widget_window);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter_2 = new QSplitter(table_widget_window);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(300, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonSetHeader = new QPushButton(groupBox);
        pushButtonSetHeader->setObjectName(QString::fromUtf8("pushButtonSetHeader"));

        gridLayout->addWidget(pushButtonSetHeader, 0, 0, 1, 3);

        pushButtonSetRows = new QPushButton(groupBox);
        pushButtonSetRows->setObjectName(QString::fromUtf8("pushButtonSetRows"));

        gridLayout->addWidget(pushButtonSetRows, 1, 0, 1, 2);

        spinBoxRows = new QSpinBox(groupBox);
        spinBoxRows->setObjectName(QString::fromUtf8("spinBoxRows"));
        spinBoxRows->setValue(8);

        gridLayout->addWidget(spinBoxRows, 1, 2, 1, 1);

        pushButtonSheetInitData = new QPushButton(groupBox);
        pushButtonSheetInitData->setObjectName(QString::fromUtf8("pushButtonSheetInitData"));

        gridLayout->addWidget(pushButtonSheetInitData, 2, 0, 1, 3);

        pushButtonDelCurRow = new QPushButton(groupBox);
        pushButtonDelCurRow->setObjectName(QString::fromUtf8("pushButtonDelCurRow"));

        gridLayout->addWidget(pushButtonDelCurRow, 4, 0, 1, 3);

        pushButtonReadSheetToText = new QPushButton(groupBox);
        pushButtonReadSheetToText->setObjectName(QString::fromUtf8("pushButtonReadSheetToText"));

        gridLayout->addWidget(pushButtonReadSheetToText, 6, 0, 1, 3);

        checkBoxSheetEditable = new QCheckBox(groupBox);
        checkBoxSheetEditable->setObjectName(QString::fromUtf8("checkBoxSheetEditable"));
        checkBoxSheetEditable->setChecked(true);

        gridLayout->addWidget(checkBoxSheetEditable, 7, 0, 1, 1);

        checkBoxSheetRowColor = new QCheckBox(groupBox);
        checkBoxSheetRowColor->setObjectName(QString::fromUtf8("checkBoxSheetRowColor"));
        checkBoxSheetRowColor->setChecked(true);
        checkBoxSheetRowColor->setAutoRepeat(false);

        gridLayout->addWidget(checkBoxSheetRowColor, 7, 1, 1, 2);

        checkBoxShowSheetRowHeader = new QCheckBox(groupBox);
        checkBoxShowSheetRowHeader->setObjectName(QString::fromUtf8("checkBoxShowSheetRowHeader"));
        checkBoxShowSheetRowHeader->setChecked(true);

        gridLayout->addWidget(checkBoxShowSheetRowHeader, 8, 0, 1, 1);

        checkBoxShowSheetColHeader = new QCheckBox(groupBox);
        checkBoxShowSheetColHeader->setObjectName(QString::fromUtf8("checkBoxShowSheetColHeader"));
        checkBoxShowSheetColHeader->setChecked(true);

        gridLayout->addWidget(checkBoxShowSheetColHeader, 8, 1, 1, 2);

        radioButtonRow = new QRadioButton(groupBox);
        radioButtonRow->setObjectName(QString::fromUtf8("radioButtonRow"));

        gridLayout->addWidget(radioButtonRow, 9, 0, 1, 1);

        radioButtonCell = new QRadioButton(groupBox);
        radioButtonCell->setObjectName(QString::fromUtf8("radioButtonCell"));
        radioButtonCell->setChecked(true);

        gridLayout->addWidget(radioButtonCell, 9, 1, 1, 2);

        pushButtonInsertRow = new QPushButton(groupBox);
        pushButtonInsertRow->setObjectName(QString::fromUtf8("pushButtonInsertRow"));

        gridLayout->addWidget(pushButtonInsertRow, 3, 0, 1, 1);

        pushButtonAddRow = new QPushButton(groupBox);
        pushButtonAddRow->setObjectName(QString::fromUtf8("pushButtonAddRow"));

        gridLayout->addWidget(pushButtonAddRow, 3, 2, 1, 1);

        pushButtonAutoRowHigh = new QPushButton(groupBox);
        pushButtonAutoRowHigh->setObjectName(QString::fromUtf8("pushButtonAutoRowHigh"));

        gridLayout->addWidget(pushButtonAutoRowHigh, 5, 0, 1, 1);

        pushButtonAutoColWidth = new QPushButton(groupBox);
        pushButtonAutoColWidth->setObjectName(QString::fromUtf8("pushButtonAutoColWidth"));

        gridLayout->addWidget(pushButtonAutoColWidth, 5, 1, 1, 2);

        splitter_2->addWidget(groupBox);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(splitter);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        splitter->addWidget(tableWidget);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        splitter->addWidget(plainTextEdit);
        splitter_2->addWidget(splitter);

        gridLayout_2->addWidget(splitter_2, 0, 0, 1, 1);


        retranslateUi(table_widget_window);

        QMetaObject::connectSlotsByName(table_widget_window);
    } // setupUi

    void retranslateUi(QWidget *table_widget_window)
    {
        table_widget_window->setWindowTitle(QCoreApplication::translate("table_widget_window", "table_widget_window", nullptr));
        groupBox->setTitle(QString());
        pushButtonSetHeader->setText(QCoreApplication::translate("table_widget_window", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
        pushButtonSetRows->setText(QCoreApplication::translate("table_widget_window", "\350\256\276\347\275\256\350\241\214\346\225\260", nullptr));
        pushButtonSheetInitData->setText(QCoreApplication::translate("table_widget_window", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        pushButtonDelCurRow->setText(QCoreApplication::translate("table_widget_window", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
        pushButtonReadSheetToText->setText(QCoreApplication::translate("table_widget_window", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", nullptr));
        checkBoxSheetEditable->setText(QCoreApplication::translate("table_widget_window", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        checkBoxSheetRowColor->setText(QCoreApplication::translate("table_widget_window", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", nullptr));
        checkBoxShowSheetRowHeader->setText(QCoreApplication::translate("table_widget_window", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", nullptr));
        checkBoxShowSheetColHeader->setText(QCoreApplication::translate("table_widget_window", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", nullptr));
        radioButtonRow->setText(QCoreApplication::translate("table_widget_window", "\350\241\214\351\200\211\346\213\251", nullptr));
        radioButtonCell->setText(QCoreApplication::translate("table_widget_window", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", nullptr));
        pushButtonInsertRow->setText(QCoreApplication::translate("table_widget_window", "\346\217\222\345\205\245\350\241\214", nullptr));
        pushButtonAddRow->setText(QCoreApplication::translate("table_widget_window", "\346\267\273\345\212\240\350\241\214", nullptr));
        pushButtonAutoRowHigh->setText(QCoreApplication::translate("table_widget_window", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", nullptr));
        pushButtonAutoColWidth->setText(QCoreApplication::translate("table_widget_window", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("table_widget_window", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("table_widget_window", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("table_widget_window", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("table_widget_window", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("table_widget_window", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("table_widget_window", "\346\226\260\345\273\272\345\210\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class table_widget_window: public Ui_table_widget_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_WIDGET_WINDOW_H
