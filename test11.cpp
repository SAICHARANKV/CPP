#include <iostream>
#include <cstring>

class MyDate
{
    int day;
    int month;
    int year;

public:
    MyDate()
    {
        std::cout << "\nMyDate() called...";
        day = 1;
        month = 1;
        year = 2023;
    }
    MyDate(int d, int m, int y)
    {
        std::cout << "\nMyDate(... , ...) called...";
        day = d;
        month = m;
        year = y;
    }
    friend std::ostream &operator<<(std::ostream &os, const MyDate &m)
    {
        os << m.day << "/" << m.month << "/" << m.year << std::endl;
        return os;
    }
    // 2nd way
    void display()
    {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};
class person // Container class
{
    char name[20];
    MyDate dob; // Contained object

public:
    person(const char *nm, MyDate md) : dob(md)
    {
        std::cout << "\nperson(... , ...) called....";
        strcpy(name, "Gagan");
    }
    person()
    {
        std::cout << "\nPerson() called...";
        strcpy(name, "Gagan");
    }
    friend std::ostream &operator<<(std::ostream &os, const person &pr)
    {
        os << pr.name << pr.dob << std::endl;
        return os;
    }
    void display()
    {
        std::cout << name;
        dob.display();
    }
};

int main()
{
    person p1("Amit", MyDate(2, 3, 2004));
    person p;
    std::cout << p;
    // p.display();

    /*
    MyDate d1,d2;
    std::cout<<d1<<d2;

    */

    return 0;
}