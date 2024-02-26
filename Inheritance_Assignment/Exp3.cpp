#include <iostream>

class Doctor
{
public:
    virtual void checkpatient()
    {
        std::cout << "Wanted to check patient" << std::endl;
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
        std::cout << "In Dentist Patient Checklist with virtual" << std::endl;
    }
};

class HS : public Doctor
{
public:
    void checkpatient()
    {
        std::cout << "In Heart Suregon Patient Checklist with virtual" << std::endl;
    }
};

int main()
{
    Doctor *dc = new HS;
    Doctor *dtst = new Dentist;

    dc->checkpatient();

    // Type casting
    Dentist *dt = dynamic_cast<Dentist *>(dc); // down cast
    if (dt != 0)
        dt->rootc();
    else
        std::cout << "You are in wrong place..." << std::endl;

    dtst->checkpatient();

    Dentist *dts = dynamic_cast<Dentist *>(dtst); // down cast
    if (dts != 0)
        dts->rootc();
    else
        std::cout << "\nYou are in wrong place...\n";
}