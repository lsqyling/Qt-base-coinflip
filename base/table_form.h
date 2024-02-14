//
// Created by 10580.
//

#ifndef QT_BASE_TABLE_FORM_H
#define QT_BASE_TABLE_FORM_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class table_form; }
QT_END_NAMESPACE

class table_form : public QMainWindow
{
Q_OBJECT

public:
    explicit table_form(QWidget *parent = nullptr);

    ~table_form() override;

private:
    Ui::table_form *ui;
};


#endif //QT_BASE_TABLE_FORM_H
