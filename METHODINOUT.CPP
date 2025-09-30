#include <iostream>
using namespace std;

class MethodDemo
{
public:
    void InsideClass()
    {
        cout << "This method is defined inside the class\n";
    }

    void OutsideClass();
};

void MethodDemo::OutsideClass()
{
    cout << "This method is defined outside the class\n";
}

int main()
{
    MethodDemo obj;
    obj.InsideClass();
    obj.OutsideClass();

    return 0;
}

/*
OUTPUT
This method is defined inside the class
This method is defined outside the class
*/