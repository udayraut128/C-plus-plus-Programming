// Function Overloading(Compile - time Polymorphism)
#include <iostream>
    using namespace std;

class Print
{
public:
    void show(int i)
    {
        cout << "Integer: " << i << endl;
    }

    void show(double d)
    {
        cout << "Double: " << d << endl;
    }

    void show(string s)
    {
        cout << "String: " << s << endl;
    }
};

int main()
{
    Print p;
    p.show(5);       // Calls show(int i)
    p.show(3.14);    // Calls show(double d)
    p.show("Hello"); // Calls show(string s)
    return 0;
}

// output
// Integer: 5
// Double: 3.14
// String: Hello
