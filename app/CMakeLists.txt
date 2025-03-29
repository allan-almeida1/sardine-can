cmake_minimum_required(VERSION 3.16)

project(SardineCan)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Depends on Qt5
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

# Add include directories
include_directories(${Qt5Core_INCLUDE_DIRS})

# Find .ui files
file(GLOB UI_FILES ui/*.ui)

# Generate headers from .ui files
qt5_wrap_ui(UI_HEADERS ${UI_FILES})

message(STATUS "UI files: ${UI_FILES}")
message(STATUS "Generated UI Headers: ${GENERATED_UI_HEADERS}")


# Add executable
add_executable(${PROJECT_NAME} 
    ${UI_HEADERS}
    src/main.cpp
)

# Link libraries
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets)
