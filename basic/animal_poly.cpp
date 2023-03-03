#include <iostream>
using namespace std;

// Base class
class Animal {
   protected:
      string name;
      int age;

   public:
      Animal(string n, int a) : name(n), age(a) {}

      void setName(string n) {
         name = n;
      }

      void setAge(int a) {
         age = a;
      }

      string getName() {
         return name;
      }

      int getAge() {
         return age;
      }

      // Non-pure virtual function
      virtual void speak() {
         cout << "Animal speaking" << endl;
      }

      virtual void eat() {
         cout << "Animal eating" << endl;
      }
};

// Derived class 1
class Dog : public Animal {
   public:
      Dog(string n, int a) : Animal(n, a) {}

      void speak() {
         cout << "Woof!" << endl;
      }

      void eat() {
         cout << "Dog eating" << endl;
      }

      void wagTail() {
         cout << "Dog wagging tail" << endl;
      }
};

// Derived class 2
class Cat : public Animal {
   public:
      Cat(string n, int a) : Animal(n, a) {}

      void speak() {
         cout << "Meow!" << endl;
      }

      void eat() {
         cout << "Cat eating" << endl;
      }

      void purr() {
         cout << "Cat purring" << endl;
      }
};

int main() {
   Animal *a1;
   Dog d1("Buddy", 3);
   Cat c1("Whiskers", 5);

   a1 = &d1;
   a1->speak();
   a1->eat();
   static_cast<Dog*>(a1)->wagTail();

   a1 = &c1;
   a1->speak();
   a1->eat();
   static_cast<Cat*>(a1)->purr();

   return 0;
}