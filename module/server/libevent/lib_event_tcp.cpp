////////
//////// Created by 张耀华 on 2023/10/27.
////////
////////
////
//#include <arpa/inet.h>
//#include "event2/listener.h"
//#include "event2/bufferevent.h"
//#include "event2/buffer.h"
//#include "event2/thread.h"
//#include "event2/event.h"
//#include "event2/util.h"
//
//#include <cstring>
//#include <cstdlib>
//
//
//#define PORT 8111
//
//void on_read_cb(struct bufferevent *bev, void *ctx) {
//    struct evbuffer *input, *output = NULL;
//    input = bufferevent_get_input(bev);
//    bufferevent_get_output(bev);
//    evbuffer_add_buffer(output, input);
//}
//
//void accept_cb(
//        struct evconnlistener *listener,
//        evutil_socket_t fd,
//        struct sockaddr *addr,
//        int socklen,
//        void *ctx
//) {
//    // 处理新连接请求
//    struct event_base *base = NULL;
//    struct bufferevent *bev = NULL;
//
//    base = evconnlistener_get_base(listener);
//    bev = bufferevent_socket_new(base, fd, 0);
//    bufferevent_enable(bev, EV_READ | EV_WRITE);
//    bufferevent_setcb(bev, on_read_cb, NULL, NULL, NULL);
//
//}
//
//int main(int argc, char *argv[]) {
//    struct sockaddr_in serveraddr;
//    struct event_base *base = NULL;
//    struct evconnlistener *listener = NULL;
//
//    base = event_base_new();
//    serveraddr.sin_family = AF_INET;
//    serveraddr.sin_port = PORT;
//    serveraddr.sin_addr.s_addr = INADDR_ANY;
//
//
//    evconnlistener_new_bind(base,
//                            (evconnlistener_cb) accept_cb,
//                            NULL,
//                            LEV_OPT_REUSEABLE,
//                            10,
//                            (const sockaddr *) &serveraddr,
//                            sizeof(sockaddr)
//    );
//
//    event_base_dispatch(base);
//
//    return 0;
//}
//
//
