#include <iostream>
#include "header.h"

int main()
{
    // Create an instance of library and call print_books
    // library l1;
    // l1.print_books();

    // // Create another instance of library with parameters and call print_books
    // library l2(2022, "Chetan Bhagat");
    // l2.print_books();

    // Ask the user for the number of books
    int n;
    std::cout << "Enter the number of books: ";
    std::cin >> n;

    // Dynamically allocate an array of library objects
    library *lptr = new library[n];

    // Call the function to input details for each book in the array
    book_details(lptr, n);

    // Call print_books to display the details of all books
    for (int i = 0; i < n; i++)
    {
        
        lptr[i].print_books();
    }
    // Max Yeared book
    max_year(lptr, n);

    // Deallocate the dynamically allocated memory
    delete[] lptr;

    return 0;
}
