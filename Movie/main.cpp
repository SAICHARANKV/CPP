#include <iostream>
#include "header.h"

int main()
{
    Movie m1;
   // Movie m2("title", "director", 1992, "genre");

    int n;
    std ::cout << "\n Enter the number of Movies that u want to enter : ";
    std ::cin >> n;

    Movie *mptr = new Movie[n];

    acceptdetails(mptr, n);
    
    for (int i = 0; i < n; i++)
    {
        mptr[i].displayDetails();
    }

    delete[] mptr;
    return 0;
}