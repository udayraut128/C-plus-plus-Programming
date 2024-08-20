#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size]; // Allocate memory for an array of integers

    // Assign values to the array
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }

    // Output the values
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Deallocate the memory for the array

    return 0;
}

// output
// Enter the size of the array: 5
// Array elements: 1 2 3 4 5 