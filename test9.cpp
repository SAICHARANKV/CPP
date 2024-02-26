// Containment - Object of one class as a data member for another class
//  Kinda nested Structure.
// Composition and Aggregation

#include <iostream>

class Address
{
    // State,city,pincode,country
};

class Student
{
    Address *add; // taken as pointer for every data memeber we need to allocate memory
public:
    Student()
    {
        add = new Address();
    }
};

class Product
{
    Address add;
};

class Employee
{
    Address add;
};

class BankAccount
{
    Address add;
};