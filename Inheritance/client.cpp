#include <iostream>
#include "salesperson.h"

int main()
{

    // Employee *p = new Employee;
    //  salesperson s1;
    // Employee e1= &s1;
    // Pointer of one object of one class to another object of another class.
    
    Employee *eptr = new salesperson(11, "Jay", 45000, 12000, 0.2);
    std::cout << eptr->caltotalsalary();
    eptr->display();
    salesperson *sp = dynamic_cast<salesperson *>(eptr); // downcast
    sp->calculatecomission();
    // Employee e1;
    // e1.salary=100000;
    // protected is not accessible in main function

    // Employee e1;
    // Employee e2(500,"Ravi",300000);
    // std::cout<<"\nEmployee Salary:"<<e2.totalsalary(); //312000 output

    // salesperson sp;
    // std::cout << "Total Salary: " << sp.totalsalary(); // 62400 output
    // sp.display();
    // std::cout<<sp; //Instead of sp.display() as we overloaded sp cout
    delete eptr;
    return 0;
}