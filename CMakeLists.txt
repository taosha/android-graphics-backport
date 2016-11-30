cmake_minimum_required(VERSION 3.4.1)

project(graphics)

include_directories(src/main/jni/)

aux_source_directory(src/main/jni SOURCES)

add_library( graphics
             SHARED
             src/main/jni/camera.cpp
             src/main/jni/skia/SkCamera.cpp
             src/main/jni/skia/SkFloatBits.cpp
             src/main/jni/skia/SkMath.cpp
             src/main/jni/skia/SkScalar.cpp )

