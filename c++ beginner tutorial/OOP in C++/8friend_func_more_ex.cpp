#include <iostream>
using namespace std;
//Programme to swap two numbers using classes
class c2; // forward declaration
class c1
{
    int val1;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int a)
    {
        val1 = a;
    }
    void getdata()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void swap(c1 &, c2 &);

public:
    void setdata(int b)
    {
        val2 = b;
    }
    void getdata()
    {
        cout << val2 << endl;
    }
};

void swap(c1 &x, c2 &y) // taking reference for x any y using '&'
// we are taking reference because if we don't do so then the original object will remain 
// unaffected and only it's copy will change.
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setdata(34);
    oc2.setdata(47);

    cout << "Before swapping" << endl;
    cout << "oc1 -> ";
    oc1.getdata();
    cout << "oc2 -> ";
    oc2.getdata();

    swap(oc1, oc2);

    cout << "After swapping" << endl;
    cout << "oc1 -> ";
    oc1.getdata();
    cout << "oc2 -> ";
    oc2.getdata();

    return 0;
}