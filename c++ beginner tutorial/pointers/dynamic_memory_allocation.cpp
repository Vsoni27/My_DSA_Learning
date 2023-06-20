#include <iostream>
using namespace std;

int main()
{
    int a; //goes on stack
    int *p;
    p = new int; // (int*)malloc(sizeof(int));
    *p = 10;
    cout<<*p;
    delete p;
    p = new int[20];// (int*)malloc(20*sizeof(int));
    delete[] p;

    return 0;
}
