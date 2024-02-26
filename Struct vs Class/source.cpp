#include <iostream>
#include "header.h"
#include <cstring>

// returntype classname::funcame
int Student::x=10;
void Student::display() const
{
    std::cout << "Rollno = " << rollno << " Name = " << name << " Marks = " << marks;
}

// Function Overloading
// Student::Student(int r, const char *nm, double marks) // r,nm,m are local variables.
Student::Student(int r, const char *nm, double m) : rollno(r), marks(m)
{
    std::cout << "\nIn Student Parameter Constructor()\n";
    // rollno = r;
    strcpy(name, nm);
    // this->marks = marks; // To remove Shadowing Effect.
    // m = marks; //No error but garabage value is assigned we lost data
}

Student::Student()
{
    std::cout << "In Student Constructor()\n";
    rollno = 1;
    strcpy(name, "AAA");
    marks = 90.55;
};

void Student::showX()
{
    std::cout << "\n X = " << x << std::endl;
}
