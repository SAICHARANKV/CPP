#include <iostream>

class Vehicle
{
public:
    virtual void drive()
    {
        std::cout << "Vehicle is driving." << std::endl;
    }

    virtual ~Vehicle() {} // Adding a virtual destructor for proper polymorphic behavior
};

class TwoWheeler : public Vehicle
{
public:
    void ride()
    {
        std::cout << "Two-wheeler is riding." << std::endl;
    }

    void wheelie()
    {
        std::cout << "Performing a wheelie on the two-wheeler." << std::endl;
    }
};

class FourWheeler : public Vehicle
{
public:
    void ac()
    {
        std::cout << "Four-wheeler has air conditioning." << std::endl;
    }
    void radio()
    {
        std::cout << "Four-Wheeler has radio feature." << std::endl;
    }
};

int main()
{
    Vehicle *vehicle1 = new TwoWheeler();
    Vehicle *vehicle2 = new FourWheeler();

    // Using dynamic type casting (dynamic_cast) to check and perform operations based on the actual type
    TwoWheeler *bike = dynamic_cast<TwoWheeler *>(vehicle1);
    if (bike)
    {
        bike->drive();
        bike->ride();
        bike->wheelie();
    }
    else
        std::cout << "No Bikes Functions Found" << std::endl;

    FourWheeler *car = dynamic_cast<FourWheeler *>(vehicle2);

    if (car)
    {
        car->drive();
        car->ac();
        car->radio();
    }
    else
        std::cout << "No Cars Functions Found" << std::endl;

    delete vehicle1;
    delete vehicle2;

    return 0;
}
