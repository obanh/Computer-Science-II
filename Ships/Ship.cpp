//Oscar Banh
//April 16, 2018
//Ship class methods definition

#include "Ship.h"
#include <iostream>
#include <string>
using namespace std;

//constructor that initializes the data members of Ship object
Ship::Ship(string name, string buildYear)
{
    shipName = name;
    year = buildYear;
}

//method that assigns a value to shipName
void Ship::setShipName(string name)
{
    shipName = name;
}

//method that returns the value of shipName
string Ship::getShipName()
{
    return shipName;
}

//method that assigns a value to year
void Ship::setShipBuildYear(string buildYear)
{
    year = buildYear;
}

//method that returns the value of year
string Ship::getShipBuildYear()
{
    return year;
}

//method that outputs ship name and year build
void Ship::print()
{
    cout << "Ship name: " << shipName << endl;
    cout << "Year build: " << year << endl;
}
