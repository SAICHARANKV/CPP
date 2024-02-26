#ifndef HEADER_H
#define HEADER_H

class maintainance
{
public:
    int charges[2];

public:
    char model[20];
    int year;
    double cost;

public:
    maintainance();
    maintainance(const char *, int, double, int[]);

    int getYear() const { return year; }
    void setYear(int year_) { year = year_; }

    double getCost() const { return cost; }
    void setCost(double cost_) { cost = cost_; }

    float callavg();

    void show_details() const;
};

void take_details(maintainance[], int);
void highest_cost(maintainance[], int);
void search(maintainance[], int, char *);
float maxavg(maintainance[], int);

#endif // HEADER_H
