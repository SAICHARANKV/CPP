#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>

class library
{
    int bookid;
    int year;
    char author[30];
    int *p;

    static int id;

public:
    // Constructors and Destructor
    library();
    library(int, const char *);
    ~library();

    // Member functions
    void print_books();

    // Getter and Setter functions
    int getBookid() const { return bookid; }
    void setBookid(int bookid_) { bookid = bookid_; }

    int getYear() const { return year; }
    void setYear(int year_) { year = year_; } // input -set

    const char *getAuthor() const { return author; }
    void setAuthor(const char *author_) { strncpy(author, author_, sizeof(author)); }

    int *getP() const { return p; }
    void setP(int *p_) { p = p_; }

    // char getAuthor() const { return author; }
    // void setAuthor(char author_) { author = author_; } original
};

void max_year(library[], int n);
void book_details(library[], int);
#endif // HEADER_H
