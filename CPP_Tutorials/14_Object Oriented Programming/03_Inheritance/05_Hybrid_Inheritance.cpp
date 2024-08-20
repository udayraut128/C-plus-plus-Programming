#include <iostream>
using namespace std;

// Base class 1
class Engine
{
public:
    void start()
    {
        cout << "Engine started!" << endl;
    }
};

// Base class 2
class Vehicle
{
public:
    void accelerate()
    {
        cout << "Vehicle accelerating!" << endl;
    }
};

// Derived class 1
class Car : public Engine
{
public:
    void honk()
    {
        cout << "Car honking!" << endl;
    }
};

// Derived class 2
class SportsCar : public Car, public Vehicle
{
public:
    void turboBoost()
    {
        cout << "Turbo boost activated!" << endl;
    }
};

int main()
{
    SportsCar sc;
    sc.start();      // Inherited from Engine
    sc.accelerate(); // Inherited from Vehicle
    sc.honk();       // Inherited from Car
    sc.turboBoost(); // Defined in SportsCar
    return 0;
}

// output
// Engine started!
// Vehicle accelerating!
// Car honking!
// Turbo boost activated!