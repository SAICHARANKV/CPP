#include <iostream>

template <class S>
class sort
{
    S arr[5];
    int size;

public:
    // sort();
    // sort(S[], int);
    void bubblesort(S[],int );
    void display(S[],int);
};

// template <class S>
//  sort<S>::sort()
//  {
//      size = 5;
//      arr[] = {3, 2, 4, 1, 5};
//  }

template <class S>
void sort<S>::bubblesort(S m[],int size)
{

    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (m[j] > m[j + 1])
            {
                int temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }
}

template <class S>
void sort<S>::display(S m[],int size)
{
    // size = sizeof(m[]) / sizeof(m[0]);
    for (int i = 0; i < size; i++)
    {
        std::cout << m[i] << " ";
    }
}

int main()
{
    sort<int> b;
    int a[] = {5, 3, 1, 8, 2};
    b.bubblesort(a,5);
    b.display(a,5);
    return 0;
}
