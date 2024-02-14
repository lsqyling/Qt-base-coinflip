/********************************************************************************
** Form generated from reading UI file 'linechart_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINECHART_WINDOW_H
#define UI_LINECHART_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_linechart_window
{
public:
    QAction *actionDrawRefresh;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionResize;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_14;
    QSplitter *splitter_4;
    QToolBox *toolBox;
    QWidget *pageSetCharts;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButtonTop;
    QRadioButton *radioButtonBottom;
    QCheckBox *checkBoxLegendVisible;
    QCheckBox *checkBoxBackgroundVisible;
    QPushButton *pushButtonLegendFont;
    QPushButton *pushButtonLegendColor;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxLeft;
    QLabel *label_2;
    QSpinBox *spinBoxRight;
    QLabel *label_3;
    QSpinBox *spinBoxTop;
    QLabel *label_4;
    QSpinBox *spinBoxBottom;
    QPushButton *pushButtonMarginSet;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QComboBox *comboBoxAnimation;
    QLabel *label_6;
    QComboBox *comboBoxTopic;
    QWidget *pageSetCurve;
    QGridLayout *gridLayout_8;
    QSplitter *splitter_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QPushButton *pushButtonSeqName;
    QLineEdit *lineEditSeqName;
    QCheckBox *checkBoxSeqVisible;
    QCheckBox *checkBoxDataPointVisible;
    QPushButton *pushButtonCurveColor;
    QPushButton *pushButtonCurvePen;
    QLabel *label_7;
    QSlider *horizontalSliderTransparency;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBoxLabelDataPointVisible;
    QPushButton *pushButtonLabelColor;
    QPushButton *pushButtonLabelFont;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QRadioButton *radioButtonYPoint;
    QRadioButton *radioButtonXYPoint;
    QWidget *pageSetAxis;
    QGridLayout *gridLayout_15;
    QSplitter *splitter_3;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_17;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_9;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_12;
    QCheckBox *checkBox_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_16;
    QLabel *label_10;
    QSpinBox *spinBox;
    QCheckBox *checkBox_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_13;
    QLabel *label_11;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox_6;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QChartView *chartView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *linechart_window)
    {
        if (linechart_window->objectName().isEmpty())
            linechart_window->setObjectName(QString::fromUtf8("linechart_window"));
        linechart_window->resize(1245, 631);
        actionDrawRefresh = new QAction(linechart_window);
        actionDrawRefresh->setObjectName(QString::fromUtf8("actionDrawRefresh"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/linechart/828.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionDrawRefresh->setIcon(icon);
        actionZoomIn = new QAction(linechart_window);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/linechart/418.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon1);
        actionZoomOut = new QAction(linechart_window);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/linechart/416.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon2);
        actionResize = new QAction(linechart_window);
        actionResize->setObjectName(QString::fromUtf8("actionResize"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/linechart/414.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionResize->setIcon(icon3);
        actionExit = new QAction(linechart_window);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/linechart/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        centralwidget = new QWidget(linechart_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_14 = new QGridLayout(centralwidget);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        splitter_4 = new QSplitter(centralwidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter_4);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMaximumSize(QSize(350, 16777215));
        pageSetCharts = new QWidget();
        pageSetCharts->setObjectName(QString::fromUtf8("pageSetCharts"));
        pageSetCharts->setGeometry(QRect(0, 0, 350, 420));
        gridLayout_4 = new QGridLayout(pageSetCharts);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        splitter = new QSplitter(pageSetCharts);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioButtonTop = new QRadioButton(groupBox);
        radioButtonTop->setObjectName(QString::fromUtf8("radioButtonTop"));

        gridLayout_2->addWidget(radioButtonTop, 0, 0, 1, 1);

        radioButtonBottom = new QRadioButton(groupBox);
        radioButtonBottom->setObjectName(QString::fromUtf8("radioButtonBottom"));

        gridLayout_2->addWidget(radioButtonBottom, 0, 1, 1, 1);

        checkBoxLegendVisible = new QCheckBox(groupBox);
        checkBoxLegendVisible->setObjectName(QString::fromUtf8("checkBoxLegendVisible"));

        gridLayout_2->addWidget(checkBoxLegendVisible, 1, 0, 1, 1);

        checkBoxBackgroundVisible = new QCheckBox(groupBox);
        checkBoxBackgroundVisible->setObjectName(QString::fromUtf8("checkBoxBackgroundVisible"));

        gridLayout_2->addWidget(checkBoxBackgroundVisible, 1, 1, 1, 1);

        pushButtonLegendFont = new QPushButton(groupBox);
        pushButtonLegendFont->setObjectName(QString::fromUtf8("pushButtonLegendFont"));

        gridLayout_2->addWidget(pushButtonLegendFont, 2, 0, 1, 1);

        pushButtonLegendColor = new QPushButton(groupBox);
        pushButtonLegendColor->setObjectName(QString::fromUtf8("pushButtonLegendColor"));

        gridLayout_2->addWidget(pushButtonLegendColor, 2, 1, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxLeft = new QSpinBox(groupBox_2);
        spinBoxLeft->setObjectName(QString::fromUtf8("spinBoxLeft"));

        gridLayout->addWidget(spinBoxLeft, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxRight = new QSpinBox(groupBox_2);
        spinBoxRight->setObjectName(QString::fromUtf8("spinBoxRight"));

        gridLayout->addWidget(spinBoxRight, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBoxTop = new QSpinBox(groupBox_2);
        spinBoxTop->setObjectName(QString::fromUtf8("spinBoxTop"));

        gridLayout->addWidget(spinBoxTop, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        spinBoxBottom = new QSpinBox(groupBox_2);
        spinBoxBottom->setObjectName(QString::fromUtf8("spinBoxBottom"));

        gridLayout->addWidget(spinBoxBottom, 3, 1, 1, 1);

        pushButtonMarginSet = new QPushButton(groupBox_2);
        pushButtonMarginSet->setObjectName(QString::fromUtf8("pushButtonMarginSet"));

        gridLayout->addWidget(pushButtonMarginSet, 4, 0, 1, 2);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        comboBoxAnimation = new QComboBox(groupBox_3);
        comboBoxAnimation->setObjectName(QString::fromUtf8("comboBoxAnimation"));

        gridLayout_3->addWidget(comboBoxAnimation, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        comboBoxTopic = new QComboBox(groupBox_3);
        comboBoxTopic->setObjectName(QString::fromUtf8("comboBoxTopic"));

        gridLayout_3->addWidget(comboBoxTopic, 1, 1, 1, 1);

        splitter->addWidget(groupBox_3);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/linechart/3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(pageSetCharts, icon5, QString::fromUtf8("\345\233\276\350\241\250\350\256\276\347\275\256"));
        pageSetCurve = new QWidget();
        pageSetCurve->setObjectName(QString::fromUtf8("pageSetCurve"));
        gridLayout_8 = new QGridLayout(pageSetCurve);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        splitter_2 = new QSplitter(pageSetCurve);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        groupBox_4 = new QGroupBox(splitter_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButtonSeqName = new QPushButton(groupBox_4);
        pushButtonSeqName->setObjectName(QString::fromUtf8("pushButtonSeqName"));

        gridLayout_5->addWidget(pushButtonSeqName, 0, 0, 1, 1);

        lineEditSeqName = new QLineEdit(groupBox_4);
        lineEditSeqName->setObjectName(QString::fromUtf8("lineEditSeqName"));

        gridLayout_5->addWidget(lineEditSeqName, 0, 1, 1, 1);

        checkBoxSeqVisible = new QCheckBox(groupBox_4);
        checkBoxSeqVisible->setObjectName(QString::fromUtf8("checkBoxSeqVisible"));

        gridLayout_5->addWidget(checkBoxSeqVisible, 1, 0, 1, 1);

        checkBoxDataPointVisible = new QCheckBox(groupBox_4);
        checkBoxDataPointVisible->setObjectName(QString::fromUtf8("checkBoxDataPointVisible"));

        gridLayout_5->addWidget(checkBoxDataPointVisible, 1, 1, 1, 1);

        pushButtonCurveColor = new QPushButton(groupBox_4);
        pushButtonCurveColor->setObjectName(QString::fromUtf8("pushButtonCurveColor"));

        gridLayout_5->addWidget(pushButtonCurveColor, 2, 0, 1, 1);

        pushButtonCurvePen = new QPushButton(groupBox_4);
        pushButtonCurvePen->setObjectName(QString::fromUtf8("pushButtonCurvePen"));

        gridLayout_5->addWidget(pushButtonCurvePen, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 3, 0, 1, 1);

        horizontalSliderTransparency = new QSlider(groupBox_4);
        horizontalSliderTransparency->setObjectName(QString::fromUtf8("horizontalSliderTransparency"));
        horizontalSliderTransparency->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSliderTransparency, 3, 1, 1, 1);

        splitter_2->addWidget(groupBox_4);
        groupBox_5 = new QGroupBox(splitter_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        checkBoxLabelDataPointVisible = new QCheckBox(groupBox_5);
        checkBoxLabelDataPointVisible->setObjectName(QString::fromUtf8("checkBoxLabelDataPointVisible"));

        gridLayout_6->addWidget(checkBoxLabelDataPointVisible, 0, 0, 1, 1);

        pushButtonLabelColor = new QPushButton(groupBox_5);
        pushButtonLabelColor->setObjectName(QString::fromUtf8("pushButtonLabelColor"));

        gridLayout_6->addWidget(pushButtonLabelColor, 1, 0, 1, 1);

        pushButtonLabelFont = new QPushButton(groupBox_5);
        pushButtonLabelFont->setObjectName(QString::fromUtf8("pushButtonLabelFont"));

        gridLayout_6->addWidget(pushButtonLabelFont, 2, 0, 1, 1);

        splitter_2->addWidget(groupBox_5);
        groupBox_6 = new QGroupBox(splitter_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        radioButtonYPoint = new QRadioButton(groupBox_6);
        radioButtonYPoint->setObjectName(QString::fromUtf8("radioButtonYPoint"));

        gridLayout_7->addWidget(radioButtonYPoint, 0, 0, 1, 1);

        radioButtonXYPoint = new QRadioButton(groupBox_6);
        radioButtonXYPoint->setObjectName(QString::fromUtf8("radioButtonXYPoint"));

        gridLayout_7->addWidget(radioButtonXYPoint, 1, 0, 1, 1);

        splitter_2->addWidget(groupBox_6);

        gridLayout_8->addWidget(splitter_2, 0, 0, 1, 1);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/linechart/dis3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(pageSetCurve, icon6, QString::fromUtf8("\346\233\262\347\272\277\350\256\276\347\275\256"));
        pageSetAxis = new QWidget();
        pageSetAxis->setObjectName(QString::fromUtf8("pageSetAxis"));
        pageSetAxis->setGeometry(QRect(0, 0, 329, 877));
        gridLayout_15 = new QGridLayout(pageSetAxis);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        splitter_3 = new QSplitter(pageSetAxis);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        groupBox_7 = new QGroupBox(splitter_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_17 = new QGridLayout(groupBox_7);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        radioButton = new QRadioButton(groupBox_7);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_17->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_7);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_17->addWidget(radioButton_2, 0, 1, 1, 1);

        splitter_3->addWidget(groupBox_7);
        groupBox_8 = new QGroupBox(splitter_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_9 = new QGridLayout(groupBox_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_8 = new QLabel(groupBox_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_9->addWidget(label_8, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(groupBox_8);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout_9->addWidget(doubleSpinBox, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_9->addWidget(label_9, 1, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        gridLayout_9->addWidget(doubleSpinBox_2, 1, 1, 1, 1);

        checkBox = new QCheckBox(groupBox_8);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_9->addWidget(checkBox, 2, 0, 1, 1);

        pushButton = new QPushButton(groupBox_8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_9->addWidget(pushButton, 3, 0, 1, 2);

        splitter_3->addWidget(groupBox_8);
        groupBox_9 = new QGroupBox(splitter_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_10 = new QGridLayout(groupBox_9);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        pushButton_2 = new QPushButton(groupBox_9);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_10->addWidget(pushButton_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_9);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_10->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_9);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_10->addWidget(pushButton_3, 1, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_9);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        gridLayout_10->addWidget(checkBox_2, 1, 1, 1, 1);

        splitter_3->addWidget(groupBox_9);
        groupBox_10 = new QGroupBox(splitter_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_11 = new QGridLayout(groupBox_10);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        pushButton_4 = new QPushButton(groupBox_10);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_11->addWidget(pushButton_4, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_10);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_11->addWidget(lineEdit_2, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_10);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_11->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox_10);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_11->addWidget(pushButton_6, 1, 1, 1, 1);

        checkBox_3 = new QCheckBox(groupBox_10);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        gridLayout_11->addWidget(checkBox_3, 2, 0, 1, 1);

        splitter_3->addWidget(groupBox_10);
        groupBox_11 = new QGroupBox(splitter_3);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_12 = new QGridLayout(groupBox_11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        checkBox_4 = new QCheckBox(groupBox_11);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        gridLayout_12->addWidget(checkBox_4, 0, 0, 1, 1);

        pushButton_7 = new QPushButton(groupBox_11);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_12->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_8 = new QPushButton(groupBox_11);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_12->addWidget(pushButton_8, 2, 0, 1, 1);

        splitter_3->addWidget(groupBox_11);
        groupBox_12 = new QGroupBox(splitter_3);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout_16 = new QGridLayout(groupBox_12);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        label_10 = new QLabel(groupBox_12);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_16->addWidget(label_10, 0, 0, 1, 1);

        spinBox = new QSpinBox(groupBox_12);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_16->addWidget(spinBox, 0, 1, 1, 1);

        checkBox_5 = new QCheckBox(groupBox_12);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        gridLayout_16->addWidget(checkBox_5, 1, 0, 1, 2);

        pushButton_9 = new QPushButton(groupBox_12);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_16->addWidget(pushButton_9, 2, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_12);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_16->addWidget(pushButton_10, 2, 1, 1, 1);

        splitter_3->addWidget(groupBox_12);
        groupBox_13 = new QGroupBox(splitter_3);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        gridLayout_13 = new QGridLayout(groupBox_13);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_11 = new QLabel(groupBox_13);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_13->addWidget(label_11, 0, 0, 1, 1);

        spinBox_2 = new QSpinBox(groupBox_13);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        gridLayout_13->addWidget(spinBox_2, 0, 1, 1, 1);

        checkBox_6 = new QCheckBox(groupBox_13);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        gridLayout_13->addWidget(checkBox_6, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(groupBox_13);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_13->addWidget(pushButton_11, 2, 0, 1, 1);

        pushButton_12 = new QPushButton(groupBox_13);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_13->addWidget(pushButton_12, 2, 1, 1, 1);

        splitter_3->addWidget(groupBox_13);

        gridLayout_15->addWidget(splitter_3, 0, 0, 1, 1);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/linechart/f14.ico"), QSize(), QIcon::Normal, QIcon::Off);
        toolBox->addItem(pageSetAxis, icon7, QString::fromUtf8("\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256"));
        splitter_4->addWidget(toolBox);
        chartView = new QChartView(splitter_4);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        splitter_4->addWidget(chartView);

        gridLayout_14->addWidget(splitter_4, 0, 0, 1, 1);

        linechart_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(linechart_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        linechart_window->setStatusBar(statusbar);
        toolBar = new QToolBar(linechart_window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        linechart_window->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionDrawRefresh);
        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionZoomOut);
        toolBar->addAction(actionResize);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);

        retranslateUi(linechart_window);
        QObject::connect(actionExit, SIGNAL(triggered()), linechart_window, SLOT(close()));

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(linechart_window);
    } // setupUi

    void retranslateUi(QMainWindow *linechart_window)
    {
        linechart_window->setWindowTitle(QCoreApplication::translate("linechart_window", "linechart_window", nullptr));
        actionDrawRefresh->setText(QCoreApplication::translate("linechart_window", "\345\210\267\346\226\260\347\273\230\345\233\276", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("linechart_window", "\346\224\276\345\244\247", nullptr));
        actionZoomOut->setText(QCoreApplication::translate("linechart_window", "\347\274\251\345\260\217", nullptr));
        actionResize->setText(QCoreApplication::translate("linechart_window", "\345\216\237\345\247\213\345\244\247\345\260\217", nullptr));
        actionExit->setText(QCoreApplication::translate("linechart_window", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QString());
        radioButtonTop->setText(QCoreApplication::translate("linechart_window", "\344\270\212\346\226\271", nullptr));
        radioButtonBottom->setText(QCoreApplication::translate("linechart_window", "\344\270\213\346\226\271", nullptr));
        checkBoxLegendVisible->setText(QCoreApplication::translate("linechart_window", "\345\233\276\344\276\213\345\217\257\350\247\201", nullptr));
        checkBoxBackgroundVisible->setText(QCoreApplication::translate("linechart_window", "\350\203\214\346\231\257\345\217\257\350\247\201", nullptr));
        pushButtonLegendFont->setText(QCoreApplication::translate("linechart_window", "\345\255\227\344\275\223", nullptr));
        pushButtonLegendColor->setText(QCoreApplication::translate("linechart_window", "\346\240\207\347\255\276\351\242\234\350\211\262", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("linechart_window", "\350\276\271\350\267\235", nullptr));
        label->setText(QCoreApplication::translate("linechart_window", "\345\267\246", nullptr));
        label_2->setText(QCoreApplication::translate("linechart_window", "\345\217\263", nullptr));
        label_3->setText(QCoreApplication::translate("linechart_window", "\344\270\212", nullptr));
        label_4->setText(QCoreApplication::translate("linechart_window", "\344\270\213", nullptr));
        pushButtonMarginSet->setText(QCoreApplication::translate("linechart_window", "\350\256\276\347\275\256\350\276\271\350\267\235", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("linechart_window", "\345\212\250\347\224\273\346\225\210\346\236\234", nullptr));
        label_5->setText(QCoreApplication::translate("linechart_window", "\345\212\250\347\224\273\346\225\210\346\236\234", nullptr));
        label_6->setText(QCoreApplication::translate("linechart_window", "\344\270\273\351\242\230", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageSetCharts), QCoreApplication::translate("linechart_window", "\345\233\276\350\241\250\350\256\276\347\275\256", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("linechart_window", "\346\233\262\347\272\277\345\244\226\350\247\202", nullptr));
        pushButtonSeqName->setText(QCoreApplication::translate("linechart_window", "\345\272\217\345\210\227\345\220\215\347\247\260", nullptr));
        checkBoxSeqVisible->setText(QCoreApplication::translate("linechart_window", "\345\272\217\345\210\227\345\217\257\350\247\201", nullptr));
        checkBoxDataPointVisible->setText(QCoreApplication::translate("linechart_window", "\346\225\260\346\215\256\347\202\271\345\217\257\350\247\201", nullptr));
        pushButtonCurveColor->setText(QCoreApplication::translate("linechart_window", "\346\233\262\347\272\277\351\242\234\350\211\262", nullptr));
        pushButtonCurvePen->setText(QCoreApplication::translate("linechart_window", "\346\233\262\347\272\277Pen", nullptr));
        label_7->setText(QCoreApplication::translate("linechart_window", "\351\200\217\346\230\216\345\272\246", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("linechart_window", "\346\225\260\346\215\256\347\202\271\346\240\207\347\255\276", nullptr));
        checkBoxLabelDataPointVisible->setText(QCoreApplication::translate("linechart_window", "\346\225\260\346\215\256\347\202\271\346\240\207\347\255\276\345\217\257\350\247\201", nullptr));
        pushButtonLabelColor->setText(QCoreApplication::translate("linechart_window", "\346\240\207\347\255\276\351\242\234\350\211\262", nullptr));
        pushButtonLabelFont->setText(QCoreApplication::translate("linechart_window", "\346\240\207\347\255\276\345\255\227\344\275\223", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("linechart_window", "\346\240\207\347\255\276\346\240\274\345\274\217", nullptr));
        radioButtonYPoint->setText(QCoreApplication::translate("linechart_window", "y@point", nullptr));
        radioButtonXYPoint->setText(QCoreApplication::translate("linechart_window", "\357\274\210x@point, y@point\357\274\211", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageSetCurve), QCoreApplication::translate("linechart_window", "\346\233\262\347\272\277\350\256\276\347\275\256", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("linechart_window", "\350\256\276\347\275\256\345\235\220\346\240\207\350\275\264\345\257\271\350\261\241", nullptr));
        radioButton->setText(QCoreApplication::translate("linechart_window", "X", nullptr));
        radioButton_2->setText(QCoreApplication::translate("linechart_window", "Y", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("linechart_window", "\345\235\220\346\240\207\350\275\264\346\200\273\344\275\223", nullptr));
        label_8->setText(QCoreApplication::translate("linechart_window", "\346\234\200\345\260\217\345\200\274", nullptr));
        label_9->setText(QCoreApplication::translate("linechart_window", "\346\234\200\345\244\247\345\200\274", nullptr));
        checkBox->setText(QCoreApplication::translate("linechart_window", "\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
        pushButton->setText(QCoreApplication::translate("linechart_window", "\350\256\276\347\275\256\345\235\220\346\240\207\350\275\264\350\214\203\345\233\264", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("linechart_window", "\345\235\220\346\240\207\350\275\264\346\240\207\351\242\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("linechart_window", "\350\256\276\347\275\256\346\240\207\351\242\230", nullptr));
        pushButton_3->setText(QCoreApplication::translate("linechart_window", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        checkBox_2->setText(QCoreApplication::translate("linechart_window", "\346\240\207\351\242\230\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("linechart_window", "\350\275\264\345\210\273\345\272\246\346\240\207\347\255\276", nullptr));
        pushButton_4->setText(QCoreApplication::translate("linechart_window", "\346\240\207\347\255\276\346\240\274\345\274\217", nullptr));
        pushButton_5->setText(QCoreApplication::translate("linechart_window", "\346\226\207\345\255\227\351\242\234\350\211\262", nullptr));
        pushButton_6->setText(QCoreApplication::translate("linechart_window", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        checkBox_3->setText(QCoreApplication::translate("linechart_window", "\346\240\207\347\255\276\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("linechart_window", "GridLine", nullptr));
        checkBox_4->setText(QCoreApplication::translate("linechart_window", "GridLineVisible", nullptr));
        pushButton_7->setText(QCoreApplication::translate("linechart_window", "GridLineForColor", nullptr));
        pushButton_8->setText(QCoreApplication::translate("linechart_window", "GridLineForPen", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("linechart_window", "Axis and Ticks", nullptr));
        label_10->setText(QCoreApplication::translate("linechart_window", "Tick\344\270\252\346\225\260", nullptr));
        checkBox_5->setText(QCoreApplication::translate("linechart_window", "LineVisible", nullptr));
        pushButton_9->setText(QCoreApplication::translate("linechart_window", "LinePen", nullptr));
        pushButton_10->setText(QCoreApplication::translate("linechart_window", "LienPenColor", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("linechart_window", "MinorTick", nullptr));
        label_11->setText(QCoreApplication::translate("linechart_window", "MinorTick\344\270\252\346\225\260", nullptr));
        checkBox_6->setText(QCoreApplication::translate("linechart_window", "MinorTickVisible", nullptr));
        pushButton_11->setText(QCoreApplication::translate("linechart_window", "MinorTickColor", nullptr));
        pushButton_12->setText(QCoreApplication::translate("linechart_window", "MinorTickPen", nullptr));
        toolBox->setItemText(toolBox->indexOf(pageSetAxis), QCoreApplication::translate("linechart_window", "\345\235\220\346\240\207\350\275\264\350\256\276\347\275\256", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("linechart_window", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linechart_window: public Ui_linechart_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINECHART_WINDOW_H
