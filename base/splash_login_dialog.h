//
// Created by 10580.
//

#ifndef QT_BASE_SPLASH_LOGIN_DIALOG_H
#define QT_BASE_SPLASH_LOGIN_DIALOG_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class splash_login_dialog; }
QT_END_NAMESPACE

class splash_login_dialog : public QDialog
{
Q_OBJECT

public:
    explicit splash_login_dialog(QWidget *parent = nullptr);

    ~splash_login_dialog() override;

    static int entry();


protected:
    void mousePressEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

private:
    void on_push_button_clicked();

    QString user_;
    QString password_;
    int try_count_{0};
    bool is_moving_{false};
    QPoint last_pos_;

    Ui::splash_login_dialog *ui;

    void write_settings();

    void read_settings();

    QString encrypt(const QString &str);
};


#endif //QT_BASE_SPLASH_LOGIN_DIALOG_H
