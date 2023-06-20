#include <iostream>
using namespace std;

int main()
{
    int a = 11;
    int *p;
    p = &a;
    cout << "address of p is " << p << endl;
    cout << "size of integer " << sizeof(int) << endl; // size of int is 4
    cout << "address of p+2 is " << p + 2 << endl;
    cout << "value at address *(p+2) is " << *(p + 2) << endl; // will give some garbage value

    return 0;
}