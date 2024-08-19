#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile("example.txt", ios::app); // Open file in append mode

    if (outFile.is_open())
    {
        outFile << "Appending a new line to the file." << endl; // Append data
        outFile.close();                                        // Close the file
        cout << "Data appended to file successfully." << endl;
    }
    else
    {
        cout << "Unable to open file for appending." << endl;
    }

    return 0;
}

// output
// Data appended to file successfully.

// go to output folder and see in example.txt file