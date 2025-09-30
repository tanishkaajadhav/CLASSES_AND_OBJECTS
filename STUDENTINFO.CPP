#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;

public:
    void Input()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
    }

    void Display()
    {
        cout << "Student Name: " << name << "\n";
        cout << "Roll Number: " << roll << "\n";
    }
};

int main()
{
    Student s;
    s.Input();
    s.Display();

    return 0;
}

/*
OUTPUT
Enter Student Name: Rahul
Enter Roll Number: 25
Student Name: Rahul
Roll Number: 25
*/