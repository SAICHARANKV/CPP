#include <iostream>
#include "header.h"
lowbalanceexception::lowbalanceexception()
{
    strcpy(message, "Minimum Balance need to be 5000\n");
}
lowbalanceexception::lowbalanceexception(const char *msg)
{
    strcpy(message, msg);
}
char *lowbalanceexception::what()
{
    return message;
}

account::account()
{
    balance = 5000;
}
int account::withdraw(int amount)
{
    if (balance - amount < 5000)
    {
        throw lowbalanceexception("Minimum balance should be 5000/-\n");
    }
    return balance - amount;
}