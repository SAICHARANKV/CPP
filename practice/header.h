#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

class Flight
{
private:
    static int count;
    int flightObjects;
    long int flightNumber;
    float distance;
    float fuel;
    float fare;

public:
    Flight(long int flightNumber = 0, float distance = 0, float fare = 0, int flightObjects = 0);

    void calculateFuelQuantity();

    void feedInfo();

    void showInfo();

    int getFlightNumber();
};

#endif // HEADER_H
