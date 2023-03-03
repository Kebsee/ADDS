#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p = &x;

    // cout << "x = " << x << endl;
    // cout << "p = " << p << endl; // Address  
    // cout << "*p = " << *p << endl;10

    // *p = 20;

    // cout << "x = " << x << endl;
    // cout << "p = " << p << endl;
    // cout << "*p = " << *p << endl;
    cout << &x << endl;
    cout << &p << endl; 

    cout << x << endl;
    cout << p << endl;


    return 0;
}
// Try to predict the output of this program before running it. Then, run the program and compare your predictions to the actual output.

// Explain how the program works, including what each line of code does and how pointers are used in the program.





