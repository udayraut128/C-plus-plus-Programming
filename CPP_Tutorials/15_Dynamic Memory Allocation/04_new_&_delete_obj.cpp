// Using new and delete with Objects

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width, height;

    Rectangle(int w, int h) : width(w), height(h) {}

    int area()
    {
        return width * height;
    }
};

int main()
{
    // Allocate memory for a Rectangle object
    Rectangle *rect = new Rectangle(10, 20);

    cout << "Area of the rectangle: " << rect->area() << endl;

    delete rect; // Deallocate memory

    return 0;
}

// output
// Area of the rectangle : 200