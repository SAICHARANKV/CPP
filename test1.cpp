#include <iostream>
#include <cstring> // <string> header from cpp
// using namespace std;
// instead of this we nned to add std to every output

// namespace sai
// {
//     // We can write all the functionalities
//     void display()
//     {
//         std::cout << "HI";
//     }
// }

// Reference
/*
int b=20;
int &r=b; //L.H.S and immediately with data type "&" Reference operator
int *p=&b; //R.H.S--"&" Address Operator.
*/

// Function Overloading. //ambiguity error
void fun(int &a) // Pass by Reference //int &a=y
{
    a = 8; // Direct value change in y;
}

// void fun(int m) // Pass by Value
// {
// } //Error

// void fun(int *m) // Pass by Address.
// {
// } //No Error

int main()
{
    int y = 20;
    fun(y);
    std::cout << "y = " << y << std::endl; // value updates immediates

    int n = 10;
    // Memory allocated at run time;
    int *arr = new int[n]; // (int *)malloc(n*sizeof(int));
    char *cptr = new char[20];

    int s1, s2;
    std::cout << "Enter Integers :\n";
    std::cin >> s1 >> s2;
    int sum = s1 + s2;
    std::cout << "Sum is : " << sum << std::endl;

    char str[30] = "Learning cpp at kpit";
    std::cout << "The Length of String is: " << strlen(str) << std::endl;

    delete arr;  // To avoid memory lekage.
    delete cptr; // delete [] cptr; //free entire memory

    return 0;
}