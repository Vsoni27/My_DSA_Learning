#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

void print(char *c)
{
    cout << "Hello " << c << endl;
}

int main()
{
    int (*p)(int, int);
    p = &add;
    int c = p(2, 3); // dereferencing and executing the function
    cout << "sum => " << c << endl;
    void (*p1)(char *);
    p1 = print;
    p1("vivek");

    return 0;
}
