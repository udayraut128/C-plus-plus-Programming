#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I can bark!" << endl;
    }
};

int main()
{
    Dog dog;
    dog.eat();  // Inherited from Animal
    dog.bark(); // Defined in Dog
    return 0;
}

// output
// I can eat!
// I can bark!