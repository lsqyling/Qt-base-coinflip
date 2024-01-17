/********************************************************************************
** Form generated from reading UI file 'filesys_model_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESYS_MODEL_WINDOW_H
#define UI_FILESYS_MODEL_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filesys_model_window
{
public:
    QGridLayout *gridLayout_4;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTreeView *treeView;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFileName;
    QLabel *labelFileSize;
    QLabel *labelFileType;
    QCheckBox *checkBox;
    QLabel *labelFilePath;

    void setupUi(QWidget *filesys_model_window)
    {
        if (filesys_model_window->objectName().isEmpty())
            filesys_model_window->setObjectName(QString::fromUtf8("filesys_model_window"));
        filesys_model_window->resize(1189, 604);
        gridLayout_4 = new QGridLayout(filesys_model_window);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        splitter_3 = new QSplitter(filesys_model_window);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout_2->addWidget(listView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_3);
        splitter_2->addWidget(splitter);
        splitter_3->addWidget(splitter_2);
        groupBox_4 = new QGroupBox(splitter_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelFileName = new QLabel(groupBox_4);
        labelFileName->setObjectName(QString::fromUtf8("labelFileName"));

        horizontalLayout->addWidget(labelFileName);

        labelFileSize = new QLabel(groupBox_4);
        labelFileSize->setObjectName(QString::fromUtf8("labelFileSize"));

        horizontalLayout->addWidget(labelFileSize);

        labelFileType = new QLabel(groupBox_4);
        labelFileType->setObjectName(QString::fromUtf8("labelFileType"));

        horizontalLayout->addWidget(labelFileType);

        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);

        labelFilePath = new QLabel(groupBox_4);
        labelFilePath->setObjectName(QString::fromUtf8("labelFilePath"));

        gridLayout_5->addWidget(labelFilePath, 1, 0, 1, 1);

        splitter_3->addWidget(groupBox_4);

        gridLayout_4->addWidget(splitter_3, 0, 0, 1, 1);


        retranslateUi(filesys_model_window);

        QMetaObject::connectSlotsByName(filesys_model_window);
    } // setupUi

    void retranslateUi(QWidget *filesys_model_window)
    {
        filesys_model_window->setWindowTitle(QCoreApplication::translate("filesys_model_window", "filesys_model_window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("filesys_model_window", "TreeView", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("filesys_model_window", "ListView", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("filesys_model_window", "TableView", nullptr));
        groupBox_4->setTitle(QString());
        labelFileName->setText(QString());
        labelFileSize->setText(QString());
        labelFileType->setText(QString());
        checkBox->setText(QCoreApplication::translate("filesys_model_window", "\346\230\257\345\220\246\346\230\257\346\226\207\344\273\266\345\244\271", nullptr));
        labelFilePath->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class filesys_model_window: public Ui_filesys_model_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESYS_MODEL_WINDOW_H
