#include "CarDealer.hpp"
#include <iostream>

void CarDealer::addCar(const Car& car) {
    inventory.push_back(car);
}

void CarDealer::showInventory() const {
    for (int i = 0; i < inventory.size(); i++) {
        inventory[i].printInfo();
        std::cout << "--------------------\n";
    }
}

/* void CarDealer::oldestCar() const {
    if (inventory.empty()) {
        std::cout << "No cars in inventory yet.\n";
        return;
    }

    const Car* oldest = &inventory[0];

    for (const Car& car : inventory) {
        if (car.getYear() < oldest->getYear()) {
            oldest = &car;
        }
    }

    std::cout << "Oldest car:\n";
    oldest->printInfo();
}

void CarDealer::totalCars() const {
    int total = 0;
    for (const Car& car : inventory) {
        total += 1;
    }
    std::cout << "There are " << total << " cars in inventory." << std::endl;
}
    */