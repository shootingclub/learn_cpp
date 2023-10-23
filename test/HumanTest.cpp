//
// Created by 张耀华 on 2023/10/19.
//


#include "gtest/gtest.h"
#include "Human.h"
#include <iostream>


TEST(HumanTestSuite, Stack) { // 12/2/2020 -> 737761
    avdance::Human human;
    human.setSex(1);
    human.setAge(22);
    std::cout << "human:" << human.getAge() << "," << human.getSex() << std::endl;

}


TEST(HumanTestSuite, Heap) { // 12/2/2020 -> 737761
    avdance::Human *human = new avdance::Human();
    human->setAge(12);
    human->setSex(1);
    std::cout << "human:" << human->getAge() << "," << human->getSex() << std::endl;

}
