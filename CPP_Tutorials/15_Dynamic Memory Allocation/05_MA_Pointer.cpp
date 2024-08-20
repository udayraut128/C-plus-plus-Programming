#include <iostream>
#include <memory>
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
    // Use unique_ptr to manage memory automatically
    unique_ptr<Rectangle> rect = make_unique<Rectangle>(10, 20);

    cout << "Area of the rectangle: " << rect->area() << endl;

    // No need to delete, unique_ptr will handle it automatically

    return 0;
}

// output
// Area of the rectangle : 200