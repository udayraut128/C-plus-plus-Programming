#include <iostream>
using namespace std;

class Rectangle
{
    int width;
    int height;

public:
    void setDimensions(int w, int h)
    {
        width = w;
        height = h;
    }

    int getArea()
    {
        return width * height;
    }

    int getPerimeter()
    {
        return 2 * (width + height);
    }
};

int main()
{
    Rectangle rect1, rect2; // Create two objects of Rectangle

    // Set dimensions for rect1
    rect1.setDimensions(10, 5);
    cout << "Area of rect1: " << rect1.getArea() << endl;
    cout << "Perimeter of rect1: " << rect1.getPerimeter() << endl;

    // Set dimensions for rect2
    rect2.setDimensions(8, 4);
    cout << "Area of rect2: " << rect2.getArea() << endl;
    cout << "Perimeter of rect2: " << rect2.getPerimeter() << endl;

    return 0;
}

// output
// Area of rect1: 50
// Perimeter of rect1: 30
// Area of rect2: 32
// Perimeter of rect2: 24