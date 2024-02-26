#include <iostream>
class device
{
public:
    virtual void switchon()
    {
        std::cout << "\n...Switching on the device..." << std::endl;
    }
    virtual void switchoff()
    {
        std::cout << "\n...Switching off the device..." << std::endl;
    }
    virtual ~device() {}
};

class mobile : public device
{
    void phone(long int n)
    {

        std::cout << "Your Dailing number:\t" << n << std::endl;
    }
};

class washingmachine : public device
{
public:
    void mode()
    {
        std::cout << "Washing machine mode on" << std::endl;
    }

    void spinanddry()
    {
        std::cout << "Spin and Dry mode switched on" << std::endl;
        int i = 10;
        while (i > 0)
        {
            std::cout << i << "\t";
            i--;
        }
        std::cout << "\nSpin and Dry mode switched off" << std::endl;
    }
};
class tv : public device
{
public:
    void channel()
    {
        std::cout << "Changing channel Now..." << std::endl;
    }
    void switchon()
    {
        std::cout << "\n...Switching on the TV..." << std::endl;
    }

    void switchoff()
    {
        std::cout << "\n...Switching on the TV..." << std::endl;
    }
};

int main()
{

    device *d = new washingmachine;
    d->switchon();
    // d->channel(); //we cannot access directly.
    washingmachine *dt = dynamic_cast<washingmachine *>(d); // down cast
    if (dt != 0)
    {
        dt->spinanddry();
        dt->switchoff();
    }
    else
        std::cout << "Wrong device mapped" << std::endl;
}