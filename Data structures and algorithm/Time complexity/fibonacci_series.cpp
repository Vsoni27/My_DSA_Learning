#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int fibn = fib(n);
    cout<<fibn;
    return 0;
}