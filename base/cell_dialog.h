//
// Created by 10580.
//

#ifndef QT_BASE_CELL_DIALOG_H
#define QT_BASE_CELL_DIALOG_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class cell_dialog; }
QT_END_NAMESPACE

class cell_dialog : public QDialog
{
Q_OBJECT
friend class custom_dialog_box_window;
protected:
    void closeEvent(QCloseEvent *event) override;

public:
    explicit cell_dialog(QWidget *parent = nullptr);

    ~cell_dialog() override;

private:
    void on_button_clicked();




    Ui::cell_dialog *ui;
};


#endif //QT_BASE_CELL_DIALOG_H
