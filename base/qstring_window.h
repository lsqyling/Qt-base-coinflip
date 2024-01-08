//
// Created by 10580.
//

#ifndef QT_BASE_QSTRING_WINDOW_H
#define QT_BASE_QSTRING_WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class qstring_window; }
QT_END_NAMESPACE

class qstring_window : public QWidget
{
Q_OBJECT

public:
    explicit qstring_window(QWidget *parent = nullptr);

    ~qstring_window() override;


private slots:
    void on_pushButtonCalc_clicked();
    void on_pushButtonBit_clicked();
    void on_pushButtonOct_clicked();
    void on_pushButtonHex_clicked();



private:
    Ui::qstring_window *ui;
};


#endif //QT_BASE_QSTRING_WINDOW_H
