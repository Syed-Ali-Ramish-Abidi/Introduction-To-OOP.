#include <iostream>
#include <string>

// Base class
class Animal
{
protected:
    std::string name;

public:
    Animal(const std::string &n) : name(n) {}

    void eat()
    {
        std::cout << name << " is eating." << std::endl;
    }

    void sleep()
    {
        std::cout << name << " is sleeping." << std::endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    std::string breed;

public:
    Dog(const std::string &n, const std::string &b) : Animal(n), breed(b) {}

    void bark()
    {
        std::cout << name << " is barking." << std::endl;
    }

    void displayInfo()
    {
        std::cout << "Name: " << name << ", Breed: " << breed << std::endl;
    }
};

// Subclass of Dog
class Labrador : public Dog
{
private:
    std::string diet;

public:
    Labrador(const std::string &n, const std::string &b, const std::string &d)
        : Dog(n, b), diet(d) {}

    // Overriding bark function from the Dog class
    void bark()
    {
        std::cout << name << " (Labrador) is barking." << std::endl;
    }

    void displayInfo()
    {
        std::cout << "Name: " << name << ", Breed: " << breed << ", Diet: " << diet << std::endl;
    }
};

int main()
{
    // Creating an instance of the derived class (Labrador)
    Labrador myLabrador("Max", "Labrador Retriever", "High-protein diet");

    // Accessing inherited functions from the base class (Animal)
    myLabrador.eat();
    myLabrador.sleep();

    // Accessing functions specific to the derived class (Dog and Labrador)
    myLabrador.bark();
    myLabrador.displayInfo();

    return 0;
}