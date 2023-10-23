//
// Created by 张耀华 on 2023/10/23.
//

#include "Server.h"
#include <iostream>
#include <unistd.h>

namespace avdance {
    Server::Server() {
        std::cout << "construct..." << std::endl;
    }

    Server::~Server() {
        std::cout << "deconstruct..." << std::endl;
    }

    void Server::run() {
        while (1) {
            std::cout << "running" << std::endl;
            ::usleep(1000000); //睡一秒钟
        }

    }
}