//
// Created by 张耀华 on 2023/10/23.
//

#include "gtest/gtest.h"
#include "learn/learn_cpp.h"

class LearnCppTest : public ::testing::Test {
protected:
    void SetUp() override {
        // 初始化测试环境
        std::cout << "初始化测试环境" << std::endl;
    }

    void TearDown() override {
        std::cout << "清理测试环境" << std::endl;
        // 清理测试环境
    }
};

TEST_F(LearnCppTest, TestFunction1) {
    // 测试函数1的实现
    std::cout << "测试函数1的实现" << std::endl;
}

TEST_F(LearnCppTest, TestFunction2) {
    // 测试函数2的实现
    std::cout << "测试函数2的实现" << std::endl;
}


TEST(FightPlaneTestSuite, STACK) { // 12/2/2020 -> 737761

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

TEST(FightPlaneTestSuite, HEAP) { // 12/2/2020 -> 737761

    avdance::AirPlane *fp = new avdance::FightPlane();
    if (fp) {
        fp->fly();
        // 释放空间
        delete fp;
    }


    avdance::AirPlane *airPlane = new avdance::AirPlane();
    if (airPlane) {
        airPlane->fly();
        // 释放空间
        delete airPlane;
    }


}

TEST(HumanTestSuite, ExampleDate) { // 12/2/2020 -> 737761
    std::cout << "hello world ..." << std::endl;
}