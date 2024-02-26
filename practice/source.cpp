#include <iostream>
#include "header.h"

int Flight::count = 0;

Flight::Flight(long int flightNumber, float distance, float fare, int flightObjects)
    : flightObjects(++count)
{
    this->flightNumber = flightNumber;
    this->distance = distance;
    this->fare = fare;
}

void Flight::calculateFuelQuantity()
{
    if (distance <= 10000)
    {
        this->fuel = 5000;
    }
    else if (distance > 10000 && distance <= 20000)
    {
        this->fuel = 11000;
    }
    else if (distance > 20000 && distance <= 30000)
    {
        this->fuel = 22000;
    }
}

void Flight::feedInfo()
{
    do
    {
        std::cout << "Enter the Flight Number: ";
        std::cin >> this->flightNumber;
    } while (flightNumber <= 0);

    do
    {
        std::cout << "Enter the Distance (between 10000 and 30000): ";
        std::cin >> this->distance;
    } while (distance < 10000 || distance > 30000);

    do
    {
        std::cout << "Enter the Fare: ";
        std::cin >> this->fare;
    } while (fare <= 0);
}

void Flight::showInfo()
{
    std::cout << "Flight Number = " << flightNumber << std::endl;
    std::cout << "Distance = " << distance << std::endl;
    std::cout << "Fare = " << fare << std::endl;
    std::cout << "Fuel = " << fuel << std::endl;
}

int Flight::getFlightNumber()
{
    return this->flightNumber;
}
