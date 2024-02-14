//
// Created by 10580.
//

#ifndef QT_BASE_FIVE_POINTED_STAR_H
#define QT_BASE_FIVE_POINTED_STAR_H

#include <QWidget>
#include <numbers>

QT_BEGIN_NAMESPACE
namespace Ui { class five_pointed_star; }
QT_END_NAMESPACE

class five_pointed_star : public QWidget
{
Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) override;

public:
    static constexpr int r = 100;
    static constexpr double pi = std::numbers::pi;

    explicit five_pointed_star(QWidget *parent = nullptr);

    ~five_pointed_star() override;

private:
    Ui::five_pointed_star *ui;
};


#endif //QT_BASE_FIVE_POINTED_STAR_H
