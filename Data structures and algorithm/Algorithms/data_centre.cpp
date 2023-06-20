#include <iostream>
#include <vector>
#include <string.h>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    bool x = true;
    int lim = sqrt(n); 
    for (int i = 2; i <= lim; i++)
    {
        if(n%i == 0){
            x = false;
            break;
        }
    }
    return x;
}

bool check(int a){
    int f = sqrt(a);
    if(f*f == a){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int A;
    cin>>A;
    if(check(A)){
        cout<<4*sqrt(A)<<endl;
    }
    else{
        if(isPrime(A)){
            cout<<2*(1+A)<<endl;
        }
        else{
            int y = A;
            for(int i = 2;i<A;i++){
                if(i==y){
                    break;
                }
                if(A%i == 0){
                    y = A/i;
                } 
            }
            int x = A/y;
            cout<<2*(x+y)<<endl;
        }
    }

    return 0;
}