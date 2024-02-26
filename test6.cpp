// Concept of Overloading in C++

#include <iostream>
class point
{
    int x, y;

public:
    point() { x = y = 0; }
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void display()
    {
        std::cout << "\tx = " << x;
        std::cout << "\ty= " << y;
    };
    // Operator overloading
    point operator+(point &p2)
    {
        point sumobj;
        sumobj.x = this->x + p2.x;
        sumobj.y = this->y + p2.y;
        return sumobj;
    }

    //- operator
    point operator-(point &p3)
    {
        point subobj;
        subobj.x = this->x - p3.x;
        subobj.y = this->y - p3.y;
        return subobj;
    }

    // ==
    bool operator==(point &p2) // Operator<operand>
    {
        // point equalobj;
        if (this->x == p2.x && this->y == p2.y)
            return true;
        else
            return false;
    }

    // !=
    bool operator!=(point &p2) // Operator<operand>
    {
        // point equalobj;
        if (this->x != p2.x && this->y != p2.y)
            return true;
        else
            return false;
    }
    // Pre Increment

    point &operator++()
    {
        std::cout << "\nIn Pre Increment:\n";
        ++x;
        ++y;
        return *this; // returns p1;
    }

    // Post Increment
    point operator++(int)
    {
        std::cout << "\nIn Post Increment:\n";
        point tempobj = *this; // tempobj=p2
        x++;
        y++;
        return tempobj;
    }
};

int main()
{
    point p1(1, 2), p2(1, 2), p3(3, 8), p8(2, 3), p9(1, 1);
    // point p3=p1+p2; //Error in logic itself

    point p4 = p1 + p2 + p3;
    // p1.operator+(p2) function called implicitly
    p4.display();

    // point p3 =p1.add(p2);
    point p5 = p2 - p3;
    p5.display();

    std::cout << "\n"
              << (p1 == p2);

    std::cout << "\t" << (p2 != p3);

    //  p3=sum(p1,p2); //it is called with no object need to declare function globally

    point p6 = ++p8;
    p6.display();

    point p7 = p9++;
    p7.display();
    return 0;
}