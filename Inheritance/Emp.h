#include <iostream>

// Class with virtual function is called a Polymorphic class
// Class without Virtual function is called a Concrete class
// Class with pure virtual function is called as Abstract class.
// BASE CLASS

class Employee
{
protected:
    double esalary;
    // Protected - can be accessed by derived class but can't access main and global functions.

private:
    int empid;
    std::string ename;

    double MA, PTAX, PF;
    void calExpenses() // Helper Functions
    {
        MA = esalary * 0.05;
        PTAX = esalary * 0.04;
        PF = esalary * 0.03;
    }

public:
    Employee()
    { 
        std::cout << "\n Employee()...called...";
        empid = 1;
        ename = "Sai";
        esalary = 60000;
        calExpenses();
    }
    Employee(int eid, std::string nm, double esal)
        : empid(eid), ename(nm), esalary(esal)
    {
        std::cout << "\nEmployee(...)...called\n";

        // empid=eid;
        // ename=nm;
        // esalary=esal;
        calExpenses();
    }

    virtual ~Employee()
    {
        std::cout << "\n~Employee()...called\n";
    }
    virtual void accept()
    {
        std::cout << "\n Enter Id\t";
        std::cin >> empid;
        std::cout << "\n Enter Name\t";
        std::cin >> ename;
        std::cout << "\n Enter Salary\t";
        std::cin >> esalary;
    }
    virtual void display()
    {
        std::cout << "\nEmployee details\n"
                  << empid << " " << ename << " " << esalary;
    }

    virtual double caltotalsalary()
    {
        return esalary + MA - PTAX + PF;
    }

    friend std::ostream &operator<<(std::ostream &os, Employee &e)
    {
        os << "EMPLOYEE";
        os << e.empid << " ";
        os << e.ename << " ";
        os << e.esalary << " ";
        return os; // write defintions in source file only
    }
};