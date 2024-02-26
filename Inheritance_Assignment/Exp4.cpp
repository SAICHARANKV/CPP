#include <iostream>

class student
{
public:
    static int rollno;
    char name[20] = "saicharan";

    virtual void exams()
    {
        std::cout << "The Exams are started\n";
    }

    virtual ~student() {}
};

class engineering : public student
{

public:
    void cpplab()
    {
        std::cout << "id " << rollno << " Name: " << name << " You have C++ Lab Now " << std::endl;
    }
    void exams()
    {
        std::cout << "id " << rollno << " Name: " << name << " You have C++ Marathon " << std::endl;
    }
};

class medical : public student
{
public:
    void anatomylab()
    {
        std::cout << "id " << rollno << " Name: " << name << " You have Anatomy Lab Now " << std::endl;
    }

    void exams()
    {
        std::cout << "id " << rollno << " Name: " << name << " You have Zoology Exam " << std::endl;
    }
};

int student::rollno = 5;

int main()
{
    student *s = new medical;
    s->exams();
    medical *m = dynamic_cast<medical *>(s);
    m->anatomylab();

    student *j = new engineering;
    j->exams();
    engineering *e = dynamic_cast<engineering *>(j);
    e->cpplab();

    delete j;
    delete s;
    // No need to delete m; // The memory was allocated once for s, deleting s is enough
}
