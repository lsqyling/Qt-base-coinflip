# list compile files
file(GLOB src_list RELATIVE ${CMAKE_CURRENT_LIST_DIR} *.cpp)


add_executable(CoinFlip ${src_list})



target_include_directories(CoinFlip
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(CoinFlip
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Multimedia
        fmt::fmt-header-only
)

