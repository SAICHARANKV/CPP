#include <iostream>
#include <cstring>
class Employee
{
    char empname[30];

public:
    Employee() { strcpy(empname, "AAAAA"); }
    Employee(const char *n) { strcpy(empname, n); }
    void display()
    {
        std::cout << empname << std::endl;
    }

    char &operator[](int index)
    {
        if (!(index >= 0 && index < strlen(empname)))
            throw "Index Out of Bound";

        return empname[index];
    }
};

int main()
{
    Employee e1("Abhishek");
    char ch = e1[0]; // e1.operator[](0) ...function call on right side of =
    std::cout << "ch = " << e1[0] << std::endl;
    e1[1] = 'a'; // e1.operator[](1)='a' ...function call on left side of = (danger allocation)
    // this is allowed only by adding reference in function return by reference.
    e1.display();
}