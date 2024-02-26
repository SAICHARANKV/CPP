#include "Emp.h"
// DERVIED CLASS

class salesperson : public Employee
{
    double salesamount, commissionrate;

public:

    double calculatecomission() //special function of salespersonclass
    {
        return (salesamount*commissionrate);
    }

    salesperson()
    {
        std::cout << "\nSalesperson() called ";
        salesamount = 15000;
        commissionrate = 0.05;
    }
    salesperson(int eid, std::string nm, double esal, double samt, double cm)
        : Employee(eid, nm, esal), salesamount(samt), commissionrate(cm)
    {
    }
    ~salesperson()
    {
        std::cout << "\n~Salesperson()...called...\n";
    }

    double caltotalsalary()
    {
        std::cout << "In SP caltotalsalary:\n";
        // return Employee::totalsalary()+salesamount*commissionrate; //One way
        return esalary-esalary*0.3;
    }
    void display()
    {
        Employee::display();
        std::cout << "\nSales amount= "
                  << salesamount
                  << "\nCrate = "
                  << commissionrate
                  << "\n";
    }

    friend std::ostream &operator<<(std::ostream &os, salesperson &sp)
    {
        os << "Sales Amount: " << sp.salesamount << "Comission Rate: " << sp.commissionrate;
        // Employee e = sp; //Object Slicing
        os << static_cast<Employee &>(sp);
        return os;
    }
};