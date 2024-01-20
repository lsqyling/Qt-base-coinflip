//
// Created by 10580.
//

#ifndef QT_BASE_DOC_FORM_H
#define QT_BASE_DOC_FORM_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class doc_form; }
QT_END_NAMESPACE

class doc_form : public QWidget
{
Q_OBJECT

public:
    explicit doc_form(QWidget *parent = nullptr);

    ~doc_form() override;

private:
    Ui::doc_form *ui;
};


#endif //QT_BASE_DOC_FORM_H
