// Testing file
#include "Car.hpp" 
#include <iostream>
// #include "CarDealer.hpp"

int main(void) {
    Car toyota("Toyota", "Corolla", 2020, 23.2, 12.0);
    toyota.printInfo();
    toyota.refuel(5); // call no matter what?
    
    double gallons, distance;

    while (1) {
        std::cout << "Enter gallons: ";
        std::cin >> gallons;

        std::cout << "Enter distance: ";
        std::cin >> distance;
    }

    
    return 0;
}