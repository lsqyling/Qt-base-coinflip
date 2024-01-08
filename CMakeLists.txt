cmake_minimum_required(VERSION 3.26)
project(qt_base)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

#set(CMAKE_PREFIX_PATH "D:/dev/tools/Qt/6.5.2/msvc2019_64")
if (WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif ()

if (MSVC)
    add_compile_options("/utf-8")
endif ()

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "build type" FORCE)
endif ()
message(STATUS ${CMAKE_BUILD_TYPE})

# set
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/bin)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        Multimedia
        REQUIRED)

find_package(fmt REQUIRED)


add_subdirectory(base)
add_subdirectory(coin_flip_games)