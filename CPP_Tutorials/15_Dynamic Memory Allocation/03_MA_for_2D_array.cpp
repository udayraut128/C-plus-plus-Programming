#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Allocate memory for a 2D array
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    // Assign values to the 2D array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }

    // Output the values
    cout << "2D Array elements:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for the 2D array
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i]; // Delete each row
    }
    delete[] arr; // Delete the array of pointers

    return 0;
}

// output
// Enter the number of rows and columns: 2
// 2
// 2D Array elements:
// 1 2 
// 2 4 