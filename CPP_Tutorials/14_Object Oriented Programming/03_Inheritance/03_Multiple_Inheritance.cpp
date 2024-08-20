#include <iostream>
using namespace std;

// Base class 1
class Animal
{
public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }
};

// Base class 2
class Mammal
{
public:
    void walk()
    {
        cout << "I can walk!" << endl;
    }
};

// Derived class
class Dog : public Animal, public Mammal
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
    dog.walk(); // Inherited from Mammal
    dog.bark(); // Defined in Dog
    return 0;
}

// output
// I can eat!
// I can walk!
// I can bark!
