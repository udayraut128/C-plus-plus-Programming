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

// Derived class 1
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I can bark!" << endl;
    }
};

// Derived class 2
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "I can meow!" << endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;

    dog.eat();  // Inherited from Animal
    dog.bark(); // Defined in Dog

    cat.eat();  // Inherited from Animal
    cat.meow(); // Defined in Cat

    return 0;
}

// output
// I can eat!
// I can bark!
// I can eat!
// I can meow!
