//
// Created by 张耀华 on 2023/10/23.
//


#include "gtest/gtest.h"
#include "server/server.h"
#include <iostream>

TEST(ServerTestSuite, TCP_SERVER) {
    avdance::server server;
    server.RunTcp();
}
