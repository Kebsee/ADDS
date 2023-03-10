#include <iostream>
using namespace std;

int factorial(int n) {
    if (n== 2) {
        return 2;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 10;
    int result = factorial(num);
    cout << "The factorial of " << num << " is " << result << endl;
    return 0;
}