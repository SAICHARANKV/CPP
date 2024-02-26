#ifndef HEADER_H
#define HEADER_H

#include <cstring>

enum TicketCategory{
    PLATINUM,
    GOLD,
    SILVER
};

class Movie
{
private:

    static int id ;
    int movieid;
    char title[100];
    char director[50];
    int releaseyear;
    char genre[50];
public:
    enum TicketCategory tc;


public:
    // Constructors
    Movie();
    Movie(int,const char *,enum TicketCategory);
    Movie(const char *movietitle, const char *moviedirector, int moviereleaseyear, const char *moviegenre);

    // Function to display movie details
    void displayDetails() const;

    const char *getTitle() const { return title; }
    void setTitle(const char *title_) { strcpy(title, title_); }

    const char *getDirector() const { return director; }
    void setDirector(const char *director_) { strcpy(director, director_); };

    int getReleaseyear() const { return releaseyear; }
    void setReleaseyear(int releaseyear_) { releaseyear = releaseyear_; }

    const char *getGenre() const { return genre; }
    void setGenre(const char *genre_) { strcpy(genre, genre_); }
};

void acceptdetails(Movie[], int);

#endif // HEADER_H
