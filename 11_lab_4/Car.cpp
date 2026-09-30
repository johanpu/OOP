#include <iostream>
#include <string>
#include "Car.hpp"

Car::Car() {
    make = "-";
    model = "-";
    year = 1900;
    mpg = 0.0;

    fuel_capacity = 0.0;
    mileage = 0.0;
    fuel_level = 0.0;
}

Car::Car(const std::string& mk, const std::string& mdl, int y, double car_mpg, double fuel_capacity) {
    setMake(mk);
    setModel(mdl);
    setYear(y);
    setMPG(car_mpg);
    setFuelCapacity(fuel_capacity);

    mileage = 0.0;
    fuel_level = 0.0;
}

void Car::printInfo() const {
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "MPG: " << mpg << std::endl;
    std::cout << "Fuel: " << fuel_level << std::endl;
    std::cout << "Miles: " << mileage << std::endl;
}

void Car::refuel(double gallons) {
    std::cout << "\nRefueling..." << std::endl;
    
    double amount_empty = fuel_capacity - fuel_level;
    double fuel_added = 0;
    double excess_fuel = 0;
    
    if (gallons > amount_empty) { // if pouring more into tank than space available in tank.
        fuel_added = amount_empty;
        excess_fuel = gallons - amount_empty;
    }
    else {
        fuel_added = gallons; // else, add however many gallons specified.
    }

    fuel_level += fuel_added; 

    std::cout << "Fuel added: " << fuel_added << " gallons" << std::endl;

    if (excess_fuel > 0) {
        std::cout << "Excess fuel: " << excess_fuel << " gallons" << std::endl; // print if excess fuel exists.
    }

    std::cout << "Fuel level: " << fuel_level << " gallons" << std::endl;
}

void Car::drive(double distance) {
    double max_dist = fuel_level * mpg;
    double traveled_dist = 0;
    double remaining_dist = 0;

    if (distance > max_dist) { // if the distance given is more than the car can travel w/ current fuel levels
        traveled_dist = max_dist;
        remaining_dist = distance - traveled_dist;
        fuel_level = 0; // max distance traveled, tank empty.
    }
    else {
        traveled_dist = distance;
        fuel_level -= traveled_dist / mpg; 
    }

    mileage += traveled_dist;
}

// Implement getters and setters

void       Car::setMake(const std::string& mk) {
    make = mk;
}
void       Car::setModel(const std::string& md) {
    model = md;
}
void        Car::setYear(int y) {
    year = (y > 1900 && y < 2027) ? y : 1900;
}
void        Car::setMPG(double new_mpg) {
    mpg = (new_mpg > 0) ? new_mpg : 0;
}

void        Car::setFuelCapacity(double fuelCap) {
    fuel_capacity = fuelCap;
}

double        Car::getFuelLevel() const {
    return fuel_level;
}