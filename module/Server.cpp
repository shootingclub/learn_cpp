//
// Created by 张耀华 on 2023/10/23.
//

#include "Server.h"
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <pthread.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>

# define PORT 8111
# define MESSAGE_SIZE 1024
namespace avdance {
    Server::Server() {
        std::cout << "construct..." << std::endl;
    }

    Server::~Server() {
        std::cout << "deconstruct..." << std::endl;
    }

    void Server::RunTcp() {
        int ret = -1;

        int socket_fd = -1;
        int accept_fd = -1;

        int curpos = 0;
        int backlog = 10;
        int flag = 1;

        char in_buf[MESSAGE_SIZE] = {0,};
        struct sockaddr_in local_addr, remote_addr;

        //create a tcp socket
        socket_fd = socket(AF_INET, SOCK_STREAM, 0);
        if (socket_fd == -1) {
            perror("create socket error");
            exit(1);
        }

        //set option of socket
        ret = setsockopt(socket_fd, SOL_SOCKET, SO_REUSEADDR, &flag, sizeof(flag));
        if (ret == -1) {
            perror("setsockopt error");
        }

        //set local address
        local_addr.sin_family = AF_INET;
        local_addr.sin_port = htons(PORT);
        local_addr.sin_addr.s_addr = INADDR_ANY;
        bzero(&(local_addr.sin_zero), 8);

        //bind socket
        ret = bind(socket_fd, (struct sockaddr *) &local_addr, sizeof(struct sockaddr_in));
        if (ret == -1) {
            perror("bind error");
            exit(1);
        }

        ret = listen(socket_fd, backlog);
        if (ret == -1) {
            perror("listen error");
            exit(1);
        }

        //loop
        for (;;) {
            int addr_len = sizeof(struct sockaddr_in);
            //accept an new connection
            accept_fd = accept(socket_fd, (struct sockaddr *) &remote_addr, (socklen_t *) &addr_len);
            for (;;) {
                memset(in_buf, 0, MESSAGE_SIZE);

                //receive network data and print it
                ret = recv(accept_fd, (void *) in_buf, MESSAGE_SIZE, 0);
                if (ret == 0) {
                    break;
                }
                std::cout << "receive message: " << in_buf << std::endl;
//                printf("receive message:%s\n", in_buf);
                send(accept_fd, (void *) in_buf, MESSAGE_SIZE, 0);
            }
            std::cout << "close client connection..." << std::endl;
//            printf("close client connection...\n");
            close(accept_fd);
        }

        printf("quit server...\n");
        close(socket_fd);
    }

    void Server::RunUdp() {
        struct sockaddr_in addr;
        addr.sin_family = AF_INET;
        addr.sin_port = htonl(9876);
        addr.sin_addr.s_addr = htonl(INADDR_ANY);

        char buff_recv[512] = {0};
        char buff_send[512] = "world";

        struct sockaddr_in clientAddr;
        int n;
        int len = sizeof(clientAddr);
        int sock;
        int ret;
        std::cout << "welcome! this is a udp server" << std::endl;

        ret = socket(AF_INET, SOCK_DGRAM, 0);
        if (ret < 0) {
            std::cout << "socket error " << std::endl;
            exit(-1);
        }
        ret = bind(sock, (struct sockaddr *) &addr, (socklen_t) sizeof(addr));
        if (ret < 0) {
            std::cout << "bind error " << std::endl;
            exit(-1);
        }
        while (1) {
            n = recvfrom(sock, buff_recv, 511, 0, (struct sockaddr *) &clientAddr, (socklen_t *) &len);
            if (n > 0) {
                buff_recv[n] = 0;
                std::cout << "recv data from client " <<
                          inet_ntoa(clientAddr.sin_addr) <<
                          ntohs(clientAddr.sin_port) <<
                          buff_recv << std::endl;

//                printf("recv data from client:%s %u says: %s\n", inet_ntoa(clientAddr.sin_addr), ntohs(clientAddr.sin_port), buff_recv);

                n = sendto(sock, buff_send, n, 0, (struct sockaddr *) &clientAddr, sizeof(clientAddr));
                if (n < 0) {
                    std::cout << "sendto error " << std::endl;
//                    printf("sendto error.\n");
                    break;

                } else {
//                    printf("recv error.\n");
                    std::cout << "recv error " << std::endl;
                    break;
                }
            }
        }
    }
}