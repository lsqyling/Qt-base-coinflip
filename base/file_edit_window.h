//
// Created by 10580.
//

#ifndef QT_BASE_FILE_EDIT_WINDOW_H
#define QT_BASE_FILE_EDIT_WINDOW_H

#include <QtWidgets/QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include "QSpinBox"
#include "QFontComboBox"

QT_BEGIN_NAMESPACE
namespace Ui { class file_edit_window; }
QT_END_NAMESPACE

class file_edit_window : public QMainWindow
{
Q_OBJECT

public:
    explicit file_edit_window(QWidget *parent = nullptr);

    ~file_edit_window() override;

    void on_textEdit_copyAvailable(bool b);

private:
    void init_ui();
    void on_font_fmt();
    void on_spin_box_combo_box();


    QLabel *label_file_;
    QProgressBar *progress_bar_;
    QFontComboBox *font_combo_box_;
    QSpinBox *spin_box_;

    Ui::file_edit_window *ui;
};


#endif //QT_BASE_FILE_EDIT_WINDOW_H
