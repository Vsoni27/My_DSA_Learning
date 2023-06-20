#include <iostream>
using namespace std;

class complex
{
    int re, im;

public:
    void setdata(int a, int b)
    {
        re = a;
        im = b;
    }
    void getdata()
    {
        cout << "Complex no is : " << re << " + " << im << "i" << endl;
    }
};

int main()
{
    complex *ptr = new complex;
    (*ptr).setdata(5, 9); // brackets are necessary for *ptr
    (*ptr).getdata();

    // arrow operator

    complex *ptr1 = new complex;
    ptr1->setdata(7, 2);
    ptr1->getdata();

    // array of objects

    complex *ptr2 = new complex[4];
    ptr2->setdata(6, 8);
    ptr2->getdata();

    return 0;
}