#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    void display()
    {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(2.5, 3.5), c2(1.5, 2.5);
    Complex c3 = c1 + c2; // Calls operator+()
    c3.display();
    return 0;
}

// output
// Complex number : 4 + 6i