#include <iostream>
using namespace std;

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    cout << "size of int " << sizeof(int) << endl;
    cout << "address = " << p << ", "
         << "value = "
         << " " << *p << endl;
    char *p0;
    p0 = (char *)p; // typecasting
    cout << "size of char " << sizeof(char) << endl;
    cout << "address = " << p0 << ", "
         << "value = "
         << " " << *p0 << endl;
    cout << "address = " << p0 + 1 << ", "
         << "value = "
         << " " << *(p0 + 1) << endl;
    // 1025 = 00000000 00000000 00000100 00000001
    // void pointers
    void *p1;
    p1 = p;                   // no need for typecasting
    cout << "address " << p1; //*p1 not possible as p1 is not mapped to a particualar datatype so we cant
    // derefrence it
    // neither p1+1 is possible

    return 0;
}