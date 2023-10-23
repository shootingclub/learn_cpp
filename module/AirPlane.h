
//
// Created by 张耀华 on 2023/10/23.
//

#ifndef LEARN_C_AIRPLANE_H
#define LEARN_C_AIRPLANE_H

#include <iostream>

namespace avdance {

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

}


#endif //LEARN_C_AIRPLANE_H
