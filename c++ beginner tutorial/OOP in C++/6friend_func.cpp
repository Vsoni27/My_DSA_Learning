#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    // below line says that non memeber func-sumofcomplex has the permission 
    // to do anything with my private data
    friend complex sumofcomplex(complex o1, complex o2);
    void printnum()
    {
        cout << "your complex number is: " << a << " + " << b << "i" << endl;
    }
};

// Friend function
complex sumofcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, c3, sum;
    c1.setdata(3, 4);
    c1.printnum();

    c2.setdata(2, 1);
    c2.printnum();

    sum = sumofcomplex(c1, c2);
    sum.printnum();

    return 0;
}

/*
Properties of friend function:
1. Not in the scope of class
2. Since it is not in the scope of class, it can not be called from the object of that class
   for ex: c1.sumcomplex = 3 => INVALID!
3. Can be invoked without the help of object
4. Usually contains the object as arguments
5** Can be declared in public or private section of the class
6. It cannot access the memebers directly with their names it need
   object_name.member_name to access any member
*/