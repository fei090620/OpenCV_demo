cmake_minimum_required(VERSION 3.10)
project(../../opencv_demo)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
set(CMAKE_CXX_STANDARD 11)

add_executable(opencv_demo main.cpp DisplayImage.cpp DisplayImage.h)
target_link_libraries(opencv_demo ${OpenCV_LIBS} )
