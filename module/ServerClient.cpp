//
// Created by 张耀华 on 2023/10/25.
//
#include <iostream>
#include "ServerClient.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/types.h>


#define SERVER_PORT 8111
#define MESSAGE_LENGTH 1024

namespace avdance {
    ServerClient::ServerClient() {
        std::cout << "construct..." << std::endl;
    }

    ServerClient::~ServerClient() {
        std::cout << "deconstruct..." << std::endl;
    }

    void ServerClient::TcpClient() {
        int ret = -1;
        int socket_fd;

        //server addr
        struct sockaddr_in serverAddr;

        char sendbuf[MESSAGE_LENGTH];
        char recvbuf[MESSAGE_LENGTH];

        int data_len;

        if ((socket_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
            perror("socket");
        }

        serverAddr.sin_family = AF_INET;
        serverAddr.sin_port = htons(SERVER_PORT);

        //inet_addr()函数，将点分十进制IP转换成网络字节序IP
//        serverAddr.sin_addr.s_addr = inet_addr("39.105.185.198");
        serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");

        ret = connect(socket_fd, (struct sockaddr *) &serverAddr, sizeof(serverAddr));
        if (ret < 0) {
            perror("connect");
        }

        std::cout << "success to connect server..." << std::endl;
//        printf("success to connect server...\n");

        while (1) {
            memset(sendbuf, 0, MESSAGE_LENGTH);
            std::cout << "send message: " << std::endl;
//            printf("<<<<send message:");
            gets(sendbuf);
            //printf("\n");
            ret = send(socket_fd, sendbuf, strlen(sendbuf), 0);
            if (ret <= 0) {
                std::cout << "the connection is disconnection " << std::endl;
//                printf("the connection is disconnection!\n");
                break;
            }

            if (strcmp(sendbuf, "quit") == 0) {
                break;
            }
            std::cout << " echo message: " << std::endl;
//            printf(">>> echo message:");
            recvbuf[0] = '\0';
            data_len = recv(socket_fd, recvbuf, MESSAGE_LENGTH, 0);

            recvbuf[data_len] = '\0';

            std::cout << "  message: " << recvbuf << std::endl;
//            printf("%s\n", recvbuf);

        }

        close(socket_fd);


    }

    void ServerClient::UdpClient() {
        struct sockaddr_in addr;
        int sock;

        addr.sin_family = AF_INET;
        addr.sin_port = htonl(9876);
        addr.sin_addr.s_addr = inet_addr("127.0.0.1");

        char buff_recv[512] = "hello";
        char buff_send[512] = {0};

        int len = sizeof(addr);
        int n = 0;
        std::cout << "this is a udp client" << std::endl;

        sock = socket(AF_INET, SOCK_DGRAM, 0);
        if (sock < 0) {
            std::cout << "socket error" << std::endl;
//            printf("socket error.\n");
            exit(1);
        }
        if (addr.sin_addr.s_addr == INADDR_ANY) {
            std::cout << "incorrect ip address !" << std::endl;
//            printf("socket error.\n");
            close(sock);
            exit(1);
        }
        n = sendto(sock, buff_send, strlen(buff_send), 0, (struct sockaddr *) &addr, sizeof(addr));
        if (n < 0) {
            std::cout << "sendto error !" << std::endl;
//            printf("socket error.\n");
            close(sock);
        }
        n = recvfrom(sock, buff_recv, 512, 0, (struct sockaddr *) &addr, (socklen_t *) &len);
        if (n > 0) {
            buff_recv[n] = 0;
            printf("received from sever:");
            puts(buff_recv);
        } else if (n == 0)
            printf("server closed.\n");
        else if (n == -1)
            printf("recvfrom error.\n");

        close(sock);
    }
}
