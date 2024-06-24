#pragma once
#include "Car.h"
class Truck :
    public Car
{
    
public:
    Truck(string new_cargo = " ") : Car() { cout << "Creating a Truck" << endl; this->cargo = new_cargo; }
    string cargo;
    void PrintInfo() override { Vehicle::PrintInfo(); cout << "Truck" << endl; }
};

