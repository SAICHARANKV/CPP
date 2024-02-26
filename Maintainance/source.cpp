#include <iostream>
#include "header.h"
#include <cstring>

// Taking Details
void take_details(maintainance a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter Details of Vehicle " << i + 1 << "\n";
        std::cout << "Enter Model \t";
        std::cin >> a[i].model;
        std::cout << "Enter Year \t";
        std::cin >> a[i].year;
        std::cout << "Enter Cost of Vehicle \t";
        std::cin >> a[i].cost;
        std::cout << "Enter 2 charges\t";
        for (int j = 0; j < 2; j++)
        {
            std::cin >> a[i].charges[j];
        }
    }
}
// Printing Details
void maintainance::show_details() const
{
    std::cout << "Model: " << model << " Year: " << year << " Cost: " << cost << "\n";
    std::cout << "Charges: " << charges[0] <<"\t"<<charges[1];
}

// Max Vehicle cost function
void highest_cost(maintainance a[], int size)
{
    int highest = a[0].cost;
    for (int i = 1; i < size; i++)
    {
        if (highest < a[i].cost)
            highest = a[i].cost;
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i].cost == highest)
            std::cout << "The Highest Cost Vehicle is\t" << a[i].model << " With year: " << a[i].year << "and Cost: " << a[i].cost << std::endl;
    }
}
// Calling Function
float maintainance::callavg()
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + charges[i];
    }
    return sum / 3.0f;
}

// Max Avg Function
float maxavg(maintainance s[], int size)
{
    float avg[size];
    for (int i = 0; i < size; i++)
    {
        avg[i] = s[i].callavg();
        // std::cout << "Average " << i << " = " << avg[i];
    }

    float max = avg[0];
    for (int i = 1; i < size; i++)
    {
        if (avg[i] > max)
        {
            max = avg[i];
        }
    }
    // std::cout << "\n Max Average among all: " << max<<std::endl;
    return max;
}

// Search Function
void search(maintainance a[], int size, char *element)
{
    int flag = 1;
    for (int i = 0; i < size; i++)
    {
        if ((strcmp(a[i].model, element)) == 0)
        {
            std::cout << "The Model Found in class i.e.," << a[i].model
                      << " With year: " << a[i].year
                      << "and Cost of: "
                      << a[i].cost << std::endl;
            flag = 0;
        }
    }
    if (flag != 0)
        std::cout << "Sorry!!...No Model Found\n";
}

// Constructors - Default
maintainance::maintainance()
{
    // std::cout << "Default Values\n";
    strcpy(model, "BMW");
    year = 2023;
    cost = 250000;
    charges[0] = 2000;
    charges[1] = 1000;
}

// Constructors - Parameter
maintainance::maintainance(const char *m, int y, double d, int *a) : year(y), cost(d)
{
    // std::cout << "Parameter Values\n";
    strcpy(model, m);
    charges[0] = a[0];
    charges[1] = a[1];
}
