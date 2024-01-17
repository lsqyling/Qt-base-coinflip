//
// Created by 10580.
//

#ifndef QT_BASE_STRINGLIST_MODEL_WINDOW_H
#define QT_BASE_STRINGLIST_MODEL_WINDOW_H

#include <QWidget>
#include <QStringListModel>


QT_BEGIN_NAMESPACE
namespace Ui { class stringlist_model_window; }
QT_END_NAMESPACE

class stringlist_model_window : public QWidget
{
Q_OBJECT

public:
    explicit stringlist_model_window(QWidget *parent = nullptr);

    ~stringlist_model_window() override;

private:
    void on_left_button_clicked();
    void on_right_button_clicked();
    void on_list_view_clicked();

    QStringListModel *list_model_{nullptr};
    Ui::stringlist_model_window *ui;
};


#endif //QT_BASE_STRINGLIST_MODEL_WINDOW_H
