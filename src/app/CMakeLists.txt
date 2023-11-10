set(HEADERS
    design/ui_untitled.h
    headers/window.h
)

set(SOURCE
    source/window.cpp
)

add_library(app ${SOURCE} ${HEADERS} design/icons.qrc)
target_include_directories(app
    PUBLIC
    ${PROJECT_SOURCE_DIR}/src/app/headers
)
target_link_libraries(app Qt5::Widgets Qt::Core)
