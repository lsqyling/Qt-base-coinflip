//
// Created by 10580.
//

#ifndef QT_BASE_DOC_APP_FORM_H
#define QT_BASE_DOC_APP_FORM_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class doc_app_form; }
QT_END_NAMESPACE

class doc_app_form : public QWidget
{
Q_OBJECT

public:

    void loadFile(QString filename);

    QString get_curr_filename() const;

    void set_text_font();
    void text_copy();
    void text_paste();
    void text_cut();
    bool is_file_opened() const;
    explicit doc_app_form(QWidget *parent = nullptr);

    ~doc_app_form() override;

private:

    QString filename_;
    bool is_opened_{false};


    Ui::doc_app_form *ui;
};


#endif //QT_BASE_DOC_APP_FORM_H
