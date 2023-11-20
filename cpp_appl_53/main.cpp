#include "box.h"

int main() {
    
    WashingMachine washing_machine_example = { "ExampleBrand", "White", 60, 80, 100, 1200, 1200, 40 };

    
    washing_machine_example.display_info();
    washing_machine_example.start_washing();
    washing_machine_example.set_temperature(50);
    washing_machine_example.display_info();

    return 0;
}
