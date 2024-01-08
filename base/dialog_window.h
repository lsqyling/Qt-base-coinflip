//
// Created by 10580.
//

#ifndef QT_BASE_DIALOG_WINDOW_H
#define QT_BASE_DIALOG_WINDOW_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class dialog_window; }
QT_END_NAMESPACE

class dialog_window : public QDialog
{
Q_OBJECT

public:
    explicit dialog_window(QWidget *parent = nullptr);

    ~dialog_window() override;


    void on_radio_button_selected();



private:
    void set_check_box_clicked();

    Ui::dialog_window *ui;
};


#endif //QT_BASE_DIALOG_WINDOW_H
