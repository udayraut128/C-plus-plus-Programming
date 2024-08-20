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

// Further derived class
class Puppy : public Dog
{
public:
    void weep()
    {
        cout << "I can weep!" << endl;
    }
};

int main()
{
    Puppy puppy;
    puppy.eat();  // Inherited from Animal
    puppy.bark(); // Inherited from Dog
    puppy.weep(); // Defined in Puppy
    return 0;
}

// output
// I can eat!
// I can bark!
// I can weep!