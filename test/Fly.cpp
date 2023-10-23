//
// Created by 张耀华 on 2023/10/23.
//

#include "gtest/gtest.h"
#include "Julian.h"
#include "FightPlane.h"

TEST(FightPlaneTestSuite, JICHENG) { // 12/2/2020 -> 737761

    avdance::FightPlane fp;
    fp.setWings(5);
    fp.setWheels(6);
    fp.setWeapons(10);

    // override super
    fp.fly();

    std::cout << "FightPlane winds: " << fp.getWinds() << std::endl;
    std::cout << "FightPlane wheels: " << fp.getWheels() << std::endl;
    std::cout << "FightPlane weapons: " << fp.getWeapons() << std::endl;


}
