#include <QApplication>
#include <QTextCodec>
#include "qt5ui_widget.h"
#include "qt5_main_window.h"
#include "qt5_ui_main_window.h"
#include "login_window.h"
#include "common_ctrl_button.h"
#include "main_widget.h"
#include "paint_widget.h"
#include "file_widget.h"
#include "dialog_window.h"
#include "file_edit_window.h"
#include "class_info_window.h"
#include "qstring_window.h"
#include "spinbox_window.h"
#include "numinput_show_window.h"
#include "datetime_timer_window.h"
#include "combo_box_window.h"
#include "listwidget_window.h"
#include "tree_dock_widget_window.h"
#include "table_widget_window.h"
#include "filesys_model_window.h"
#include "stringlist_model_window.h"
#include "standard_model_window.h"
#include "standard_dialog_window.h"
#include "custom_dialog_box_window.h"
#include "multi_window.h"
#include "mdi_app_window.h"
#include "splash_login_dialog.h"
#include "fmt/core.h"
#include "text_io_window.h"
#include "bin_io_window.h"
#include "painter_window.h"
#include "five_pointed_star.h"
#include "rhombus_circle.h"
#include "graph_view_window.h"
#include "paint_app_window.h"
#include "sincos_charts_window.h"
#include "linechart_window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

//    qt5ui_widget widget;
//    widget.show();

//    qt5_main_window mw;
//    mw.show();

//    qt5_ui_main_window mw;
//    mw.show();


//    login_window lw;
//    lw.show();

//    common_ctrl_button ccb;
//    ccb.show();

//    main_widget mw;
//    mw.show();

//    paint_widget pw;
//    pw.show();

//    file_widget fw;
//    fw.show();
//    dialog_window dw;
//    dw.show();

//    file_edit_window few;
//    few.show();

//    class_info_window ciw;
//    ciw.show();

//    qstring_window qsw;
//    qsw.show();

//    spinbox_window sbw;
//    sbw.show();

//    numinput_show_window nsw;
//    nsw.show();

//    datetime_timer_window dtw;
//    dtw.show();
//    combo_box_window cbw;
//    cbw.show();
//    listwidget_window lww;
//    lww.show();

//    tree_dock_widget_window tdww;
//    tdww.show();

//    table_widget_window tww;
//    tww.show();

//    filesys_model_window fmw;
//    fmw.show();
//    stringlist_model_window smw;
//    smw.show();
//    standard_model_window smw;
//    smw.show();
//    standard_dialog_window sdw;
//    sdw.show();
//    custom_dialog_box_window cdbw;
//    cdbw.show();
//    multi_window mw;
//    mw.show();
//    mdi_app_window maw;
//    maw.show();
//    return splash_login_dialog::entry();

//    text_io_window tiw;
//    tiw.show();
//    bin_io_window biw;
//    biw.show();
//    painter_window pw;
//    pw.show();

//    five_pointed_star fps;
//    fps.show();
//    rhombus_circle rc;
//    rc.show();
//    graph_view_window gvw;
//    gvw.show();
//    paint_app_window paw;
//    paw.show();
//    sincos_charts_window scw;
//    scw.show();
    linechart_window lcw;
    lcw.show();
    return QApplication::exec();
}
