//
// Created by 10580.
//

#ifndef QT_BASE_PEN_DIALOG_H
#define QT_BASE_PEN_DIALOG_H
#include <QPen>
#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class pen_dialog; }
QT_END_NAMESPACE

class pen_dialog : public QDialog
{
Q_OBJECT

public:
    explicit pen_dialog(QWidget *parent = nullptr);

    ~pen_dialog() override;

    QPen getpen();
    void setpen(QPen pen);

    static QPen get_pen(QPen init, bool &ok);

private:
    void on_button_color();



    QPen pen_;

    Ui::pen_dialog *ui;
};


#endif //QT_BASE_PEN_DIALOG_H
