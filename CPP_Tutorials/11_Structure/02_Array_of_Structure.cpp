#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age;
    float height;
};

int main()
{
    Person people[3]; // Array of 3 Person structures

    // Assign values to each element
    people[0] = {"Alice", 30, 5.7};
    people[1] = {"Bob", 25, 6.0};
    people[2] = {"Charlie", 35, 5.9};

    // Display the details of each person
    for (int i = 0; i < 3; i++)
    {
        cout << "Person " << i + 1 << ":" << endl;
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl;
        cout << "Height: " << people[i].height << endl;
        cout << endl;
    }

    return 0;
}

// output
// Person 1:
// Name: Alice
// Age: 30
// Height: 5.7

// Person 2:
// Name: Bob
// Age: 25
// Height: 6

// Person 3:
// Name: Charlie
// Age: 35
// Height: 5.9