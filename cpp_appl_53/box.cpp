#include "box.h"
#include <iostream>

void WashingMachine::start_washing() {
    std::cout << brand << " washing machine started!" << std::endl;
}

void WashingMachine::set_temperature(int temperature) {
    if (temperature >= 0 && temperature <= 100) {
        heating_temperature = temperature;
        std::cout << "Temperature set to " << temperature << "°C" << std::endl;
    }
    else {
        std::cout << "Invalid temperature value. Please choose a value between 0 and 100." << std::endl;
    }
}

void WashingMachine::display_info() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Dimensions (W x L x H): " << width << " x " << length << " x " << height << " cm" << std::endl;
    std::cout << "Power: " << power << " W" << std::endl;
    std::cout << "Spin Speed: " << spin_speed << " RPM" << std::endl;
    std::cout << "Heating Temperature: " << heating_temperature << "°C" << std::endl;
}
