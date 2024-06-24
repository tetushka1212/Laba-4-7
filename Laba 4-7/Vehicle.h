#pragma once
#include <iostream>
using namespace std;
class Vehicle
{
protected:
	int wheels;
public:
	Vehicle(int new_wheels) { this->wheels = new_wheels; }

	virtual ~Vehicle() = default;

	virtual void Ride() { cout << "The vehicle is moving." << endl; }
	virtual void Stop() { cout << "The vehicle has stopped." << endl; }
	virtual void TurnLeft() { cout << "The vehicle turns left." << endl; }
	virtual void TurnRight() { cout << "The vehicle turns right." << endl; }

	virtual void PrintInfo() { cout << "Amount of wheels: " << wheels << endl; };

};

