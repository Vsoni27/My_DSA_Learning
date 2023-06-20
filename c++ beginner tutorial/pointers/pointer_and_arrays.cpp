#include <iostream>
using namespace std;

int main()
{
    int A[] = {4, 2, 6, 9, 7};
    int *p = A; // name of the array return pointer to the first element of the array
                // it can also be int *p = &A
    // A++; => invalid
    // p++; => valid
    //(A+i) same as &A[i]
    //*(A+i) same as A[i]
    cout << p << endl;        //&A[0]
    cout << *p << endl;       // A[0]
    cout << p + 1 << endl;    //&A[1]
    cout << *(p + 1) << endl; // A[1]
    cout << p + 2 << endl;    //&A[2]
    cout << *(p + 2) << endl; // A[2]
    cout << "address of A: " << A << endl;
    cout << "address of A: " << &A << endl;
    cout << "address of A: " << &A[0] << endl;
    for (int i = 0; i < 5; i++)
    {
        // Each address increases by 4 byte
        cout << "address: " << A + i << endl;
        cout << "address: " << &A[i] << endl;
        cout << "value: " << A[i] << endl;
        cout << "value: " << *(A + i) << endl;
    }

    return 0;
}