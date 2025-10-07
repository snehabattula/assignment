# Minimum version
cmake_minimum_required(VERSION 3.10.2)

# Project name
project("edgedetection")

# Find OpenCV (you must include OpenCV SDK for Android)
set(OpenCV_DIR ${CMAKE_SOURCE_DIR}/../opencv/sdk/native/jni)
find_package(OpenCV REQUIRED)

# Include directories
include_directories(${OpenCV_INCLUDE_DIRS})

# Add native source files
add_library(
    native-lib
    SHARED
    native-lib.cpp
)

# Link libraries
find_library(log-lib log)
target_link_libraries(native-lib ${OpenCV_LIBS} ${log-lib})
