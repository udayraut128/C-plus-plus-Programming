#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int; // Allocate memory for an integer

    *ptr = 42;                         // Assign a value to the allocated memory
    cout << "Value: " << *ptr << endl; // Output the value

    delete ptr; // Deallocate the memory

    return 0;
}

// output
// Value: 42