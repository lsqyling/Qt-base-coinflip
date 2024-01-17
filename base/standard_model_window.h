//
// Created by 10580.
//

#ifndef QT_BASE_STANDARD_MODEL_WINDOW_H
#define QT_BASE_STANDARD_MODEL_WINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "spinbox_delegate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class standard_model_window; }
QT_END_NAMESPACE

class standard_model_window : public QMainWindow
{
Q_OBJECT

public:
    static constexpr int ColNum = 6;
    explicit standard_model_window(QWidget *parent = nullptr);

    ~standard_model_window() override;

private:
    void on_status_bar_show();
    void on_action_triggered();




    void init_model_from_file(const QStringList &list);
    void action_alignment(Qt::Alignment alignment);

//    delegate
    spinbox_delegate delegate_;


//    show status bar
    QLabel *label_curr_file_{nullptr};
    QLabel *label_cell_pos_{nullptr};
    QLabel *label_cell_text_{nullptr};
//    data model
    QStandardItemModel *model_{nullptr};
    QItemSelectionModel *selection_{nullptr};

    Ui::standard_model_window *ui;
};


#endif //QT_BASE_STANDARD_MODEL_WINDOW_H
