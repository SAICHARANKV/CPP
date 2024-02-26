#include <iostream>

class cStack
{
    int top, size;
    int *arr;

public:
    cStack();
    cStack(int);
    bool isFull();
    bool isEmpty();
    void push(int);
    int pop();  // returns and removes top element
    int peek(); // returns top element
};
int cStack::pop()
{
    if (isEmpty())
    {
        throw " stack underflow ";
    }

    return arr[top--];
}
int cStack::peek()
{
    if (isEmpty())
    {
        throw " stack underflow ";
    }

    return arr[top];
}
bool cStack::isEmpty()
{
    return top == -1;
}
void cStack::push(int ele)
{
    if (isFull())
        throw "stack overflow";

    std::cout << "\n push ele";
    arr[++top] = ele;
}
bool cStack::isFull()
{
    return top == size - 1;
}

cStack::cStack()
{
    top = -1;
    size = 2;
    arr = new int[size];
}
cStack::cStack(int s)
{
    top = -1;
    size = s;
    arr = new int[size];
}

int main()
{
    cStack s1;

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
}