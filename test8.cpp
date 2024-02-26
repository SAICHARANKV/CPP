#include <iostream>

class BankAccount
{
    int accno;
    std::string cname;
    double balance;

public:
    BankAccount(int ano =0, std::string nm = "yash", double b=0)
    {
        accno = ano;
        cname = nm;
        balance = b;
    }
    void display()
    {
        std::cout << accno << " " << cname << " " << balance << std::endl;
    }
};
//  String ===character array ,pointer, std::string

class Factory
{
    BankAccount *b; //Memory on heap
    public:
    Factory()
    {
        b=new BankAccount();
    }
    Factory(int no,std::string nm,double bal)
    {
        b=new BankAccount(no,nm,bal);
    }

    ~Factory()
    {
        delete b;
    }

    BankAccount* operator->() //1st choice -pointer   //2nd choice-arrow operator
    {
        return b;
    }
};
int main()
{
    Factory f1; //Bank account object created
    f1->display();
    return 0;
}