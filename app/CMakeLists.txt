cmake_minimum_required(VERSION 3.16)

project(SardineCan)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOUIC TRUE)
set(CMAKE_AUTOMOC TRUE)
set(CMAKE_AUTORCC TRUE)

# Depends on Qt5
find_package(Qt5 CONFIG REQUIRED COMPONENTS Core Gui Widgets Network)

# Add include directories
include_directories(${Qt5Core_INCLUDE_DIRS} ${Qt5Widgets_INCLUDE_DIRS} include ${CMAKE_BINARY_DIR})

# Find .ui files
file(GLOB_RECURSE UI_FILES "ui/*.ui")
file(GLOB_RECURSE APP_HEADERS "include/*.h*")

# Generate headers from .ui files
qt5_wrap_ui(UI_HEADERS ${UI_FILES})
qt5_add_resources(RESOURCES resources/resources.qrc)

# Add the ui directory to the AUTOUIC search paths
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_SOURCE_DIR}/ui)

# Add executable
add_executable(${PROJECT_NAME}
 src/main.cpp 
 src/main_window.cpp
 src/pedal_widget.cpp
 src/scan_dialog.cpp
 src/setup_dialog.cpp
 src/pedal_dialog.cpp
 ${APP_HEADERS} 
 ${UI_HEADERS}
 ${RESOURCES}
)

# Link libraries
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets Qt5::Network)
