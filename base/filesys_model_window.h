//
// Created by 10580.
//

#ifndef QT_BASE_FILESYS_MODEL_WINDOW_H
#define QT_BASE_FILESYS_MODEL_WINDOW_H

#include <QWidget>
#include <QFileSystemModel>


QT_BEGIN_NAMESPACE
namespace Ui { class filesys_model_window; }
QT_END_NAMESPACE

class filesys_model_window : public QWidget
{
Q_OBJECT

public:
    explicit filesys_model_window(QWidget *parent = nullptr);

    ~filesys_model_window() override;

private:
    void on_tree_view_clicked();

    QFileSystemModel *file_model_{nullptr};

    Ui::filesys_model_window *ui;
};


#endif //QT_BASE_FILESYS_MODEL_WINDOW_H
