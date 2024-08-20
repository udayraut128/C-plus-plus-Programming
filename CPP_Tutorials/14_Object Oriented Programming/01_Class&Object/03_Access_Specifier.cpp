#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    void setDimensions(int w, int h)
    {
        if (w > 0 && h > 0)
        {
            width = w;
            height = h;
        }
        else
        {
            cout << "Invalid dimensions!" << endl;
        }
    }

    int getArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle rect;

    // Set valid dimensions
    rect.setDimensions(10, 5);
    cout << "Area: " << rect.getArea() << endl;

    // Attempt to set invalid dimensions
    rect.setDimensions(-10, 5); // This will trigger an error message

    return 0;
}

// output
// Area : 50 Invalid dimensions !