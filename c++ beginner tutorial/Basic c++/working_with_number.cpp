#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x = 2, y = 3;
    cout<<x+y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    cout<<x%y<<endl;
    double a = 3.21, b = 7.66;
    cout<<a/b<<endl;
    a += 3;
    cout<<a<<endl;
    int z = pow(2,3); //imported from cmath
    cout<<z<<endl;
    double t = sqrt(78);
    cout<<t<<endl;
    cout<<floor(3.7)<<endl;
    cout<<ceil(3.2)<<endl;
    cout<<round(8.6)<<endl;

    // int p = 2;
    // p+=1;
    // cout<<p<<endl;
    // int q = ++p;
    // cout<<q<<endl;

    return 0;
}   