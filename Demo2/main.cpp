#include <iostream>
#include "header.h"

float maxavg(Student s[], int size)
{
    float avg[size];
    for (int i = 0; i < size; i++)
    {
        avg[i] = s[i].callavg();
        // std::cout << "Average " << i << " = " << avg[i];
    }

    float max = avg[0];
    for (int i = 1; i < size; i++)
    {
        if (avg[i] > max)
        {
            max = avg[i];
        }
    }
    // std::cout << "\n Max Average among all: " << max<<std::endl;
    return max;
}

void addrecord(Student s[], int index)
{
    s[index].accept(index);
}

void totalrecord(Student s[], int totalrecord)
{
    int r=4;
    /*enter roll num */
    bool flag=false;
    for(int i=0;i<totalrecord;i++)
    {
        if(s[i].getRollno()==r)
        {
            std::cout<<"found";
            flag=true;
            break;
        }
    }
    
    if(flag==false)
    {
        std::cout<<"Not found an element.";
    }
}

void searchrecord(Student s[], int totalrecord)
{
    for(int i=0;i<totalrecord;i++)
    {
        s[i].display();
    }
    
}
int main()
{
    int m1[3] = {90, 90, 90};
    int m2[3] = {80, 80, 80};
    int m3[3] = {70, 70, 70};
    int m4[3] = {60, 60, 60};
    Student s[4] = {{"sai", m1}, {"hi", m2}, {"bye", m3}, {"bye2", m4}};
    std::cout << "Max Avg: " << maxavg(s, 4) << std::endl;

    Student s1;
    s1.display();

    Student s2("AAA", 65);
    s2.display();

    Student s3("BBB", 90);
    s3.display();

    Student s4;
    s4.display();

    // Dynamic allocation
    Student *sp = new Student;
    int n = 100;
    Student *sp1 = new Student[n];
    int cr = 0;
    /*while(1)
    switch(ch)
        case 1:
            if(cr<5)
                //take one record;keep count too sp1[cr].accept()
                //addrecord(sp1,cr);
                //cr++;
            else 
            //memory full
        case 2:
        if(cr>0)
        //show records showrecord(sp1,cr);
        else
        //No record to show.
    */

    delete[] sp; // To avoid memory lekage
    delete[] sp1;
}