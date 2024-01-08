/********************************************************************************
** Form generated from reading UI file 'numinput_show_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMINPUT_SHOW_WINDOW_H
#define UI_NUMINPUT_SHOW_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_numinput_show_window
{
public:
    QGridLayout *gridLayout_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButtonClose;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSliderV;
    QScrollBar *verticalScrollBarV;
    QProgressBar *progressBarV;
    QSpacerItem *horizontalSpacer_4;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QSplitter *splitter;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderGreen;
    QSlider *horizontalSliderBlue;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *horizontalSliderRed;
    QSlider *horizontalSliderAlpha;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QProgressBar *progressBarH;
    QSlider *horizontalSliderH;
    QScrollBar *horizontalScrollBarH;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QRadioButton *radioButtonDec;
    QRadioButton *radioButtonOct;
    QRadioButton *radioButtonBit;
    QRadioButton *radioButtonHex;
    QDial *dialDisplay;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *numinput_show_window)
    {
        if (numinput_show_window->objectName().isEmpty())
            numinput_show_window->setObjectName(QString::fromUtf8("numinput_show_window"));
        numinput_show_window->resize(932, 749);
        gridLayout_6 = new QGridLayout(numinput_show_window);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalSpacer = new QSpacerItem(17, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(17, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 3, 2, 1, 1);

        pushButtonClose = new QPushButton(numinput_show_window);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../images/icon/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonClose->setIcon(icon);

        gridLayout_6->addWidget(pushButtonClose, 2, 2, 1, 1);

        groupBox_3 = new QGroupBox(numinput_show_window);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSliderV = new QSlider(groupBox_3);
        verticalSliderV->setObjectName(QString::fromUtf8("verticalSliderV"));
        verticalSliderV->setMaximum(100);
        verticalSliderV->setValue(15);
        verticalSliderV->setOrientation(Qt::Vertical);
        verticalSliderV->setTickPosition(QSlider::TicksBelow);

        horizontalLayout->addWidget(verticalSliderV);

        verticalScrollBarV = new QScrollBar(groupBox_3);
        verticalScrollBarV->setObjectName(QString::fromUtf8("verticalScrollBarV"));
        verticalScrollBarV->setMaximum(100);
        verticalScrollBarV->setValue(15);
        verticalScrollBarV->setOrientation(Qt::Vertical);
        verticalScrollBarV->setInvertedAppearance(true);
        verticalScrollBarV->setInvertedControls(false);

        horizontalLayout->addWidget(verticalScrollBarV);

        progressBarV = new QProgressBar(groupBox_3);
        progressBarV->setObjectName(QString::fromUtf8("progressBarV"));
        progressBarV->setValue(15);
        progressBarV->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(progressBarV);


        gridLayout_6->addWidget(groupBox_3, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 2, 3, 1, 1);

        splitter_2 = new QSplitter(numinput_show_window);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSliderGreen = new QSlider(widget);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setMaximum(255);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 1, 1, 1, 1);

        horizontalSliderBlue = new QSlider(widget);
        horizontalSliderBlue->setObjectName(QString::fromUtf8("horizontalSliderBlue"));
        horizontalSliderBlue->setMaximum(255);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalSliderRed = new QSlider(widget);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setCursor(QCursor(Qt::ArrowCursor));
        horizontalSliderRed->setMaximum(255);
        horizontalSliderRed->setValue(0);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 0, 1, 1, 1);

        horizontalSliderAlpha = new QSlider(widget);
        horizontalSliderAlpha->setObjectName(QString::fromUtf8("horizontalSliderAlpha"));
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlpha, 3, 1, 1, 1);

        splitter->addWidget(widget);
        textEdit = new QTextEdit(splitter);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QPalette palette;
        QBrush brush(QColor(89, 255, 95, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textEdit->setPalette(palette);
        splitter->addWidget(textEdit);

        gridLayout_5->addWidget(splitter, 0, 0, 1, 1);

        splitter_2->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        progressBarH = new QProgressBar(groupBox_2);
        progressBarH->setObjectName(QString::fromUtf8("progressBarH"));
        progressBarH->setValue(15);

        gridLayout_3->addWidget(progressBarH, 3, 0, 1, 1);

        horizontalSliderH = new QSlider(groupBox_2);
        horizontalSliderH->setObjectName(QString::fromUtf8("horizontalSliderH"));
        horizontalSliderH->setMaximum(100);
        horizontalSliderH->setValue(15);
        horizontalSliderH->setOrientation(Qt::Horizontal);
        horizontalSliderH->setTickPosition(QSlider::TicksAbove);

        gridLayout_3->addWidget(horizontalSliderH, 0, 0, 1, 1);

        horizontalScrollBarH = new QScrollBar(groupBox_2);
        horizontalScrollBarH->setObjectName(QString::fromUtf8("horizontalScrollBarH"));
        horizontalScrollBarH->setMaximum(100);
        horizontalScrollBarH->setValue(15);
        horizontalScrollBarH->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalScrollBarH, 1, 0, 1, 1);

        splitter_2->addWidget(groupBox_2);

        gridLayout_6->addWidget(splitter_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(numinput_show_window);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(120, 0));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        radioButtonDec = new QRadioButton(groupBox_5);
        radioButtonDec->setObjectName(QString::fromUtf8("radioButtonDec"));
        radioButtonDec->setChecked(true);

        gridLayout_4->addWidget(radioButtonDec, 0, 0, 1, 1);

        radioButtonOct = new QRadioButton(groupBox_5);
        radioButtonOct->setObjectName(QString::fromUtf8("radioButtonOct"));

        gridLayout_4->addWidget(radioButtonOct, 1, 0, 1, 1);

        radioButtonBit = new QRadioButton(groupBox_5);
        radioButtonBit->setObjectName(QString::fromUtf8("radioButtonBit"));

        gridLayout_4->addWidget(radioButtonBit, 2, 0, 1, 1);

        radioButtonHex = new QRadioButton(groupBox_5);
        radioButtonHex->setObjectName(QString::fromUtf8("radioButtonHex"));

        gridLayout_4->addWidget(radioButtonHex, 3, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_5, 0, 2, 1, 1);

        dialDisplay = new QDial(groupBox_4);
        dialDisplay->setObjectName(QString::fromUtf8("dialDisplay"));
        dialDisplay->setMaximum(100);
        dialDisplay->setWrapping(false);
        dialDisplay->setNotchesVisible(true);

        gridLayout_2->addWidget(dialDisplay, 0, 0, 1, 1);

        lcdNumber = new QLCDNumber(groupBox_4);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(80, 0));
        lcdNumber->setBaseSize(QSize(20, 20));
        QFont font;
        font.setPointSize(22);
        lcdNumber->setFont(font);
        lcdNumber->setDigitCount(3);

        gridLayout_2->addWidget(lcdNumber, 0, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 1, 0, 3, 1);

        horizontalSpacer = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 2, 1, 1, 1);


        retranslateUi(numinput_show_window);
        QObject::connect(pushButtonClose, SIGNAL(clicked()), numinput_show_window, SLOT(close()));

        QMetaObject::connectSlotsByName(numinput_show_window);
    } // setupUi

    void retranslateUi(QWidget *numinput_show_window)
    {
        numinput_show_window->setWindowTitle(QCoreApplication::translate("numinput_show_window", "numinput_show_window", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("numinput_show_window", "\345\205\263\351\227\255", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("numinput_show_window", "\345\236\202\347\233\264", nullptr));
        groupBox->setTitle(QCoreApplication::translate("numinput_show_window", "Slider\345\222\214QColor", nullptr));
        label->setText(QCoreApplication::translate("numinput_show_window", "Red", nullptr));
        label_2->setText(QCoreApplication::translate("numinput_show_window", "Green", nullptr));
        label_3->setText(QCoreApplication::translate("numinput_show_window", "Blue", nullptr));
        label_4->setText(QCoreApplication::translate("numinput_show_window", "Alpha", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("numinput_show_window", "\346\260\264\345\271\263", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("numinput_show_window", "Dial\345\222\214LCDNumber", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("numinput_show_window", "LCD\346\230\276\347\244\272\350\277\233\345\210\266", nullptr));
        radioButtonDec->setText(QCoreApplication::translate("numinput_show_window", "\345\215\201\350\277\233\345\210\266", nullptr));
        radioButtonOct->setText(QCoreApplication::translate("numinput_show_window", "\345\205\253\350\277\233\345\210\266", nullptr));
        radioButtonBit->setText(QCoreApplication::translate("numinput_show_window", "\344\272\214\350\277\233\345\210\266", nullptr));
        radioButtonHex->setText(QCoreApplication::translate("numinput_show_window", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class numinput_show_window: public Ui_numinput_show_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMINPUT_SHOW_WINDOW_H
