//
// Created by 10580.
//

#ifndef QT_BASE_STANDARD_DIALOG_WINDOW_H
#define QT_BASE_STANDARD_DIALOG_WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class standard_dialog_window; }
QT_END_NAMESPACE

class standard_dialog_window : public QWidget
{
Q_OBJECT

public:
    explicit standard_dialog_window(QWidget *parent = nullptr);

    ~standard_dialog_window() override;

private:
    void on_standard_dialog_clicked();
    void on_input_dialog_clicked();
    void on_message_dialog_clicked();





    Ui::standard_dialog_window *ui;
};


#endif //QT_BASE_STANDARD_DIALOG_WINDOW_H
