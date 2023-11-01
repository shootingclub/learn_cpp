//
// Created by 张耀华 on 2023/10/25.
//

#include "gtest/gtest.h"
#include "server/client.h"
#include <iostream>

TEST(ServerClientTestSuite, TCP_CLIENT) {
    avdance::client serverClient;
    serverClient.TcpClient();

}

