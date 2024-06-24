#pragma once
#include "Bicycle.h"
class Motorcycle :
    public Bicycle
{
public:
    Motorcycle() : Bicycle() {cout<<"Konstructor moto..." << endl;}
    bool engine = 1;
    void PrintInfo() override { Vehicle::PrintInfo(); cout << "Motorcycle" << endl; }
};

