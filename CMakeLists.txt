#cmake_minimum_required(VERSION 3.14)
#project(learn_c__)
## 开启测试
#set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_OSX_ARCHITECTURES "arm64")
#find_package(GTest REQUIRED)
#
#set(INCLUDE_DIRS /usr/local/) # FFmpeg的安装目录
## 包含GTest的头文件目录 头文件路径
#include_directories(${INCLUDE_DIRS}/gtest/googletest/include/)
#
##add_executable(learn_c__ main.cpp
##        module/Human.cpp
##        module/Human.h
##)
#
#include_directories(module)
#add_subdirectory(module)
#add_subdirectory(test)
#target_link_libraries(module)

cmake_minimum_required(VERSION 3.26)
project(learn_c++)

set(CMAKE_CXX_STANDARD 14)
#set(INCLUDE_DIRS /usr/local/)
#include_directories(${INCLUDE_DIRS}/gtest/googletest/include/)

#set(SOURCE_FILES main.cpp
#        Google_tests/AbsoluteDateTest.cpp
#)
#add_executable(DateConverter_run ${SOURCE_FILES})

include_directories(module)
add_subdirectory(module)
add_subdirectory(test)
target_link_libraries(module)




