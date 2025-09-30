#include <iostream>
using namespace std;

class AccessDemo
{
public:
    int pub; 

private:
    int pri; 

protected:
    int pro; 

public:
    void SetValues(int a, int b, int c)
    {
        pub = a;
        pri = b;
        pro = c;
    }

    void Display()
    {
        cout << "Public: " << pub << "\n";
        cout << "Private: " << pri << "\n";
        cout << "Protected: " << pro << "\n";
    }
};

int main()
{
    AccessDemo obj;
    obj.SetValues(10, 20, 30);
    obj.Display();

    return 0;
}

/*
OUTPUT
Public: 10
Private: 20
Protected: 30
*/