#include <iostream> //ALL FUNCTIONS DEFINTIONS IN THIS FILE
#include "header.h"
#include <cstring>

// returntype classname::funcame
int Student::x = 10;
int Student::cnt = 500;

void search(Student s[], int r)
{
}
void Student::accept(int n)
{

}
Student::Student(const char *nm, int s[])
{
    rollno = cnt;
    cnt++;
    strcpy(name, nm);
    for (int i = 0; i < 3; i++)
    {
        sub[i] = s[i];
    }
}

float Student::callavg()
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + sub[i];
    }
    return sum / 3.0f;
}

void Student::display() const
{
    std::cout << "Rollno = " << cnt << "\tName = " << name << "\tMarks = " << marks << std::endl;
};

Student::Student()
{
    std::cout << "In Default Constructor()\n";
    rollno = cnt;
    strcpy(name, "AAA");
    marks = 90.55;
    cnt++;
};

Student::Student(const char *nm, double m) : marks(m)
{
    std::cout << "\nIn Student Parameter Constructor()\n";
    rollno = cnt;
    strcpy(name, nm);
    cnt++;
};

void Student::showX()
{
    std::cout << "\n count = " << cnt << std::endl;
}
