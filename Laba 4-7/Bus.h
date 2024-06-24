#pragma once
#include "Truck.h"
class Bus :
    public Truck
{
    
public:
    Bus(size_t new_capacity= 0 ) : Truck() { cout << "Creating a Bus" << endl; this->capacity = new_capacity; }
    size_t capacity;
    void PrintInfo() override { Vehicle::PrintInfo(); cout << "Bus" << endl; }
};

