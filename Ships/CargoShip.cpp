//Oscar Banh
//April 16, 2018
//CargoShip class definition

#include "CargoShip.h"
#include <iostream>
#include <string>
using namespace std;

//constructor that initializes data members of CargoShip object
CargoShip::CargoShip(string name, string buildYear, int capacity)
            : Ship(name, buildYear)
{
    cargoCapacity = capacity;
}

//method that assigns a value to cargoCapacity
void CargoShip::setCapacity(int capacity)
{
    cargoCapacity = capacity;
}

//method that returns the value of cargoCapacity
int CargoShip::getCapacity()
{
    return cargoCapacity;
}

//method that redefines print function of base class and outputs ship name and cargo capacity
void CargoShip::print()
{
    cout << "Ship name: " << shipName << endl;
    cout << "Max Cargo Capacity: " << cargoCapacity << endl;
}
