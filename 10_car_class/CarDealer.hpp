#ifndef CARDEALER_HPP
#define CARDEALER_HPP

#include <vector>
#include "Car.hpp"

class CarDealer{
    public:
        void addCar(const Car& car); // adds the car to the inventory.
        void showInventory() const;
        void oldestCar() const;
        void totalCars() const;
    private:
        std::vector<Car> inventory;
};

#endif