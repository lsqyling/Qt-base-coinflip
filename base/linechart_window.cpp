//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_linechart_window.h" resolved
#include <QColorDialog>
#include <QFontDialog>
#include <random>
#include "linechart_window.h"
#include "ui_linechart_window.h"
#include "pen_dialog.h"


linechart_window::linechart_window(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::linechart_window)
{
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(0);
    create_chart();
    prepare_data();
    update_from_chart();
    on_actions();
    on_chart_actions();
    on_series_actions();
    on_axis_actions();
}

linechart_window::~linechart_window()
{
    delete ui;
}

void linechart_window::on_actions()
{
    connect(ui->actionZoomIn, &QAction::triggered,
            [=, this] {
        ui->chartView->chart()->zoom(1.2);
    });
    connect(ui->actionZoomOut, &QAction::triggered,
            [=, this] {
        ui->chartView->chart()->zoom(0.8);
    });
    connect(ui->actionResize, &QAction::triggered,
            [=, this] {
        ui->chartView->chart()->zoomReset();
    });
    connect(ui->actionDrawRefresh, &QAction::triggered,
            [=, this] {
        prepare_data();
    });
}

void linechart_window::create_chart()
{
    auto chart = new QChart;
    chart->setTitle("简单曲线图");
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::RenderHint::Antialiasing);

    auto sin = new QLineSeries;
    auto cos = new QLineSeries;
    sin->setName("sin曲线");
    cos->setName("cos曲线");

    cur_series_ = sin;
    QPen pen;
    pen.setStyle(Qt::PenStyle::SolidLine);
    pen.setWidth(2);
    pen.setColor(Qt::red);
    sin->setPen(pen);
    pen.setStyle(Qt::PenStyle::DotLine);
    pen.setColor(Qt::blue);

    cos->setPen(pen);

    chart->addSeries(sin);
    chart->addSeries(cos);

    auto x = new QValueAxis;
    auto y = new QValueAxis;
    x->setRange(0, 10);
    x->setLabelFormat("%.1f");
    x->setTickCount(11);
    x->setMinorTickCount(4);
    x->setTitleText("time(secs)");
    cur_axis_ = x;

    y->setRange(-1.5, 1.5);
    y->setLabelFormat("%.1f");
    y->setTickCount(3);
    y->setMinorTickCount(4);
    y->setTitleText("value");

    chart->addAxis(x, Qt::AlignBottom);
    chart->addAxis(y, Qt::AlignLeft);

    sin->attachAxis(x);
    sin->attachAxis(y);
    cos->attachAxis(x);
    cos->attachAxis(y);
}

namespace random {
int rand()
{
    static std::random_device seed;
    static std::mt19937 e(seed());
    static std::uniform_int_distribution<int> d(-5, 5);
    return d(e);
}
}

void linechart_window::prepare_data()
{
    auto sin = dynamic_cast<QLineSeries *>(ui->chartView->chart()->series().at(0));
    auto cos = dynamic_cast<QLineSeries *>(ui->chartView->chart()->series().at(1));
    sin->clear();
    cos->clear();

    double y0, y1, t = 0, intv = 0.1;
    for (int i = 0; i < 100; ++i)
    {
        y0 = std::sin(t) + 1.0 * random::rand() / 50;
        y1 = std::cos(t) + 1.0 * random::rand() / 50;
        sin->append(t, y0);
        cos->append(t, y1);
        t += intv;
    }
}

void linechart_window::update_from_chart()
{
    auto chart = ui->chartView->chart();
    auto mg = chart->margins();
    ui->spinBoxBottom->setValue(mg.bottom());
    ui->spinBoxTop->setValue(mg.top());
    ui->spinBoxLeft->setValue(mg.left());
    ui->spinBoxRight->setValue(mg.right());
}

void linechart_window::on_chart_actions()
{
//    图例
    ui->radioButtonTop->setChecked(true);
    connect(ui->radioButtonTop, &QRadioButton::clicked,
            [=, this] {
        ui->chartView->chart()->legend()->setAlignment(Qt::AlignmentFlag::AlignTop);
    });

    connect(ui->radioButtonBottom, &QRadioButton::clicked,
            [=, this] {
        ui->chartView->chart()->legend()->setAlignment(Qt::AlignmentFlag::AlignBottom);
    });
    ui->checkBoxLegendVisible->setChecked(true);
    connect(ui->checkBoxLegendVisible, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
        ui->chartView->chart()->legend()->setVisible(checked);
    });

    connect(ui->checkBoxBackgroundVisible, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
        ui->chartView->chart()->legend()->setBackgroundVisible(checked);
    });

    connect(ui->pushButtonLegendColor, &QPushButton::clicked,
            [=, this] {
        auto color = ui->chartView->chart()->legend()->labelColor();
        color = QColorDialog::getColor(color);
        if (color.isValid())
            ui->chartView->chart()->legend()->setLabelColor(color);
    });


    connect(ui->pushButtonLegendFont, &QPushButton::clicked,
            [=, this] {
        auto font = ui->chartView->chart()->legend()->font();
        bool ok;
        font = QFontDialog::getFont(&ok, font);
        if (ok)
            ui->chartView->chart()->legend()->setFont(font);
    });
