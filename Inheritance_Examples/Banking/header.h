#include <iostream>
#include <cstring>

class lowbalanceexception : public std::exception
{
    char message[100];

public:
    lowbalanceexception();
    lowbalanceexception(const char *msg);
    char *what();
};
class account
{
    int balance;

public:
    account();
    int withdraw(int amount);

    int getBalance() const { return balance; }
    void setBalance(int balance_) { balance = balance_; }
};
