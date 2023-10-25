//
// Created by 张耀华 on 2023/10/23.
//

#ifndef LEARN_C_SERVER_H
#define LEARN_C_SERVER_H

namespace avdance {
    class Server {
    public:
        Server();

        ~Server();

    public:
        void RunTcp();

        void RunUdp();


    };
}


#endif //LEARN_C_SERVER_H
