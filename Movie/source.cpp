#include <iostream>
#include "header.h"
#include <cstring>

int Movie ::id = 0;

Movie::Movie() : movieid(id++), releaseyear(0)
{
    std::strcpy(title, "ABCD");
    std::strcpy(director, "XYZ");
    std::strcpy(genre, "dramatic");
    tc = GOLD;
}

Movie::Movie(int pubyear, const char *title_,enum TicketCategory t) : movieid(id++), releaseyear(pubyear)
{
    id++;
    strcpy(title, title_);
    tc = t;
}

Movie::Movie(const char *movietitle, const char *moviedirector, int moviereleaseyear, const char *moviegenre) : movieid(id++), releaseyear(moviereleaseyear)
{
    std::strcpy(title, movietitle);
    std::strcpy(director, moviedirector);
    std::strcpy(genre, moviegenre);
}

void Movie::displayDetails() const
{
    std::cout << "\n Movie id is: " << movieid;
    std ::cout << "\nMovie name is: " << title;
    std ::cout << "\nMovie director is: " << director;
    std ::cout << "\nMovie released in the year: " << releaseyear;
    std ::cout << "\nMovie genre is: \n"
               << genre;
    
    switch (tc)
    {
    case 0:
        std::cout<<"\nPrice of your ticket is 1500";
        break;
    case 1:
        std::cout<<"\nPrice of your ticket is 1000";
        break;
    case 2:
        std::cout<<"\nPrice of your ticket is 500";
        break;
    default:
        std::cout << "\nInvlaid choice";
    }
}

void acceptdetails(Movie mv[], int size)
{
    bool flag = false;
    char name[20], director[20], genre[20];
    int year;
    for (int i = 0; i < size; i++)
    {
        flag = true;
        std ::cout << "\nEnter details:\n";
        std ::cout << "\nEnter Movie name:\n";
        std ::cin >> name;
        mv[i].setTitle(name);
        std ::cout << "\nEnter Movie director:\n";
        std ::cin >> director;
        mv[i].setDirector(director);
        std ::cout << "\nEnter Movie year:\n";
        std ::cin >> year;
        mv[i].setReleaseyear(year);
        std ::cout << "\nEnter Movie genre:\n";
        std ::cin >> genre;
        mv[i].setGenre(genre);
        std ::cout << "\nEnter the ticket category 1:Platinum 2:Gold 3:Silver" << std::endl;
        int choice;
        std ::cin >> choice;
        switch (choice)
        {
        case 1:
            mv[i].tc = PLATINUM;
            break;
        case 2:
            mv[i].tc = GOLD;
            break;
        case 3:
            mv[i].tc = SILVER;
            break;
        default:
            std::cout << "Invlaid choice";
        }
    }
    if (flag == false)
    {
        std ::cout << "Not updated";
    }
}


