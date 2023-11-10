set(HEADERS
    design/ui_untitled.h
    headers/window.h
    headers/mainDisplay.h
    headers/board.h
)

set(SOURCE
    source/window.cpp
    source/mainDisplay.cpp
    source/board.cpp
)

add_library(ui ${SOURCE} ${HEADERS} design/icons.qrc)
target_include_directories(ui
    PUBLIC
    ${PROJECT_SOURCE_DIR}/src/ui/headers
)
target_link_libraries(ui Qt5::Widgets Qt::Core)
