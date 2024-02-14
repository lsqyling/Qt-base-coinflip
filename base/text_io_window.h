//
// Created by 10580.
//

#ifndef QT_BASE_TEXT_IO_WINDOW_H
#define QT_BASE_TEXT_IO_WINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class text_io_window; }
QT_END_NAMESPACE

class text_io_window : public QMainWindow
{
Q_OBJECT

public:
    explicit text_io_window(QWidget *parent = nullptr);

    ~text_io_window() override;

private:
    void on_actions_triggered();



    Ui::text_io_window *ui;
};


#endif //QT_BASE_TEXT_IO_WINDOW_H
