#pragma once

#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Truck : public Vehicle
{
private:
	int towCapacity;
public:
	Truck(string manufacturer, int yearBuilt, int towCapacity);

	int getTowCapacity();
	void setTowCapacity();
	void displayInfo();
};


#endif
