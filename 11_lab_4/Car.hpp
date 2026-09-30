// .hpp header file. Keeps the description of the class. No implementation.
// Inclusion guard
#ifndef CAR_HPP
#define CAR_HPP

#include <string>

class Car {
public:
    // No arg constructor
    Car();
    Car(const std::string& mk, const std::string& mdl, int y, double car_mpg, double car_fc);

    // printInfo method
    void printInfo() const;
    void refuel(double gallons);
    void drive(double distance);

    // Getters
    std::string getMake() const;
    std::string getModel() const;
    int         getYear() const;
    double      getMPG() const;
    double      getFuelCapacity() const;
    double      getFuelLevel() const;

    // Setters
    void        setMake(const std::string& mk);
    void        setModel(const std::string& md);
    void        setYear(int y);
    void        setMPG(double new_mpg);
    void        setFuelCapacity(double car_fc);

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
    double fuel_capacity;
    double mileage;
    double fuel_level;
};

#endif