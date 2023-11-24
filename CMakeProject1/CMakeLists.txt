cmake_minimum_required(VERSION 3.10)

project(GeometryProject)

set(SOURCE_FILES
    Task3.cpp
    figure.cpp
    triangle.cpp
    rightTriangle.cpp
    isoscelesTriangle.cpp
    quadrilateral.cpp
    rectangle.cpp
    square.cpp
    parallelogram.cpp
    rhombus.cpp
    equilateralTriangle.cpp
)

add_executable(Task3 ${SOURCE_FILES})

target_include_directories(Task3 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_property(TARGET Task3 PROPERTY CXX_STANDARD 11)

