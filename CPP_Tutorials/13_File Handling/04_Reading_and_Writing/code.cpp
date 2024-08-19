#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file("data.txt", ios::in | ios::out | ios::trunc); // Open file for reading and writing

    if (file.is_open())
    {
        // Writing to the file
        file << "C++ File Handling Example" << endl;
        file << "Writing and reading from the same file." << endl;

        // Reset file position to the beginning
        file.seekg(0, ios::beg);

        // Reading from the file
        string line;
        while (getline(file, line))
        {
            cout << line << endl; // Display the content
        }

        file.close(); // Close the file
    }
    else
    {
        cout << "Unable to open file." << endl;
    }

    return 0;
}

// output
// Data appended to file successfully.

// go to output folder and see in example.txt file