//
// Created by 10580.
//

#ifndef QT_BASE_CUSTOM_DIALOG_BOX_WINDOW_H
#define QT_BASE_CUSTOM_DIALOG_BOX_WINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include "headerset_dialog.h"
#include "cell_dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class custom_dialog_box_window; }
QT_END_NAMESPACE

class custom_dialog_box_window : public QMainWindow
{
Q_OBJECT
friend class cell_dialog;
public:
    explicit custom_dialog_box_window(QWidget *parent = nullptr);

    ~custom_dialog_box_window() override;

private:
    void on_action_triggered();

    QStandardItemModel *model_{nullptr};
    QItemSelectionModel *selection_{nullptr};
    headerset_dialog *headerset_dialog_{nullptr};
    cell_dialog *cell_dialog_{nullptr};


    Ui::custom_dialog_box_window *ui;
};


#endif //QT_BASE_CUSTOM_DIALOG_BOX_WINDOW_H
