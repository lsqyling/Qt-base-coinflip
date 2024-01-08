# list compile files
file(GLOB src_list RELATIVE ${CMAKE_CURRENT_LIST_DIR} *.cpp)


add_executable(base_test ${src_list}
        datetime_timer_window.cpp
        datetime_timer_window.h
        datetime_timer_window.ui)

target_include_directories(base_test PUBLIC ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(base_test
        Qt::Core
        Qt::Gui
        Qt::Widgets
        fmt::fmt-header-only
)


