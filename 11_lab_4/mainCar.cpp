// Testing file
#include "Car.hpp" 
#include <iostream>
// #include "CarDealer.hpp"

int main(void) {
    Car toyota("Toyota", "Corolla", 2020, 23.2, 12.0);
    toyota.refuel(5); // call no matter what?
    double gallons, distance;

    while (1) {
        std::cout << "\nEnter gallons: ";
        if (!(std::cin >> gallons)) { // added to break while(1) loop in case of invalid input (no other method to end program was specified).
            break;
        }

        std::cout << "\nEnter distance: ";
        if (!(std::cin >> distance)) {
            break;
        }
        
        std::cout << "\n";
        toyota.refuel(gallons);
        std::cout << "\n";
        toyota.drive(distance);
        std::cout << "\n";

        toyota.printInfo();
    }


    
    return 0;
}