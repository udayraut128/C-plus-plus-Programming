#include <iostream>
using namespace std;

class Rectangle
{
    int width;
    int height;

public:
    // Constructor
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
        cout << "Rectangle created with dimensions " << width << "x" << height << endl;
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Rectangle destroyed." << endl;
    }

    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect(10, 5); // Constructor is called automatically
    cout << "Area: " << rect.getArea() << endl;

    // Destructor is called automatically when rect goes out of scope
    return 0;
}

// output
// Rectangle created with dimensions 10x5
// Area: 50
// Rectangle destroyed.