//
// Created by 10580.
//

// You may need to build the project (run Qt uic code generator) to get "ui_splash_login_dialog.h" resolved
#include <QMouseEvent>
#include <QSettings>
#include <QCryptographicHash>
#include <QMessageBox>
#include "splash_login_dialog.h"
#include "ui_splash_login_dialog.h"
#include "mdi_app_window.h"
#include "fmt/core.h"


splash_login_dialog::splash_login_dialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::splash_login_dialog)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlags(Qt::SplashScreen);
    read_settings();
    on_push_button_clicked();
}

splash_login_dialog::~splash_login_dialog()
{
    delete ui;
}

void splash_login_dialog::on_push_button_clicked()
{
    connect(ui->pushButtonOK, &QPushButton::clicked,
            [=, this] {
        QString user = ui->lineEditUserName->text().trimmed();
        QString password = ui->lineEditPassword->text().trimmed();
        if (user == user_ && encrypt(password) == password_)
        {
            write_settings();
            accept();
        }
        else
        {
            ++try_count_;
            if (try_count_ > 3)
            {
                QMessageBox::critical(this, "Error", "错误次数太多，强行退出！");
                reject();
            }
            else
            {
                QMessageBox::warning(this, "Warning", "用户名或密码输入错误");
            }
        }
    });
}

int splash_login_dialog::entry()
{
    splash_login_dialog *dialog = new splash_login_dialog;
    if (dialog->exec() == QDialog::Accepted)
    {
        mdi_app_window maw;
        maw.show();
        return QApplication::exec();
    }
    return -1;
}

void splash_login_dialog::write_settings()
{
    QSettings settings("AXB-QT", "qt-base");
    settings.setValue("Username", user_);
    settings.setValue("Password", password_);
    settings.setValue("Saved", ui->checkBox->isChecked());
}

void splash_login_dialog::read_settings()
{
    QSettings settings("AXB-QT", "qt-base");
    bool saved = settings.value("Saved", false).toBool();
    user_ = settings.value("Username", "user").toString();
    QString default_password = encrypt("12345");
    password_ = settings.value("Password", default_password).toString();
    if (saved)
        ui->lineEditUserName->setText(user_);
    ui->checkBox->setChecked(saved);
}

QString splash_login_dialog::encrypt(const QString &str)
{
    QByteArray str_arr(str.toUtf8());
    QCryptographicHash hashalg(QCryptographicHash::Md5);
    hashalg.addData(str_arr);
    return hashalg.result().toHex();
}

void splash_login_dialog::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        is_moving_ = true;
        last_pos_ = event->globalPos() - pos();
    }
    QDialog::mousePressEvent(event);
}

void splash_login_dialog::mouseReleaseEvent(QMouseEvent *event)
{
    is_moving_ = false;
    QDialog::mouseReleaseEvent(event);
}

void splash_login_dialog::mouseMoveEvent(QMouseEvent *event)
{
    if (is_moving_ && (event->buttons() & Qt::LeftButton))
    {
        move(event->globalPos() - last_pos_);
        last_pos_ = event->globalPos() - pos();
    }
    QDialog::mouseMoveEvent(event);
}
