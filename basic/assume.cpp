// // Given the following class:

#include <iostream>
using namespace std;
//Q2
#pragma region 
// class D {
//     int x;
// public:
//     D(int x) : x(x) {}
//     D(const D& other) : x(other.x) {}
//     int getX() { return x; }
// };


// int main()
// {
//     D d1(5);
//     D d2 = d1;
//     d2.setX(10);
//     std::cout << d1.getX();
// }
#pragma endregion

//Q3
#pragma region 
// class Shape {
//   public:
//     virtual void draw() = 0;
// };

// class Rectangle : public Shape {
//   public:
//     void draw() { cout << "Drawing rectangle..." << endl; }
// };

// // int main() {
// //   Shape &s; // needs to be *s
// //   s.draw();
// //   return 0;
// // }
// // run - time error


// int main() {
//   Shape *s; // needs to be *s
//   Rectangle d;
//   s = &d;
//   s->draw();

//   return 0;
// }
#pragma endregion

//Q4
#pragma region 
// class B {
//     int x;
// public:
//     B(int x) : x(x) {}
//     virtual int getX() { return x; }
// };

// class C : public B {
//     int y;
// public:
//     C(int x, int y) : B(x), y(y) {}
//     int getX() { return y; }
// };
 

// int main()
// {
//     B* b = new C(5, 10);
//     std::cout << b->getX();

// }
// will return 10 (getx() returns y lol)

#pragma endregion

//Q5
#pragma region 
// class A {
//   public:
//     int x;
//     A() { x = 5; }
//     A(int i) { x = i; }
// };

// class B : public A {
//   public:
//     int y;
//     B() { y = 10; }
//     B(int i, int j) : A(i) { y = j; }
// };

// int main() {
//   B b1;
//   cout << b1.x << ", " << b1.y << endl;
//   return 0;
// }



// 5, 7


// 3, 7


// 3, 10


// 5, 10 <----

#pragma endregion

//Q6
#pragma region 
class G {
    int x;
public:
    G(int x) : x(x) {} // this is a contrsuctor bro
    int getX() { return x; }
};
// What is the result of the following code:

int main (){
G g1(5);
std::cout << g1.getX();
return 0;
}


// The code will not compile because the default constructor is not defined


// // The code will not compile because the use of variable x in the constructor is ambiguous


// 5 <-----


// The code will not compile because the default constructor is not marked as "explicit"
#pragma endregion

//Q7
#pragma region 

template <typename T>
class F {
    T x;
public:
    F(T x) : x(x) {}
    T getX() { return x; }
};
 

int main (){
F<int> f1(5);
F<double> f2(10.5);
std::cout << f1.getX() + f2.getX();
return 0;
}
// The code will not compile because the template class is not marked as "explicit"


// The code will not compile because the template class is not defined with the correct syntax


// 15.5


// The code will not compile because the two different types cannot be added together
#pragma endregion


