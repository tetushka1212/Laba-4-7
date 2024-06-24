#pragma once
#include "Vehicle.h"
class Bicycle :
    public Vehicle
{
public:
    Bicycle() : Vehicle(2) { cout << "Konstructor bicycle..." << endl; }
    void PrintInfo() override { Vehicle::PrintInfo(); cout << "Bicycle" << endl; }
};

