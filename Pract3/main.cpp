#include <iostream>
#include "header.h"
int main()
{
    int n;
    std::cin>>n;
    Classroom *c = new Classroom[n];

    takeDetails(c,n);
}