//
// Created by 张耀华 on 2023/11/1.
//

#include "learn_cpp.h"


namespace avdance {
    void AirPlane::setWings(int winds) {
        this->wings = winds;
    }

    int AirPlane::getWinds() {
        return this->wings;
    }

    void AirPlane::setWheels(int wheels) {
        this->wheels = wheels;
    }

    int AirPlane::getWheels() {
        return this->wheels;
    }

    void AirPlane::setEngines(int engines) {
        this->engines = engines;
    }

    int AirPlane::getEngines() {
        return this->engines;
    }

    void AirPlane::fly() {
        std::cout << "fly ... " << std::endl;
    }

    void FightPlane::setWeapons(int weapons) {
        this->weapons = weapons;
    }

    int FightPlane::getWeapons() {
        return this->weapons;
    }

    void FightPlane::fly() {
        std::cout << "this is a fight fly" << std::endl;

    }

    void Human::setAge(int age) {
        this->age = age;
    }

    void Human::setSex(int sex) {
        this->sex = sex;
    }

    int Human::getAge() {
        return this->age;
    }

    int Human::getSex() {
        return this->sex;
    }

}