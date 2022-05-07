project(ncnnmodel)

cmake_minimum_required(VERSION 3.10)

set(OpenCV_DIR ${CMAKE_SOURCE_DIR}/opencv-mobile-4.5.4-android/sdk/native/jni)
find_package(OpenCV REQUIRED core imgproc)

set(ncnn_DIR ${CMAKE_SOURCE_DIR}/ncnn-20211208-android/${ANDROID_ABI}/lib/cmake/ncnn)
find_package(ncnn REQUIRED)


add_library(ncnnmodel SHARED ncnnmodel.cpp yolox.cpp mspn.cpp ndkcamera.cpp)

target_link_libraries(ncnnmodel ncnn ${OpenCV_LIBS} camera2ndk mediandk)
