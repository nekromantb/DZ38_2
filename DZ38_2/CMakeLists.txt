cmake_minimum_required(VERSION 3.5)

project(DZ38_2 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Widgets WebEngineWidgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
)

add_executable(DZ38_2 ${PROJECT_SOURCES})

target_link_libraries(DZ38_2 PRIVATE Qt5::Widgets Qt5::Core Qt5::WebEngineCore Qt5::WebEngineWidgets)
