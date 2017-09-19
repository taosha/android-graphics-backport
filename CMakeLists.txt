cmake_minimum_required(VERSION 3.4.1)

project(graphics)

include_directories(src/main/jni/)

file(GLOB SOURCES src/main/jni/**/*.cpp)

add_library( graphics
             SHARED
             ${SOURCES} )
