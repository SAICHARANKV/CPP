#include <iostream>

template <class T>

void exchange(T &a, T &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}
// with function defintion should be written in
// header file only as compiler cant access multiple files at a time
int main()
{
    int x = 10, y = 20;
    exchange(x, y);
    std::cout << x << "y=" << y << std::endl;
}