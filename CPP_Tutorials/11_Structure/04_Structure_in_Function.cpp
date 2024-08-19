#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age;
};

// Function to display Person details (passed by value)
void displayPerson(Person p)
{
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
}

int main()
{
    Person person1 = {"Alice", 30};

    displayPerson(person1); // Call function

    return 0;
}

// output
// Name: Alice
// Age: 30