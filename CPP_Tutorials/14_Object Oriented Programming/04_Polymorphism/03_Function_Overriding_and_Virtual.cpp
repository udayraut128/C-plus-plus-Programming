#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "This is a generic animal sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Meow! Meow!" << endl;
    }
};

int main()
{
    Animal *animal;
    Dog dog;
    Cat cat;

    // Pointing base class pointer to derived class object
    animal = &dog;
    animal->sound(); // Calls Dog's sound()

    animal = &cat;
    animal->sound(); // Calls Cat's sound()

    return 0;
}

// output
// Woof! Woof!
// Meow! Meow!