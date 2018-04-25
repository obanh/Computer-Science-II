//Oscar Banh
//April 16, 2018
//CruiseShip class methods definition

#include "CruiseShip.h"
#include <iostream>
#include <string>
using namespace std;

//constructor that initializes the data members of CruiseShip object
CruiseShip::CruiseShip(string name, string buildYear, int maxPassengers)
            : Ship(name, buildYear)
{
    this->maxPassengers = maxPassengers;
}

//method that assigns a value to maxPassengers
void CruiseShip::setMaxPassengers(int maxPassengers)
{
    this->maxPassengers = maxPassengers;
}

//method that returns the value of maxPassengers
int CruiseShip::getMaxPassengers()
{
    return maxPassengers;
}

//method that redefines base class's print function and outputs ship name and max passengers
void CruiseShip::print()
{
    cout << "Ship name: " << getShipName() << endl;
    cout << "Max Passengers: " << getMaxPassengers() << endl;
}
