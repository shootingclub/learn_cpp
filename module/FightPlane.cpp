//
// Created by 张耀华 on 2023/10/23.
//

#include "FightPlane.h"
#include <iostream>

namespace avdance {
    void FightPlane::setWeapons(int weapons) {
        this->weapons = weapons;
    }

    int FightPlane::getWeapons() {
        return this->weapons;
    }

    void FightPlane::fly() {
        std::cout << "this is a fight fly" << std::endl;

    }

}
