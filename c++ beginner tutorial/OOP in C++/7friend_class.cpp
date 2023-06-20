#include <iostream>
using namespace std;

// class complex;// forward declaration

// class calculator
// {
// public:
//     int sumrealcomplex(complex o1, complex o2);
//     int sumcompcomplex(complex o1, complex o2);
// };

class complex
{
    int a, b;
    // Individually declaring function as:
    // friend int calculator::sumrealcomplex(complex , complex );
    // friend int calculator::sumcompcomplex(complex , complex );
    // Alternate way to declare whole class as friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};

// int calculator::sumrealcomplex(complex o1, complex o2)
// {
//     return (o1.a + o2.a);
// }
// int calculator::sumcompcomplex(complex o1, complex o2)
// {
//     return (o1.b + o2.b);
// }

class calculator
{
public:
    int sumrealcomplex(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }
    int sumcompcomplex(complex o1, complex o2)
    {
        return (o1.b + o2.b);
    }
};

int main()
{
    complex c1, c2;
    calculator s1, s2;
    c1.setnumber(2, 3);
    c2.setnumber(1, 4);
    int sumr = s1.sumrealcomplex(c1, c2);
    int sumc = s2.sumcompcomplex(c1, c2);
    cout << "sum of real part -> " << sumr << endl;
    cout << "sum of imaginary part -> " << sumc << endl;

    return 0;
}
