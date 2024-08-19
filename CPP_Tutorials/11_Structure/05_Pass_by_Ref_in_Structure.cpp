#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age;
};

// Function to modify Person details (passed by reference)
void modifyPerson(Person &p)
{
    p.name = "Bob";
    p.age = 25;
}

int main()
{
    Person person1 = {"Alice", 30};

    modifyPerson(person1); // Call function

    cout << "Modified Name: " << person1.name << endl;
    cout << "Modified Age: " << person1.age << endl;

    return 0;
}

// output
// Modified Name: Bob
// Modified Age: 25
