#include <QApplication>
#include "qt5ui_widget.h"
#include "qt5_main_window.h"
#include "qt5_ui_main_window.h"
#include "login_window.h"
#include "common_ctrl_button.h"
#include "main_widget.h"
#include "paint_widget.h"
#include "file_widget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

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

    file_widget fw;
    fw.show();


    return QApplication::exec();
}
