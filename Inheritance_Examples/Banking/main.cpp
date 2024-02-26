#include <iostream>
#include "header.h"
int main()
{
    account a;
    int balance;
    std::cin >> balance;
    a.setBalance(balance);
    int amt;
    try
    {
        std::cout << "enter amount to withdraw\n"
                  << std::endl;
        std::cin >> amt;
        std::cout << "Amount remaining\t" << a.withdraw(amt);
    }
    catch (lowbalanceexception obj)
    {
        std::cout << obj.what();
    }
    return 0;
}