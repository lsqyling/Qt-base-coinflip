# list compile files
file(GLOB src_list RELATIVE ${CMAKE_CURRENT_LIST_DIR} *.qrc *.cpp)


add_executable(base_test ${src_list}
        sincos_charts_window.cpp
        sincos_charts_window.h
        sincos_charts_window.ui
        linechart_window.cpp
        linechart_window.h
        linechart_window.ui
        pen_dialog.cpp
        pen_dialog.h
        pen_dialog.ui)

target_include_directories(base_test PUBLIC ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(base_test
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Charts
        fmt::fmt-header-only
)


