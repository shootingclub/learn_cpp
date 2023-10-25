//
// Created by 张耀华 on 2023/10/25.
//

#ifndef LEARN_C_SERVERCLIENT_H
#define LEARN_C_SERVERCLIENT_H

namespace avdance {
    class ServerClient {

    public:
        ServerClient();

        ~ServerClient();

    public:
        void TcpClient();

        void UdpClient();

    };
}


#endif //LEARN_C_SERVERCLIENT_H
