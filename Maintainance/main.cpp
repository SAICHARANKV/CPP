#include <iostream>
#include "header.h"

int main()
{

    maintainance a1;
    a1.show_details();
    int m[2];
    m[0]=6000;
    m[1]=3333;
    maintainance a2("BENZ", 2022, 100000,m);
    a2.show_details();

    // Custom Inputs
    int n;
    std::cout << "\nEnter No of Documents:\n";
    std::cin >> n;
    maintainance a[n];
    take_details(a, n);
    for (int i = 0; i < n; i++)
    {
        a[i].show_details();
    }

    highest_cost(a, n);

    char *s;
    std::cout << "Enter Model to search:\n";
    std::cin >> s;
    search(a, n, s);
}