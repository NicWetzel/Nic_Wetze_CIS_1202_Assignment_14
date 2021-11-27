#ifndef TRUCK_CPP
#define TRUCK_CPP
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

Truck::Truck(string m, int y, int t) : towCapacity(t), Vehicle(m, y)
{

}

int Truck::getTowCapacity()
{
	return towCapacity;
}

void Truck::setTowCapacity(int t)
{
	towCapacity = t;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towCapacity << endl;
}

#endif
