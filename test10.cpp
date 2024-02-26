#include <iostream>
#include <string.h>
enum HOBBIES
{
    READING = 0,
    DANCING,
    TRAVELLING
};
class person
{
    char name[20];
    enum HOBBIES hb;

public:
    person()
    {
        strcpy(name, "Joy");
        hb = READING;
    }
    person(const char* nm,enum HOBBIES h)
    {
        strcpy(name,nm);
        hb=h;
    }
    void accept()
    {
        std::cout << "\n Enter Name";
        std::cin >> name;
        std::cout << "\n Enter Hobby 0-Reading, 1- Dancing,2-Travelling";
        int h;
        std::cin >> h;
        switch (h)
        {
        case 0:
            hb = READING;
            break;
        case 1:
            hb = DANCING;
            break;
        case 2:
            hb = TRAVELLING;
            break;
        }
    }

    void display()
    {
        std::cout<<"\n name  "<<name;
        std::cout<<"\n Hobbies  ";
        switch(hb)
        {
            case 0:
            std::cout<<"READING";
            break;
        case 1:
            std::cout<<"DANCING";
            break;
        case 2:
            std::cout<<"TRAVELLING";
            break;
        }
    }
};
int main()
{
    person p1;
    p1.accept();
    p1.display();
    return 0;
}