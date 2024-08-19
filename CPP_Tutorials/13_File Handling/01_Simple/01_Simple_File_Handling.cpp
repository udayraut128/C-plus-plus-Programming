#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile("example.txt"); // Create and open a file

    if (outFile.is_open())
    {                                       // Check if the file is open
        outFile << "Hello, World!" << endl; // Write to the file
        outFile << "This is a file handling example in C++." << endl;
        outFile.close(); // Close the file
        cout << "Data written to file successfully." << endl;
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
    }

    return 0;
}

// output
// Data written to file successfully.

// go to output folder and see in example.txt file