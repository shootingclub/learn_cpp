//
// Created by 张耀华 on 2023/10/19.
//

#ifndef LEARN_C___HUMAN_H
#define LEARN_C___HUMAN_H

#include <iostream>

class Human {
public:
    //构造函数
    Human() {
        std::cout << "construct human... " << std::endl;
        age = 0;
        sex = 0;
    }

    //析构函数在函数销毁的时候会调用，释放除对象的额外空间
    ~Human() {
        std::cout << "destruct human... " << std::endl;
    }

public:
    void setAge(int age);

    int getAge();

    void setSex(int sex);

    int getSex();

private:
    int age;
    int sex; // 0 male 1 fmale

};


#endif //LEARN_C___HUMAN_H
