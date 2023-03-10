#include <iostream>
using namespace std;
int sum(int n){
    if (n==1){
        return 1;
    }else {
        return(n + sum(n - 1));
    }

}


int main()
{
    int n = 4;
    int sum_to=sum(n);
    cout << "sum from 1 to" << n <<" is "<< sum_to;

    return 0;
}
