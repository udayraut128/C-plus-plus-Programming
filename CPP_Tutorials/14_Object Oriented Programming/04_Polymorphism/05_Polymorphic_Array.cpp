#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
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
    Shape *shapes[2];

    Circle circle;
    Rectangle rectangle;

    shapes[0] = &circle;
    shapes[1] = &rectangle;

    for (int i = 0; i < 2; ++i)
    {
        shapes[i]->draw(); // Calls appropriate draw() based on object type
    }

    return 0;
}

// output
// Drawing Circle
// Drawing Rectangle