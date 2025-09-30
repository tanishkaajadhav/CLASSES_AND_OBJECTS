#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    int year;

public:
    void Input()
    {
        cout << "Enter Car Brand: ";
        cin >> brand;
        cout << "Enter Manufacturing Year: ";
        cin >> year;
    }

    void Display()
    {
        cout << "Car Brand: " << brand << "\n";
        cout << "Manufacturing Year: " << year << "\n";
    }
};

int main()
{
    Car c;
    c.Input();
    c.Display();

    return 0;
}

/*
OUTPUT
Enter Car Brand: Toyota
Enter Manufacturing Year: 2020
Car Brand: Toyota
Manufacturing Year: 2020
*/