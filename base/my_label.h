//
// Created by 10580.
//

#ifndef QT_TEST_MY_LABEL_H
#define QT_TEST_MY_LABEL_H
#include <QLabel>

class my_label : public QLabel
{
    Q_OBJECT
public:
    my_label(QWidget *parent);

protected:
    void enterEvent(QEvent *event) override;

public:

    void leaveEvent(QEvent *event) override;

    void mousePressEvent(QMouseEvent *ev) override;

    void mouseMoveEvent(QMouseEvent *ev) override;

    void mouseReleaseEvent(QMouseEvent *ev) override;

protected:
    bool event(QEvent *e) override;


};


#endif //QT_TEST_MY_LABEL_H
