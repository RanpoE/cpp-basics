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

    void display()
    {
        cout << "Car model " << model << " year " << year << endl;
    }
};

class ElectricCar : public Car
{
public:
    int batteryCap;

    ElectricCar(string m, int y) : Car(m, y) {}

    void display()
    {
        Car::display();
        cout << "Battery capacity is " << batteryCap << " percent." << endl;
    }
};

int main()
{

    // Car car1;

    // car1.model = "Toyota";
    // car1.year = 1986;

    Car car1("Toyota", 1984);

    ElectricCar car2("Telsa", 2024);
    
    car2.batteryCap = 98;

    car1.display();

    car2.display();

    car1.drive();

    car2.drive();

    return 0;
}