// Classroom.h
#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
#include <string>

class Classroom {
private:
    std::string className;
    int capacity;
    bool projectorAvailable;

public:
    // Constructors
    Classroom();
    Classroom(const std::string& name, int cap, bool projector);
    // Destructor
    ~Classroom();


    // Function to display classroom details
    void displayDetails() const;

    std::string getClassName() const { return className; }
    void setClassName(const std::string &className_) { className = className_; }

    int getCapacity() const { return capacity; }
    void setCapacity(int capacity_) { capacity = capacity_; }
};
    // Function to set classroom details
    void takeDetails(Classroom a[],int n);

#endif // CLASSROOM_H
