#include <iostream>
using namespace std;

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    Data data; // Declare a union variable

    data.i = 10; // Assign an integer value
    cout << "Integer: " << data.i << endl;

    data.f = 220.5; // Assign a float value (overwrites the integer)
    cout << "Float: " << data.f << endl;

    data.c = 'A'; // Assign a char value (overwrites the float)
    cout << "Character: " << data.c << endl;

    // Notice that only the last assigned member has valid data
    cout << "After assigning char, Integer: " << data.i << endl; // This may produce unexpected results

    return 0;
}

// output
// Integer: 10
// Float: 220.5
// Character: A
// After assigning char, Integer: 1130135617