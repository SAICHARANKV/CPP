#include <iostream>

class Doctor
{
public:
    virtual void checkpatient()
    {
    }
};

class Dentist : public Doctor
{
public:
    void rootc()
    {
        std::cout << "\nWelcome to spend money to Root Canal..\n";
    }
    void checkpatient()
    {
    }
};

class HS : public Doctor
{
public:
    void checkpatient()
    {
    }
};

int main()
{
    Doctor *dc = new HS;
    dc->checkpatient();

    // Type casting
    Dentist *dt = dynamic_cast<Dentist *>(dc); // down cast
    if (dt != 0)
        dt->rootc();
    else
        std::cout << "\nYou are in wrong place...\n";
}