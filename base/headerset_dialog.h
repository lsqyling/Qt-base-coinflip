//
// Created by 10580.
//

#ifndef QT_BASE_HEADERSET_DIALOG_H
#define QT_BASE_HEADERSET_DIALOG_H

#include <QDialog>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class headerset_dialog; }
QT_END_NAMESPACE

class headerset_dialog : public QDialog
{
Q_OBJECT
friend class custom_dialog_box_window;
public:
    explicit headerset_dialog(QWidget *parent = nullptr);

    ~headerset_dialog() override;

    QStringList str_list() const;
    void set_str_list(const QStringList &list);



private:

    QStringListModel *model_{nullptr};


    Ui::headerset_dialog *ui;
};


#endif //QT_BASE_HEADERSET_DIALOG_H
