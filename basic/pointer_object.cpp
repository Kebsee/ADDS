#include <iostream>
using namespace std;

// Define a struct for a person
class Person {
    public:
    string name;
    int age;
};

int main() {
    // Create a pointer to a Person object
    Person* p = new Person;

    // Set the name and age of the Person object using the -> operator
    p->name = "John";
    p->age = 30;

    // Print the name and age of the Person object using the -> operator
    cout << "Name: " << p->name << endl;
    cout << "Age: " << p->age << endl;

    // Deallocate the Person object
    delete p;

    return 0;
}