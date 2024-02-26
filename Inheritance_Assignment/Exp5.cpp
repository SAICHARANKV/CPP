#include <iostream>
#include <cstring>

class training
{
    int num;
    char branch[20];

public:
    virtual void sessions()
    {
        std::cout << "Sessions Started..." << std::endl;
    }

    int getNum() const { return num; }
    void setNum(int num_) { num = num_; }

    const char *getBranch() const { return branch; }
    void setBranch(const char *branch_) { strcpy(branch, branch_); }
};

class offline : public training
{
public:
    void sessions()
    {
        std::cout << "Sessions in Offline Started..." << std::endl;
    }
    void labs()
    {
        std::cout << "Training Num " << getNum() << " With Branch " << getBranch() << " You now have lab sessions proceed to respective labs..." << std::endl;
    }
};

class online : public training
{
public:
    void sessions()
    {
        std::cout << "Sessions in Online Started..." << std::endl;
    }
    void teams()
    {
        std::cout << "Training Num " << getNum() << "With Branch " << getBranch() << " You have respective team meetings...." << std::endl;
    }
};

int main()
{
    online *t = new online;
    offline *t1 = new offline;

    std::cout << "Enter the id for online training: ";
    int onlineNum;
    std::cin >> onlineNum;
    t->setNum(onlineNum);

    std::cout << "Enter the branch for online training: ";
    char onlineBranch[20];
    std::cin >> onlineBranch;
    t->setBranch(onlineBranch);

    std::cout << "Enter the id for offline training: ";
    int offlineNum;
    std::cin >> offlineNum;
    t1->setNum(offlineNum);

    std::cout << "Enter the branch for offline training: ";
    char offlineBranch[20];
    std::cin >> offlineBranch;
    t1->setBranch(offlineBranch);

    t->sessions();
    t1->sessions();

    std::cout << "Online Training Number: " << t->getNum() << ", Branch: " << t->getBranch() << std::endl;
    std::cout << "Offline Training Number: " << t1->getNum() << ", Branch: " << t1->getBranch() << std::endl;

    online *s = dynamic_cast<online *>(t);
    offline *s1 = dynamic_cast<offline *>(t1);

    if (s)
    {
        s->teams();
    }
    else
        std::cout << "You have mapped wrong session" << std::endl;

    if (s1)
    {
        s1->labs();
    }
    else
        std::cout << "You have mapped wrong session" << std::endl;

    delete t;
    delete t1;

    return 0;
}
