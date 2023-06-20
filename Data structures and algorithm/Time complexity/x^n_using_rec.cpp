#include <iostream>
using namespace std;

int pow(int x, int n){
    if(n==0){
        return 1;
    }
    else{
        return x*pow(x,n-1);
    }
}

int pow_(int x, int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        int y = pow_(x,n/2);
        return y*y;
    }
    else{
        return x*pow_(x,n-1);
    }
}

int main()
{
    int x,n;
    cout<<"Enter x,n: ";
    cin>>x>>n;
    int res1,res2;
    res1 = pow(x,n);
    res2 = pow_(x,n);
    cout<<"Using algo1: "<<res1<<endl;
    cout<<"Using algo2: "<<res2<<endl;

    return 0;
}