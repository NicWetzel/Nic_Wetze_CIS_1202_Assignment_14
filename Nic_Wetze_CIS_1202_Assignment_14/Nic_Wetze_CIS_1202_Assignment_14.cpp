// Nic Wetzel
// CIS 1202 501
// November 25, 2021

#include <iostream>
#include <string>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Truck.cpp"


using namespace std;

int main()
{
    string manufacturer;
    int yearBuilt;
    int numDoor;
    int towCapacity;

    cout << "Vehicle Program\n" << endl;

    cout << "\nVehicle: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo();

    cout << "\nCar: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> yearBuilt;

    cout << "Enter the number of doors: ";
    cin >> numDoor;

    Car car(manufacturer, yearBuilt, numDoor);
    car.displayInfo();

    cout << "\nTruck: ";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);

    cout << "Enter the year built: ";
    cin >> yearBuilt;

    cout << "Enter the towing capacity: ";
    cin >> towCapacity;

    Truck truck(manufacturer, yearBuilt, towCapacity);
    truck.displayInfo();

    return 0;
}
