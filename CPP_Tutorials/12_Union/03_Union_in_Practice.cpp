#include <iostream>
using namespace std;

union Number
{
    int i;
    float f;
    double d;
};

void printNumber(Number n, char type)
{
    switch (type)
    {
    case 'i':
        cout << "Integer: " << n.i << endl;
        break;
    case 'f':
        cout << "Float: " << n.f << endl;
        break;
    case 'd':
        cout << "Double: " << n.d << endl;
        break;
    default:
        cout << "Invalid type!" << endl;
        break;
    }
}

int main()
{
    Number num;

    num.i = 42;
    printNumber(num, 'i');

    num.f = 3.14f;
    printNumber(num, 'f');

    num.d = 2.71828;
    printNumber(num, 'd');

    return 0;
}

// output
// Integer: 42
// Float: 3.14
// Double: 2.71828