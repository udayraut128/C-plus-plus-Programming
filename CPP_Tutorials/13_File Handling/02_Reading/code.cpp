#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile("example.txt"); // Open a file for reading
    string line;

    if (inFile.is_open())
    { // Check if the file is open
        while (getline(inFile, line))
        {                         // Read the file line by line
            cout << line << endl; // Print each line to the console
        }
        inFile.close(); // Close the file
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
