//
// Created by 张耀华 on 2023/10/23.
//

#ifndef LEARN_C_FIGHTPLANE_H
#define LEARN_C_FIGHTPLANE_H

#include "AirPlane.h"

namespace avdance {
    class FightPlane : public AirPlane {

    public:
        FightPlane() {
            weapons = 1;
        };

        ~FightPlane() {};
    public:
        void setWeapons(int weapons);

        int getWeapons();

        void fly();

    private:
        int weapons;
    };
}


#endif //LEARN_C_FIGHTPLANE_H
