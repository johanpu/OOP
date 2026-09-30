#include <iostream>
#include <string>

#include "Car.hpp"

Car::Car() {
    make = "-";
    model = "-";
    year = 1900;
    MPG = 0.0;
    fuel_level = 0.0;
    milage = 0.0;
}

Car::Car(const std::string& m, const std::string& mdl, int y, double mpg, double mi, double fl) {
    setMake(m);
    setModel(mdl);
    setYear(y);
    setMPG(mpg);
    setMilage(mi);
    setFuelLevel(fl);
}


void Car::printInfo() const {
    std::cout << "Make\t\t" << make << std::endl;
    std::cout << "Model\t\t" << model << std::endl;
    std::cout << "Year\t\t" << year << std::endl;
    std::cout << "MPG\t\t" << MPG << std::endl;
    std::cout << "Fuel: " << fuel_level << std::endl;
    std::cout << "Miles: " << milage << std::endl;
}


// Implement getters and setters
// Setters
void        Car::setMake(const std::string& mk) {
    make = mk;
}

void        Car::setModel(const std::string& md) {
    model = md;
}

void        Car::setYear(int y) {
    year = (y >= 1900 && y < 2026) ? y : 1900;
}

void        Car::setMPG(double new_mpg) {
    MPG = (new_mpg > 0.0) ? new_mpg : 0.0;
}

void       Car::setFuelLevel(double fl) {
    fuel_level = fl;
}

void       Car::setMilage(double mi) {
    milage = mi;
}

// Getters
std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int         Car::getYear() const {
    return year;
}

double      Car::getMPG() const {
    return MPG;
}

double      Car::getFuelLevel() const {
    return fuel_level;
}

double      Car::getMilage() const {
    return milage;
}