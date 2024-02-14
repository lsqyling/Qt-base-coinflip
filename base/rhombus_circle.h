//
// Created by 10580.
//

#ifndef QT_BASE_RHOMBUS_CIRCLE_H
#define QT_BASE_RHOMBUS_CIRCLE_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class rhombus_circle; }
QT_END_NAMESPACE

class rhombus_circle : public QWidget
{
Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) override;

public:
    explicit rhombus_circle(QWidget *parent = nullptr);

    ~rhombus_circle() override;

private:
    Ui::rhombus_circle *ui;
};


#endif //QT_BASE_RHOMBUS_CIRCLE_H
