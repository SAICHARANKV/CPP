#include <iostream>
#include <cstring>
class Product
{
    int procode;
    char *name;

public:
    Product()
    {
        procode = 1111;
        name = new char[10];
        strcpy(name, "Laptop ");
    }
    void show()
    {
        std::cout << name;
    }
    ~Product() // Destructor.
    {
        std::cout << "Product Destructor\n";
        delete[] name;
    }
    Product(int code, const char *nm)
    {
        procode = code;
        name = new char[strlen(nm) + 1];
        strcpy(name, nm);
    }
    Product(Product &p) //Copy Constructor 
    //Implemented to avoid dangling pointer.
    {
        // this pointer points to p3.
        procode = p.procode;
        // name=p.name; //Address of p.name overwrites to name
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
    }
};

void f1(Product &p4) // Always use pass by reference.
{
    p4.show();
}

// Dont allow to copy pointer.
// For deep copy - create a own constructor.
class Student
{
    int rollno;

public:
    int *m;

public:
    Student()
    {
        rollno = 1;
        m = new int[2]; // Heap Memory
        m[0] = 0;
        m[1] = 1; // if more than2 use for loop
    }

    Student(int r, int n, int mk[])
    {
        rollno = r;
        m = new int[n];
        for (int i = 0; i < n; i++)
        {
            m[i] = mk[i];
        }
    }

    ~Student() // Destructor
    {
        std::cout << "\nDestructor Called ";
        delete[] m;
        // These gets executed when ever object goes out of scope
    }
};

int main()
{
    Product p1;
    p1.show(); // Laptop

    Product p2(555, "Television ");
    p2.show(); // Telvision

    Product p3(p2);
    p3.show(); // Television

    f1(p2); // Television

    Product *p=new Product;
    delete p;//Avoid Memory lekage //Request to call destructor //If data is in heap section

    Product *pr=new Product[10];
    delete []pr;
    Student s1, s4, s3;
    // delete s1.m; // but m is a private member cant access
    // so destructor called without calling function.

    Student *s2 = new Student();
    // Destructors is not called for pointers.
    delete s2;
}