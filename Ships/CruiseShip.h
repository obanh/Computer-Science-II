//Oscar Banh
//April 16, 2018
//CruiseShip class definition

#ifndef CRUISESHIP_H
#define CRUISESHIP_H

#include "Ship.h"
#include <string>

class CruiseShip : public Ship
{
public:
    CruiseShip(std::string name, std::string buildYear, int maxPassengers); //constructor that initializes the data members of CruiseShip object
    void setMaxPassengers(int maxPassengers); //method that assigns a value to maxPassengers
    int getMaxPassengers(); //method that returns the value of maxPassengers
    virtual void print(); //method that redefines base class's print function and outputs ship name and max passengers
private:
    int maxPassengers;
};

#endif CRUISESHIP_H
