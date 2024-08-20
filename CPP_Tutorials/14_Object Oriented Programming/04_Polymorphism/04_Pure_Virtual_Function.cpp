// Pure Virtual Functions and Abstract Classes

#include <iostream>
using namespace std;

// Abstract base class
class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Rectangle" << endl;
    }
};

int main()
{
    Shape *shape;
    Circle circle;
    Rectangle rectangle;

    // Pointing base class pointer to derived class object
    shape = &circle;
    shape->draw(); // Calls Circle's draw()

    shape = &rectangle;
    shape->draw(); // Calls Rectangle's draw()

    return 0;
}

// output
// Drawing Circle
// Drawing Rectangle