#include <iostream>
using namespace std;

int main()
{
    /*  RAM memory=> ||||||||215|||||225|||||||||||||||5|||||||||||215||||||
                       (int**)q------>p(int*)          x(int)       r(int***)
                              ^       |________________^            |
                              |_____________________________________|
    */
    int x;
    x = 5;
    int *p;
    p = &x;
    int **q;
    q = &p;
    int ***r;
    r = &q;
    cout << p << endl; // &x
    *p += 3;
    cout << *p << endl; // 5+3 = 8
    cout << *q << endl; // &x
    **q += 3;
    cout << *(*q)<< endl; // 8+3 = 11
    cout << *(*r) << endl; // &x
    ***r += 3;
    cout << *(*(*r)) << endl; // 11+3 = 14
    cout << x << endl;
    ***r = (***r) + (**q) + (*p);
    cout << *(*(*r)) << endl; // 14+14+14

    return 0;
}