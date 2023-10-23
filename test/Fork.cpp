//
// Created by 张耀华 on 2023/10/23.
//

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void daemonsize() {
    pid_t pid;
    int fd;
    if ((pid = fork()) < 0) {
        std::cout << "can't create suprocess " << std::endl;
    } else {
        if (pid != 0) {
            exit(0);
        }
    }

    setsid();
    if (chdir("/") < 0) {
        std::cout << "can't change dir " << std::endl;
        exit(-1);
    }
    fd = open("/dev/null", O_RDWR);
    dup2(fd, STDIN_FILENO);
    dup2(fd, STDOUT_FILENO);
    dup2(fd, STDERR_FILENO);

    return;
}

//int main(int argv, char *argc[]) {
//    daemonsize();
//    while (1) {
//        sleep(1);
//    }
//
//    std::cout << "parent process out " << std::endl;
//}
