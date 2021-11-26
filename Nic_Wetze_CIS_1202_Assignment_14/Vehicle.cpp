#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Vehicle:: Vehicle(string manufacturer, int yearBuilt)
{
	manufacturer = manufacturer;
	yearBuilt = yearBuilt;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

void Vehicle::setManufacturer()
{
	manufacturer = manufacturer;
}

int Vehicle::getYearBuilt()
{
	return yearBuilt;
}

void Vehicle::setYearBuilt()
{
	yearBuilt = yearBuilt;
}

void Vehicle::displayInfo()
{
	cout << "Vehicle: " << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}