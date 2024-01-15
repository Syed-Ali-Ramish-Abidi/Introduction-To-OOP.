#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Member function to set the name
    void setName(std::string n) {
        name = n;
    }

    // Member function to set the age
    void setAge(int a) {
        age = a;
    }

    // Member function to display information about the person
    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << " years old." << std::endl;
    }
};

int main() {
    // Creating an instance of the Person class
    Person person1("John Doe", 25);

    // Displaying initial information
    std::cout << "Initial Information:" << std::endl;
    person1.displayInfo();

    // Modifying the information using member functions
    person1.setName("Jane Doe");
    person1.setAge(30);

    // Displaying updated information
    std::cout << "\nUpdated Information:" << std::endl;
    person1.displayInfo();

    return 0;
}
