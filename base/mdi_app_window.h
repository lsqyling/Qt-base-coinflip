//
// Created by 10580.
//

#ifndef QT_BASE_MDI_APP_WINDOW_H
#define QT_BASE_MDI_APP_WINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class mdi_app_window; }
QT_END_NAMESPACE

class mdi_app_window : public QMainWindow
{
Q_OBJECT

public:
    explicit mdi_app_window(QWidget *parent = nullptr);

    ~mdi_app_window() override;

private:
    void on_actions_triggered();
    void on_widgets();


    Ui::mdi_app_window *ui;
};


#endif //QT_BASE_MDI_APP_WINDOW_H
