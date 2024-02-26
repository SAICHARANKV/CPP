#include <iostream>
#include <cstring>
#include "header.h"

int library::id = 1;

// Constructors and Destructor
library::library() : bookid(id), year(2019), p(nullptr)
{
    id++;
    strcpy(author, "Amogh");
    p = new int[3];
    p[0] = 0;
    p[1] = 22;
    p[2] = 33;
}

library::library(int year_, const char *author_) : bookid(id++), year(year_), p(nullptr)
{
    strncpy(author, author_, sizeof(author));
    p = new int[3];
}

library::~library()
{
    // Add any necessary cleanup code in the destructor
    std::cout << "Destructor\n";
    // delete [] charges;
}

void book_details(library a[], int size)
{
    // Implement the book_details function
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter Details\n";
        std::cout << "Enter Year:\t";
        int y;
        std::cin >> y;
        a[i].setYear(y);
        std::cout << "Enter Author:\t";
        char aut[20];
        std::cin >> aut;
        a[i].setAuthor(aut);
    }
}

// Member functions
void library::print_books()
{
    // Implement the print_books function
    std::cout << "Book Id: ";
    std::cout << bookid << std::endl;
    std::cout << "Year: ";
    std::cout << year << std::endl;
    std::cout << "Author: ";
    std::cout << author << std::endl;
}

void max_year(library a[], int size)
{
    int max = a[0].getYear();
    char s[20];
    strcpy(s, a[0].getAuthor());
    // Implement the max_yeared_book in function
    for (int i = 1; i < size; i++)
    {
        if (max < a[i].getYear())
        {
            max = a[i].getYear();
            strcpy(s, a[i].getAuthor());
        }
    }
    std::cout << "Max Year " << max << " " << s << std::endl;
}
