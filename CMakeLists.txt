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
project(learn_cpp)
set(CMAKE_CXX_STANDARD 14)


#set(INCLUDE_DIRS /usr/local/)
#include_directories(${INCLUDE_DIRS}/libevent-2.1.8/include)
#link_directories(${INCLUDE_DIRS}/libevent-2.1.8/lib)


add_executable(learn_cpp main.cpp)

include_directories(module)
add_subdirectory(module)
add_subdirectory(test)
target_link_libraries(learn_cpp
        module
        #        event
)