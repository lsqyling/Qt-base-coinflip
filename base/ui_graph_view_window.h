/********************************************************************************
** Form generated from reading UI file 'graph_view_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_VIEW_WINDOW_H
#define UI_GRAPH_VIEW_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <graph_view_impl.h>

QT_BEGIN_NAMESPACE

class Ui_graph_view_window
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *labelGraphViewInfo;
    QLabel *labelSceneRect;
    graph_view_impl *graphicsView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *graph_view_window)
    {
        if (graph_view_window->objectName().isEmpty())
            graph_view_window->setObjectName(QString::fromUtf8("graph_view_window"));
        graph_view_window->resize(901, 554);
        centralwidget = new QWidget(graph_view_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelGraphViewInfo = new QLabel(groupBox);
        labelGraphViewInfo->setObjectName(QString::fromUtf8("labelGraphViewInfo"));

        gridLayout->addWidget(labelGraphViewInfo, 0, 0, 1, 1);

        labelSceneRect = new QLabel(groupBox);
        labelSceneRect->setObjectName(QString::fromUtf8("labelSceneRect"));

        gridLayout->addWidget(labelSceneRect, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        graphicsView = new graph_view_impl(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout_2->addWidget(graphicsView, 1, 0, 1, 1);

        graph_view_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(graph_view_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        graph_view_window->setStatusBar(statusbar);

        retranslateUi(graph_view_window);

        QMetaObject::connectSlotsByName(graph_view_window);
    } // setupUi

    void retranslateUi(QMainWindow *graph_view_window)
    {
        graph_view_window->setWindowTitle(QCoreApplication::translate("graph_view_window", "graph_view_window", nullptr));
        groupBox->setTitle(QString());
        labelGraphViewInfo->setText(QString());
        labelSceneRect->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class graph_view_window: public Ui_graph_view_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_VIEW_WINDOW_H
