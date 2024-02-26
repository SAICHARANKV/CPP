#include <iostream>

class Shape
{
    std::string color;

public:
    Shape()
    {
        color = "black";
    }
    Shape(std::string c)
    {
        color = c;
    }
    void fillcolor()
    {
        std::cout << "\nFilling Color" << std::endl;
    }
    virtual void calarea() = 0; // Pure Virtual Function // Abstract class
};

class circle : public Shape
{
    double radius;

public:
    circle()
    {
        radius = 2;
    }
    circle(double r, std::string c1) : Shape(c1)
    {
        radius = r;
    }
    void calarea()
    {
        std::cout << "\nArea of Circle" << 3.14 * radius * radius << std::endl;
    }
};
int main()
{
    // Shape s; error object creation not possible
    Shape *s = new circle;
    s->fillcolor();
    s->calarea();

    Shape *s1 = new circle(3, "Red");
    s1->calarea();
    s1->fillcolor();
    return 0;
}