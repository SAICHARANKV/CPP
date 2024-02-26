#include <iostream>
#include <cstring>

class lowbalanceexception : public std::exception
{
    char message[100];

public:
    lowbalanceexception()
    {
        strcpy(message, "Minimum Balance need to be 5000\n");
    }
    lowbalanceexception(const char *msg)
    {
        strcpy(message, msg);
    }
    char *what()
    {
        return message;
    }
};
class account
{
    int balance;

public:
    account()
    {
        balance = 5000;
    }
    int withdraw(int amount)
    {
        if (balance - amount < 5000)
        {
            throw lowbalanceexception("Minimum balance should be 5000/-\n");
        }
        return balance - amount;
    }

    int getBalance() const { return balance; }
    void setBalance(int balance_) { balance = balance_; }
};

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