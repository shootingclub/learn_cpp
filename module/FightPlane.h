//
// Created by 张耀华 on 2023/10/23.
//

#ifndef LEARN_C_FIGHTPLANE_H
#define LEARN_C_FIGHTPLANE_H

#include "AirPlane.h"
#include <iostream>

namespace avdance {
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


#endif //LEARN_C_FIGHTPLANE_H
