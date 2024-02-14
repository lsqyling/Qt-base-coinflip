//
// Created by 10580.
//

#ifndef QT_BASE_BIN_IO_WINDOW_H
#define QT_BASE_BIN_IO_WINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>

QT_BEGIN_NAMESPACE
namespace Ui { class bin_io_window; }
QT_END_NAMESPACE

class bin_io_window : public QMainWindow
{
Q_OBJECT

public:
    explicit bin_io_window(QWidget *parent = nullptr);

    ~bin_io_window() override;

private:
    void on_actions_triggered();


    QStandardItemModel *model_{nullptr};
    QItemSelectionModel *selection_{nullptr};

    Ui::bin_io_window *ui;

    void reset_table(int rows);
};


#endif //QT_BASE_BIN_IO_WINDOW_H
