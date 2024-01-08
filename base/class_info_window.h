//
// Created by 10580.
//

#ifndef QT_BASE_CLASS_INFO_WINDOW_H
#define QT_BASE_CLASS_INFO_WINDOW_H

#include <QWidget>
#include "person.h"


QT_BEGIN_NAMESPACE
namespace Ui { class class_info_window; }
QT_END_NAMESPACE

class class_info_window : public QWidget
{
Q_OBJECT

public:
    explicit class_info_window(QWidget *parent = nullptr);

    ~class_info_window() override;

private slots:
    void on_pushButtonBoy_clicked();
    void on_pushButtonGirl_clicked();
    void on_pushButtonMeta_clicked();

private:

    void on_spin_box_value_changed(int val);
    void on_age_changed(int val);
    person *girl_;
    person *boy_;
    Ui::class_info_window *ui;


};


#endif //QT_BASE_CLASS_INFO_WINDOW_H
