//
// Created by 张耀华 on 2023/10/23.
//

#include "AirPlane.h"
#include <iostream>

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

}

