cmake_minimum_required(VERSION 3.5)

project(NerChess VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

SET(UI_FORMS
    src/app/design/ui_untitled.ui
)
SET(UI_MOC_HEADERS
    src/app/headers/window.h
)

find_package(Qt5Widgets REQUIRED)

QT5_WRAP_CPP(UI_WRAPPED_MOC_HEADERS ${UI_MOC_HEADERS})
QT5_WRAP_UI(UI_FORM_HEADERS ${UI_FORMS})
qt5_add_resources(UI_RESOURCES_RCC src/app/design/icons.qrc)

add_subdirectory(src/app)

add_executable(NerChess src/main.cpp ${UI_RESOURCES_RCC})
target_link_libraries(NerChess PRIVATE app)