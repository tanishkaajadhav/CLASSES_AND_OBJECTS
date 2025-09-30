#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    void Input()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    int Area()
    {
        return length * width;
    }

    void Display()
    {
        cout << "Area of Rectangle: " << Area() << "\n";
    }
};

int main()
{
    Rectangle r;
    r.Input();
    r.Display();

    return 0;
}

/*
OUTPUT
Enter length: 10
Enter width: 5
Area of Rectangle: 50

*/