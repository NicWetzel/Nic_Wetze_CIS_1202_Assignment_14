#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle(string manufacturer, int yearBuilt);
	string getManufacturer();
	void setManufacturer();

	int getYearBuilt();
	void setYearBuilt();
	virtual void displayInfo();
};

#endif