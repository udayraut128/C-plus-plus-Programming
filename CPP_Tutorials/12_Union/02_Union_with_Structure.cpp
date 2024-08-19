#include <iostream>
#include<cstring>
using namespace std;

struct Person
{
    char name[20];
    int age;
};

struct Address
{
    char street[50];
    int zipCode;
};

union Info
{
    Person person;
    Address address;
};

int main()
{
    Info info; // Declare a union variable

    // Assign values to the person structure
    strcpy(info.person.name, "Alice");
    info.person.age = 30;

    cout << "Person Name: " << info.person.name << endl;
    cout << "Person Age: " << info.person.age << endl;

    // Assign values to the address structure (overwrites person data)
    strcpy(info.address.street, "123 Main St");
    info.address.zipCode = 10001;

    cout << "Street: " << info.address.street << endl;
    cout << "Zip Code: " << info.address.zipCode << endl;

    return 0;
}

// output
// Person Name: Alice
// Person Age: 30
// Street: 123 Main St
// Zip Code: 10001