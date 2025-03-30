#include <iostream>
using namespace std;

class Car
{
public:
    string model;
    int year;

    // Destructuring
    ~Car()
    {
        cout << "Car constructor was called for model " << model << endl;
    }

    // Constructor
    Car(string m, int y)
    {
        model = m;
        year = y;
    }

    void drive()
    {
        cout << "This " << model << " is driving. \n";
    }
};

class ElectricCar : Car
{
public:
    int batteryCap;
};

int main()
{

    // Car car1;

    // car1.model = "Toyota";
    // car1.year = 1986;

    Car car1("Toyota", 1984);

    car1.drive();

    return 0;
}