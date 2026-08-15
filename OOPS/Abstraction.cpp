#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void sound() = 0;   // Pure virtual function - sound() has no implementation here.
};

// Derived class - Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks"<<endl;
    }
};

// Derived class - Cat
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows"<<endl;
    }
};

int main() {
    Dog d; // Create an object of Dog class
    d.sound(); // Call the sound function of Dog class

    Cat c; // Create an object of Cat class
    c.sound(); // Call the sound function of Cat class

    return 0;
}