//    边距
    connect(ui->pushButtonMarginSet, &QPushButton::clicked,
            [=, this] {
        QMargins mgs;
        mgs.setBottom(ui->spinBoxBottom->value());
        mgs.setTop(ui->spinBoxTop->value());
        mgs.setLeft(ui->spinBoxLeft->value());
        mgs.setRight(ui->spinBoxRight->value());
        ui->chartView->chart()->setMargins(mgs);
    });
//    动画
    ui->comboBoxAnimation->addItem("NoAnimation", 0);
    ui->comboBoxAnimation->addItem("GridAxisAnimations", 1);
    ui->comboBoxAnimation->addItem("SeriesAnimations", 2);
    ui->comboBoxAnimation->addItem("AllAnimations", 3);
    connect(ui->comboBoxAnimation, qOverload<int>(&QComboBox::currentIndexChanged),
            [=, this](int index) {
        ui->chartView->chart()->setAnimationOptions(QChart::AnimationOption(index));
    });
    ui->comboBoxTopic->addItem("ChartThemeLight", 0);
    ui->comboBoxTopic->addItem("ChartThemeBlueCerulean", 1);
    ui->comboBoxTopic->addItem("ChartThemeDark", 2);
    ui->comboBoxTopic->addItem("ChartThemeBrownSand", 3);
    ui->comboBoxTopic->addItem("ChartThemeBlueNcs", 4);
    ui->comboBoxTopic->addItem("ChartThemeHighContrast", 5);
    ui->comboBoxTopic->addItem("ChartThemeBlueIcy", 6);
    ui->comboBoxTopic->addItem("ChartThemeQt", 7);
    connect(ui->comboBoxTopic, qOverload<int>(&QComboBox::currentIndexChanged),
            [=, this](int index) {
        ui->chartView->chart()->setTheme(QChart::ChartTheme(index));
    });
}

void linechart_window::on_series_actions()
{
//    曲线外观
    ui->lineEditSeqName->setText(cur_series_->name());
    ui->checkBoxSeqVisible->setChecked(true);
    ui->horizontalSliderTransparency->setValue(cur_series_->opacity() * 10);
    connect(ui->pushButtonSeqName, &QPushButton::clicked,
            [=, this] {
        cur_series_->setName(ui->lineEditSeqName->text());
    });

    connect(ui->checkBoxSeqVisible, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
        cur_series_->setVisible(checked);
    });

    connect(ui->checkBoxDataPointVisible, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
        cur_series_->setPointsVisible(checked);
    });

    connect(ui->pushButtonCurveColor, &QPushButton::clicked,
            [=, this] {
        auto color = cur_series_->color();
        color = QColorDialog::getColor(color);
        if (color.isValid())
            cur_series_->setColor(color);
    });

    connect(ui->pushButtonCurvePen, &QPushButton::clicked,
            [=, this] {
        bool ok;
        auto pen = cur_series_->pen();
        pen = pen_dialog::get_pen(pen, ok);
        if (ok)
            cur_series_->setPen(pen);
    });

    connect(ui->horizontalSliderTransparency, qOverload<int>(&QSlider::valueChanged),
            [=, this](int value) {
        cur_series_->setOpacity(value/10.0);
    });
//    数据点标签
    connect(ui->checkBoxLabelDataPointVisible, qOverload<bool>(&QCheckBox::clicked),
            [=, this](bool checked) {
        cur_series_->setPointLabelsVisible(checked);
    });

    connect(ui->pushButtonLabelColor, &QPushButton::clicked,
            [=, this] {
        auto color = cur_series_->pointLabelsColor();
        color = QColorDialog::getColor(color);
        if (color.isValid())
            cur_series_->setPointLabelsColor(color);
    });
    connect(ui->pushButtonLabelFont, &QPushButton::clicked,
            [=, this] {
        auto font = cur_series_->pointLabelsFont();
        bool ok;
        font = QFontDialog::getFont(&ok, font);
        if (ok)
            cur_series_->setPointLabelsFont(font);
    });
//    标签格式
    connect(ui->radioButtonYPoint, qOverload<bool>(&QRadioButton::clicked),
            [=, this](bool checked) {
        cur_series_->setPointLabelsFormat("@yPoint");
    });
    connect(ui->radioButtonXYPoint, qOverload<bool>(&QRadioButton::clicked),
            [=, this](bool checked) {
        cur_series_->setPointLabelsFormat("(@xPoint,@yPoint)");
    });
}

void linechart_window::on_axis_actions()
{

}
