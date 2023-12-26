//
// Created by 10580 on 2023/12/25.
//

#ifndef QT_TEST_FILE_WIDGET_H
#define QT_TEST_FILE_WIDGET_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class file_widget; }
QT_END_NAMESPACE

class file_widget : public QWidget
{
Q_OBJECT

public:
    explicit file_widget(QWidget *parent = nullptr);

    ~file_widget() override;

private:
    Ui::file_widget *ui;
};


#endif //QT_TEST_FILE_WIDGET_H
