#cmake_minimum_required(VERSION 3.26)
project(module)


set(HEADER_FILES
        data/gregorian.h
        data/julian.h
        server/server.h
        server/client.h
        learn/learn_cpp.h
        server/libevent/lib_event_server.h
)

set(SOURCE_FILES
        data/gregorian.cpp
        data/julian.cpp
        server/server.cpp
        server/client.cpp
        learn/learn_cpp.cpp
        server/libevent/lib_event_server.cpp


)

# 添加libevent库文件
include_directories(/usr/local/libevent-2.1.8/include)
link_directories(/usr/local/libevent-2.1.8/lib)


add_library(module STATIC ${SOURCE_FILES} ${HEADER_FILES})
target_include_directories(module PUBLIC .)
# 将libevent.a引入到目标依赖中
target_link_libraries(module /usr/local/libevent-2.1.8/lib/libevent.a)
