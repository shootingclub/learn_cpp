//
// Created by 张耀华 on 2023/10/23.
//
#include "gtest/gtest.h"
#include <iostream>
#include <signal.h>
#include <unistd.h>

void sighandle(int sig) {
    std::cout << "receved signal: " << sig << std::endl;
    switch (sig) {
        case 1:
            std::cout << "SIGHUP" << std::endl;
            break;
        case 2:
            std::cout << "SIGINT" << std::endl;
            break;
        case 3:
            std::cout << "SIGQUIT" << std::endl;
            break;

    }
}


//clang++ -std=c++14 -g -o sigletest Signal.cpp
// ./sigletest > signal.txt
//int main(int argv, char *argc[]) {
//    signal(SIGHUP, sighandle);
//    signal(SIGINT, sighandle);
//    signal(SIGQUIT, sighandle);
//
//    pause();
//    return 0;
//}

//int main(int argv, char *argc[]) {
//    struct sigaction act, oact;
//    act.sa_handler = sighandle;
//    sigfillset(&act.sa_mask);
//    act.sa_flags = 0;
//    sigaction(SIGINT, &act, &oact);
//    pause();
//    return 0;
//}


