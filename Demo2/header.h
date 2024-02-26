#ifndef HEADER_H
#define HEADER_H

//APPLY HEADER GUARD AND DECLARE ALL DETAILS PUBLIC AND PRIVATE
class Student
{
private: // In Default Private
    int rollno;
    char name[30];
    double marks;
    int sub[3];
    static int cnt;

    static int x;

    public:
        void display()const;
        void showX();
        float callavg();
        void accept(int);
        Student();
        Student(const char *, double);
    public:
        int getRollno() const { return rollno; }
        void setRollno(int rollno_) { rollno = rollno_; }
        Student(const char * ,int []);
        double getMarks() const { return marks; }
        void setMarks(double marks_) { marks = marks_; }
};

#endif // HEADER_H
