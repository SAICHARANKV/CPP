#include <iostream>
#include "header.h"

// :: Scope Resolution
// Every non static member function has [this] pointer.
int main()
{
    std::cout << "\nsize of student class\t" << sizeof(Student) << std::endl;

    /*
    - Allocate Memory.
    - Constructor is called.
    - Indicate data members of that object.
    -
    */

    Student s1; //  Object of Student class / s1 is an instance of the class.
    s1.display();

    //Static functions concept
    s1.showX();


    // C++ wont allow direct intilazation to object instead they can passed as values
    Student s2(2, "Sai", 100);
    s2.display();
}