#ifndef HEADER_H
#define HEADER_H

#include <cstring>
class Student
{
private: // In Default Private
    int rollno;
    char name[30];
    double marks;

    static int x;

public:
    // Getter -Accessor Methods
    // Setters
    void display() const;
    Student();
    void showX();
    // void display();
    //  Default Constructor
    Student(int, const char *, double); // Parameterized Constructor

    int getRollno() const { return rollno; }
    void setRollno(int rollno_) { rollno = rollno_; }

    double getMarks() const { return marks; }
    void setMarks(double marks_) { marks = marks_; }

     int getX() { return x; }
};

#endif // HEADER_H
