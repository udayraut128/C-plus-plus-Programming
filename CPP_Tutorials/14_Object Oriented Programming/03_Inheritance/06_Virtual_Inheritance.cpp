#include <iostream>
using namespace std;

// Common base class
class Animal
{
public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }
};

// Derived class 1
class Mammal : virtual public Animal
{
public:
    void walk()
    {
        cout << "I can walk!" << endl;
    }
};

// Derived class 2
class Bird : virtual public Animal
{
public:
    void fly()
    {
        cout << "I can fly!" << endl;
    }
};

// Derived class from Mammal and Bird
class Bat : public Mammal, public Bird
{
public:
    void hangUpsideDown()
    {
        cout << "I can hang upside down!" << endl;
    }
};

int main()
{
    Bat bat;
    bat.eat();            // Inherited from Animal (via virtual inheritance)
    bat.walk();           // Inherited from Mammal
    bat.fly();            // Inherited from Bird
    bat.hangUpsideDown(); // Defined in Bat
    return 0;
}

// output
// I can eat!
// I can walk!
// I can fly!
// I can hang upside down!