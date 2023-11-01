////
//// Created by 张耀华 on 2023/11/1.
////
#include "gtest/gtest.h"
#include "server/libevent/lib_event_server.h"


class libevent_server : public ::testing::Test {
protected:
    void SetUp() override {
        // 初始化测试环境
        std::cout << "初始化测试环境" << std::endl;
    }

    void TearDown() override {
        std::cout << "清理测试环境" << std::endl;
        // 清理测试环境
    }
};

TEST_F(libevent_server, test_tcp_server) {
    avdance::libevent_server server;
    server.libevent_runtcp();
}