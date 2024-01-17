//
// Created by 10580.
//

#ifndef QT_BASE_TABLE_WIDGET_WINDOW_H
#define QT_BASE_TABLE_WIDGET_WINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class table_widget_window; }
QT_END_NAMESPACE

class table_widget_window : public QWidget
{
Q_OBJECT

public:
    explicit table_widget_window(QWidget *parent = nullptr);

    ~table_widget_window() override;
    enum class cell_type { Name = 1000, Sex, Birth, Nation, IsParty, Score };
    enum class field_col_num { Name = 0, Sex, Birth, Nation, Score, IsParty};
    constexpr int cell_type_to_int(cell_type value) const
    {
        return static_cast<int>(value);
    }

    constexpr int field_col_num_to_int(field_col_num value) const
    {
        return static_cast<int>(value);
    }


private:
    void on_push_button_clicked();
    void on_check_box_checked();
    void on_radio_button_clicked();

    void create_items_a_row(int row_num, QString name, QString sex, QDate birth,
                            QString nationality, bool is_party, int score);

    Ui::table_widget_window *ui;
};


#endif //QT_BASE_TABLE_WIDGET_WINDOW_H
