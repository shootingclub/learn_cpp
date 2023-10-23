
//
// Created by 张耀华 on 2023/10/23.
//

#ifndef LEARN_C_AIRPLANE_H
#define LEARN_C_AIRPLANE_H


namespace avdance {

    class AirPlane {

    public:
        AirPlane() {
            wings = 2;
            wheels = 3;
            engines = 1;
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
        void fly();

    private:
        int wings;
        int wheels;
        int engines;

    };

}


#endif //LEARN_C_AIRPLANE_H
