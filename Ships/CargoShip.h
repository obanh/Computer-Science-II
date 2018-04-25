//Oscar Banh
//April 16, 2018
//CargoShip class methods definition

#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include <string>
#include "Ship.h"

class CargoShip : public Ship
{
public:
    CargoShip(std::string name, std::string buildYear, int capacity); //constructor that initializes data members of CargoShip object
    void setCapacity(int capacity); //method that assigns a value to cargoCapacity
    int getCapacity(); //method that returns the value of cargoCapacity
    virtual void print(); //method that refines print function of base class and outputs ship name and cargo capacity
private:
    int cargoCapacity;
};
#endif // CARGOSHIP_H
