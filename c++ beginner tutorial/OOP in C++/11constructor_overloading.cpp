#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:
    Complex(void)
    {
        x = 1;
        y = 3;
    }
    // Complex(int a)
    // {
    //     x = a;
    //     y = 0;
    // }
    Complex(Complex c1, Complex c2)
    {
        x = c1.x + c2.x;
        y = c1.y + c2.y;
    }
    Complex(int a, int b = 7)// constructor with default arguments
    {
        x = a;
        y = b;
    }
    void printnum()
    {
        cout << "your complex number is: " << x << " + " << y << "i" << endl;
    }
};

int main()
{
    Complex z1;
    Complex z2(5);
    Complex z3(z1, z2);
    z1.printnum();
    z2.printnum();
    z3.printnum();

    return 0;
}