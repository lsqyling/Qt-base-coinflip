# list compile files
file(GLOB src_list RELATIVE ${CMAKE_CURRENT_LIST_DIR} *.cpp)


add_executable(coinflip ${src_list})

target_include_directories(coinflip PUBLIC ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(coinflip
        Qt::Core
        Qt::Gui
        Qt::Widgets
        fmt::fmt-header-only
)

