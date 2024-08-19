#include <iostream>
#include <string>
using namespace std;

// Define Address structure
struct Address
{
    string street;
    string city;
    int zipCode;
};

// Define Person structure containing Address structure
struct Person
{
    string name;
    int age;
    Address address; // Nested structure
};

int main()
{
    Person person1;

    // Assign values to person1
    person1.name = "Alice";
    person1.age = 30;
    person1.address = {"123 Main St", "New York", 10001};

    // Display the details
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Street: " << person1.address.street << endl;
    cout << "City: " << person1.address.city << endl;
    cout << "Zip Code: " << person1.address.zipCode << endl;

    return 0;
}

// output
// Name: Alice
// Age: 30
// Street: 123 Main St
// City: New York
// Zip Code: 10001