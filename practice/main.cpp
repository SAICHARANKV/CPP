// main.cpp

#include "header.h"

int main()
{
    const int MAX_OBJECTS = 100;
    Flight *f1 = new Flight[MAX_OBJECTS];
    int option = -1;
    static int count = 0;

    do
    {
        std::cout << "-----------WELCOME------------" << std::endl;
        std::cout << "Choose an Option from Below" << std::endl;
        std::cout << "1 - To Add Flight Details" << std::endl;
        std::cout << "2 - Display Current Flight Details" << std::endl;
        std::cout << "3 - Search for a Flight" << std::endl;
        std::cout << "4 - To Display All Flight Objects" << std::endl;
        std::cout << "5 - QUIT" << std::endl;
        std::cin >> option;

        switch (option)
        {
        case 1:
        {
            ++count;
            f1[count].feedInfo();
            f1[count].calculateFuelQuantity();
            break;
        }

        case 2:
        {
            f1[count].showInfo();
            break;
        }

        case 3:
        {
            int temp = -1;
            std::cout << "Enter the Flight Number to Search: ";
            std::cin >> temp;
            for (int i = 0; i < count; i++)
            {
                if (f1[i].getFlightNumber() == temp)
                {
                    f1[i].showInfo();
                }
            }
            break;
        }

        case 4:
        {
            for (int i = 1; i <= count; i++)
            {
                f1[i].showInfo();
            }
            break;
        }

        case 5:
            // Quit the program
            break;

        default:
            std::cout << "Invalid option. Please choose again." << std::endl;
            break;
        }

    } while (option != 5);

    delete[] f1;

    return 0;
}
