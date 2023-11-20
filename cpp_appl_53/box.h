#ifndef WASHING_MACHINE_H
#define WASHING_MACHINE_H

#include <string>

struct WashingMachine {
    std::string brand;
    std::string color;
    int width;
    int length;
    int height;
    int power;
    int spin_speed;
    int heating_temperature;

    void start_washing();
    void set_temperature(int temperature);
    void display_info();
};

#endif 

