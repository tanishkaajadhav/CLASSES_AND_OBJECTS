(a) ACCESS SPECIFIER – SPECIFIERACCESS.CPP

AIM:
To demonstrate the use of different access specifiers (public, private, protected) in C++ classes.

APPARATUS:
Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console.

THEORY:
Access specifiers in C++ define the scope and accessibility of data members and methods.

public: accessible everywhere.

private: accessible only within the class.

protected: accessible within the class and its derived classes.

ALGORITHM:

Start the program and include <iostream>.

Define a class AccessDemo with public, private, and protected members.

Create public methods to set and display values.

In main(), create an object of the class.

Call SetValues() and Display().

End the program.

CONCLUSION:
The program successfully demonstrates different access specifiers in C++ and their scope.

(b) METHOD INSIDE AND OUTSIDE CLASS – METHODINOUTCLASS.CPP

AIM:
To demonstrate defining methods inside and outside a class in C++.

APPARATUS:
Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console.

THEORY:
Methods in C++ classes can be defined either:

Inside the class definition (implicitly inline).

Outside the class using the :: scope resolution operator.

ALGORITHM:

Start the program and include <iostream>.

Define a class MethodDemo with two methods.

Define InsideClass() inside the class.

Declare OutsideClass() in the class and define it outside using ClassName::MethodName.

In main(), create an object and call both methods.

End the program.

CONCLUSION:
The program successfully demonstrates defining methods both inside and outside the class in C++.

(c) STUDENT INFORMATION – STUDENTINFO.CPP

AIM:
To write a C++ program to input and display student information using classes and objects.

APPARATUS:
Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console.

THEORY:
Classes in C++ allow encapsulating related data and functions.
In this program, Student class stores name and roll number, and methods are used for input and output.

ALGORITHM:

Start the program and include <iostream>.

Define a class Student with private data members name and roll.

Provide public methods Input() and Display().

In main(), create an object s.

Call s.Input() to take details from the user.

Call s.Display() to print the details.

End the program.

CONCLUSION:
The program successfully demonstrates the use of a class to store and display student details.

(d) CAR DETAILS – CARDETAILS.CPP

AIM:
To write a C++ program to input and display car details using classes and objects.

APPARATUS:
Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console.

THEORY:
Classes in C++ allow creating user-defined types.
The Car class is used to encapsulate attributes such as brand and year, with methods for input and display.

ALGORITHM:

Start the program and include <iostream>.

Define a class Car with private members brand and year.

Create public methods Input() and Display().

In main(), create an object c.

Call c.Input() to enter details.

Call c.Display() to show details.

End the program.

CONCLUSION:
The program successfully demonstrates the use of a class to input and display car information.

(e) RECTANGLE AREA – RECTANGLEAREA.CPP

AIM:
To calculate the area of a rectangle using classes and objects in C++.

APPARATUS:
Laptop with C++ compiler (MinGW), Text Editor / IDE (VS Code), Terminal/Console.

THEORY:
Encapsulation in C++ allows grouping data (length, width) and behavior (area calculation) inside a class.
The Rectangle class computes the area by multiplying length and width.

ALGORITHM:

Start the program and include <iostream>.

Define a class Rectangle with private members length and width.

Provide methods Input(), Area(), and Display().

In main(), create an object r.

Call r.Input() to enter dimensions.

Call r.Display() to show the area.

End the program.

CONCLUSION:
The program successfully calculates the area of a rectangle using a class in C++.
