#include <iostream>
// template - is general purpose programming tool
// same algorithm can be used for different data types
// templates are more type safe at  compile time
// templates bring reusability of code.

template <class T>
class cStack // It is a template class
{
    int top, size;
    T *arr;

public:
    cStack();
    cStack(int);
    bool isFull();
    bool isEmpty();
    void push(T);
    T pop();  // returns and removes top element
    T peek(); // returns top element
};

template <class T>
T cStack<T>::pop()
{
    if (isEmpty())
    {
        throw " stack underflow ";
    }

    return arr[top--];
}

template <class T>
T cStack<T>::peek()
{
    if (isEmpty())
    {
        throw " stack underflow ";
    }

    return arr[top];
}

template <class T>
bool cStack<T>::isEmpty()
{
    return top == -1;
}

template <class T>
void cStack<T>::push(T ele)
{
    if (isFull())
        throw "stack overflow";

    std::cout << "\n push ele";
    arr[++top] = ele;
}

template <class T>
bool cStack<T>::isFull()
{
    return top == size - 1;
}

template <class T>
cStack<T>::cStack()
{
    top = -1;
    size = 2;
    arr = new T[size];
}

template <class T>
cStack<T>::cStack(int s)
{
    top = -1;
    size = s;
    arr = new T[size];
}

class Employee
{
    std::string name;
    int salary;

public:
    Employee() {}
    Employee(std::string n, int s) : name(n), salary(s) {}
    void display()
    {
        std::cout << " \n name =" << name << " salary = " << salary << std::endl;
    }
};

int main()
{
    cStack<int> s1;

    try
    {
        s1.push(10);
        s1.push(20);
        s1.push(30);
    }
    catch (const char *msg)
    {
        std::cout << "\n"
                  << msg << "\n";
    }
    catch (...) // generic handler
    {
        std::cout << "\n Some error ";
    }

    try
    {
        std::cout << "\n " << s1.pop();
        std::cout << "\n " << s1.pop();
        std::cout << "\n " << s1.pop();
    }
    catch (const char *msg)
    {
        std::cout << msg << "\n";
    }

    cStack<float> s2;

    try
    {
        s2.push(10.77f);
        s2.push(20.66f);
        s2.push(30.77f);
    }
    catch (const char *msg)
    {
        std::cout << "\n"
                  << msg << "\n";
    }
    catch (...) // generic handler
    {
        std::cout << "\n Some error ";
    }

    try
    {
        std::cout << "\n " << s2.pop();
        std::cout << "\n " << s2.pop();
        std::cout << "\n " << s2.pop();
    }
    catch (const char *msg)
    {
        std::cout << msg << "\n";
    }

    cStack<Employee> s3;
    Employee e1("Jay", 30000), e2("Hitesh", 78000), e3("Isha", 75000);

    s3.push(e1);
    s3.push(e2);

    Employee e = s3.pop();
    e.display();
    e = s3.pop();
    e.display();
}