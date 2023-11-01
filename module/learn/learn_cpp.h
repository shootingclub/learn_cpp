//
// Created by 张耀华 on 2023/11/1.
//

#ifndef LEARN_CPP_LEARN_CPP_H
#define LEARN_CPP_LEARN_CPP_H

#include <iostream>

namespace avdance {
    class learn_cpp_test {

    };

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

    class AirPlane {

    public:
        AirPlane() {
            wings = 2;
            wheels = 3;
            engines = 1;
            std::cout << "AirPlane construction" << std::endl;
        }

        ~ AirPlane() {}

    public:
        // get方法
        int getWinds();

        int getWheels();

        int getEngines();

        // set方法
        void setWings(int winds);

        void setWheels(int wheels);

        void setEngines(int engines);

    public:
        // 父类定义虚函数需要子类继承
        virtual void fly();

    private:
        int wings;
        int wheels;
        int engines;

    };

    class FightPlane : public AirPlane {

    public:
        FightPlane() {
            weapons = 1;
            std::cout << "FightPlane construction" << std::endl;
        };

        ~FightPlane() {};
    public:
        // 子类继承父类定义虚函数
        void fly();

    private:
    public:
        int getWeapons();

        void setWeapons(int weapons);

    private:
        int weapons;
    };
}


#endif //LEARN_CPP_LEARN_CPP_H
