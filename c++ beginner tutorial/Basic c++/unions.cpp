#include <iostream>
using namespace std;

union money
{
    //different datatype used for the object money
    //largest memory for below will be located for the same ie memory will be shared
    int rice;
    char car;
    int pounds;
};

int main()
{
    union money m1;
    m1.rice = 4;
    cout << m1.rice << endl;
    m1.car = 'c';
    cout << m1.car << endl;
    cout << m1.rice << endl;


    return 0;
}