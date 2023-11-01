#cmake_minimum_required(VERSION 3.26)
project(test)
# 添加模块，gtest模块
add_subdirectory(lib)

# adding the Google_Tests_run target
add_executable(Google_Tests_run
        data/converter_test.cpp
        data/absolute_date_test.cpp
        server/server_test.cpp
        signal/signal_test.cpp
        daemon/fork_test.cpp
        daemon/daemon_test.cpp
        server/client_test.cpp
        learn/learn_cpp_test.cpp
        server/libevent_server/libevent_server_test.cpp
)

## linking Google_Tests_run with DateConverter_lib which will be tested
target_link_libraries(Google_Tests_run module)
#
target_link_libraries(Google_Tests_run gtest gtest_main)