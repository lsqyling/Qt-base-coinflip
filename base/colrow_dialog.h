//
// Created by 10580.
//

#ifndef QT_BASE_COLROW_DIALOG_H
#define QT_BASE_COLROW_DIALOG_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class colrow_dialog; }
QT_END_NAMESPACE

class colrow_dialog : public QDialog
{
Q_OBJECT

public:

    explicit colrow_dialog(QWidget *parent = nullptr);
    ~colrow_dialog() override;

    int col_count() const;
    int row_count() const;
    void set_col_row_num(int col, int row);



private:
    Ui::colrow_dialog *ui;
};


#endif //QT_BASE_COLROW_DIALOG_H
