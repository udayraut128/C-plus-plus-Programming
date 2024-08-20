#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w)
    {
        if (l > 0 && w > 0)
        {
            length = l;
            width = w;
        }
        else
        {
            length = width = 0.0;
            cout << "Length and width must be positive. Values set to 0." << endl;
        }
    }

    // Setter for length
    void setLength(double l)
    {
        if (l > 0)
        {
            length = l;
        }
        else
        {
            cout << "Length must be positive!" << endl;
        }
    }

    // Setter for width
    void setWidth(double w)
    {
        if (w > 0)
        {
            width = w;
        }
        else
        {
            cout << "Width must be positive!" << endl;
        }
    }

    // Getter for length
    double getLength() const
    {
        return length;
    }

    // Getter for width
    double getWidth() const
    {
        return width;
    }

    // Method to calculate area
    double calculateArea() const
    {
        return length * width;
    }

    // Method to calculate perimeter
    double calculatePerimeter() const
    {
        return 2 * (length + width);
    }
};

int main()
{
    // Create a Rectangle object
    Rectangle rect(10.0, 5.0);

    // Output initial dimensions
    cout << "Length: " << rect.getLength() << ", Width: " << rect.getWidth() << endl;

    // Calculate and output area and perimeter
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    // Change the dimensions
    rect.setLength(20.0);
    rect.setWidth(10.0);

    // Output updated dimensions, area, and perimeter
    cout << "Updated Length: " << rect.getLength() << ", Updated Width: " << rect.getWidth() << endl;
    cout << "Updated Area: " << rect.calculateArea() << endl;
    cout << "Updated Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}

// output
// Length: 10, Width: 5
// Area: 50
// Perimeter: 30
// Updated Length: 20, Updated Width: 10
// Updated Area: 200
// Updated Perimeter: 60
