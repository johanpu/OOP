// .hpp header file. Keeps the description of the class. No implementation.

// Inclusion guard - prevents header files (e.g. Car.hpp, CarDealer.hpp) from being #included multiple times.
#ifndef CAR_HPP // name doesn't matter (#ifndef - if not, define) (need #endif at end). (CLASS_HPP or CLASS_H is standard convention)
#define CAR_HPP

#include <string>

class Car {
public:
    Car(); // No arg constructor
    Car(std::string make, std::string model, int year, double MPG, double fuel_capacity);

    // printInfo method
    void printInfo() const;

    // Getters
    std::string getMake() const;
    std::string getModel() const;
    int         getYear() const;
    double      getMPG() const;
    // double      getFuelLevel() const;
    double      getFuelCapacity() const;

    // Setters
    void        setMake(const std::string& mk);
    void        setModel(const std::string& md);
    void        setYear(int y);
    void        setMPG(double new_mpg);
    // void        setFuelLevel(double fl);
    void        setFuelCapacity(double fc);

private:
    std::string make;
    std::string model;
    int year;
    double MPG;
    double milage;
    double fuel_capacity;
    double fuel_level;
};

#endif