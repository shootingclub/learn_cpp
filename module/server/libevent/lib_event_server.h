//
// Created by 张耀华 on 2023/11/1.
//

#ifndef LEARN_CPP_LIB_EVENT_SERVER_H
#define LEARN_CPP_LIB_EVENT_SERVER_H

namespace avdance {
    class libevent_server {
    public:
        libevent_server();

        ~libevent_server();

    public:
        void libevent_runtcp();

        void libevent_runudp();


    };
}


#endif //LEARN_CPP_LIB_EVENT_SERVER_H
