// Testing file
#include "Car.hpp"
#include "CarDealer.hpp"
#include <iostream>

int main(void) {
    Car toyota;

    toyota.setModel("Toyota");
    toyota.setMake("Corolla");
    toyota.setYear(2020);
    toyota.setMPG(23.2);
    toyota.setFuelCapacity(12.0);

    toyota.printInfo();

    // Create a Car object
    /*
    Car my_car;

    my_car.printInfo();
    my_car.setModel("F50");
    my_car.setYear(2015);
    my_car.setMPG(10.2);
    my_car.setFuelLevel(0.0);
    my_car.setMilage(0.0);
    
     my_car.setMake("Ferrari");
    */
    
    // Create car dealer
  /*  CarDealer ferrari_Lakeland;

    Car ferrari_spider("Ferrari", "Spider", 2005, 12.3, 0.0);
    Car ferrari_superGT("Ferrari", "Super GT", 2024, 18.3, 0.0);

    // Add cars to dealer inventory.
    ferrari_Lakeland.addCar(my_car);
    ferrari_Lakeland.addCar(ferrari_spider);
    ferrari_Lakeland.addCar(ferrari_superGT);
    
    ferrari_Lakeland.showInventory();

    // print total # of cars, oldest car.
    // ferrari_Lakeland.oldestCar();
    // ferrari_Lakeland.totalCars();

    */

    return 0;
}