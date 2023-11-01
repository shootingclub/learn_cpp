////
//// Created by 张耀华 on 2023/10/23.
////
//
//#include <iostream>
//#include <unistd.h>
//#include <stdlib.h>
//
//
//int main(int argv, char *argc[]) {
//    std::cout << "parent lib_event_server out " << std::endl;
//    if (daemon(0, 0) == -1) {
//        std::cout << "error " << std::endl;
//        exit(-1);
//    }
//    while (1) {
//        sleep(1);
//    }
//}
//
//
////int main(int argv, char *argc[]) {
////    pid_t pid = fork();
////
////    if (pid < 0) {
////        std::cerr << "fork失败" << std::endl;
////        return 1;
////    } else if (pid == 0) {
////        // 子进程
////        std::cout << "子进程，PID: " << getpid() << std::endl;
////
////        // 创建守护进程
////        if (daemon(0, 0) == -1) {
////            std::cerr << "守护进程创建失败" << std::endl;
////            return 1;
////        }
////
////        std::cout << "守护进程已启动，PID: " << getpid() << std::endl;
////
////        // 在此处添加守护进程需要执行的任务
////        sleep(3600); // 示例：让守护进程休眠1小时
////
////    } else {
////        // 父进程
////        std::cout << "父进程，PID: " << getpid() << std::endl;
////        wait(NULL); // 等待子进程结束
////    }
////
////    return 0;
////}
//
