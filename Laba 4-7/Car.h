#pragma once
#include "Motorcycle.h"
class Car :
    public Motorcycle
{
public:
    Car() : Motorcycle() { cout << "Creating a Car" << endl; this->wheels = 4; }
    void PrintInfo() override { Vehicle::PrintInfo(); cout << "Car" << endl; }
};

