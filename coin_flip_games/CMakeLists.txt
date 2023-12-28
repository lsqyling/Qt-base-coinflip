# list compile files
file(GLOB src_list RELATIVE ${CMAKE_CURRENT_LIST_DIR} *.cpp)


add_executable(coinflip ${src_list}
        main_scene.cpp
        main_scene.h
        main_scene.ui
        img_push_button.cpp
        img_push_button.h
        choose_level_scene.cpp
        choose_level_scene.h
        choose_level_scene.ui
        play_scene.cpp
        play_scene.h
        play_scene.ui
        coin_push_button.cpp
        coin_push_button.h)

target_include_directories(coinflip
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(coinflip
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Multimedia
        fmt::fmt-header-only
)

