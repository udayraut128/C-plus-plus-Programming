#include <iostream>
#include <string>
using namespace std;

// Define the structure
struct Person
{
    string name;
    int age;
    float height;
};

int main()
{
    // Create a variable of type Person
    Person person1;

    // Assign values to the structure members
    person1.name = "Alice";
    person1.age = 30;
    person1.height = 5.7;

    // Access and display the members
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;

    return 0;
}

// output
// Name: Alice
// Age: 30
// Height: 5.7