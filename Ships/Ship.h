//Oscar Banh
//April 16, 2018
//Ship class definition

#ifndef SHIP_H
#define SHIP_H

#include <string>
class Ship
{
public:
    Ship(std::string name, std::string buildYear); //constructor that initializes the data members of Ship object
    void setShipName(std::string name); //method that assigns a value to shipName
    std::string getShipName(); //method that returns the value of shipName
    void setShipBuildYear(std::string buildYear); //method that assigns a value to year
    std::string getShipBuildYear(); //method that returns the value of year
    virtual void print(); //method that outputs ship name and year built
protected:
    std::string shipName;
    std::string year;

};
#endif // SHIP_H
