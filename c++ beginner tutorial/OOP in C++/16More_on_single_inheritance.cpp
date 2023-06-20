#include <iostream>
using namespace std;
// Base class
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata()
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1()
{
    return data1;
}

int base ::getdata2()
{
    return data2;
}

// derived class
class derive : public base
{
    int data3;

public:
    void process();
    void display();
    // members that will be inherited apart from above
    // int data2;
    // void setdata();
    // int getdata1();
    // int getdata2();
    /* Note that they are all public member of base class that are inherited to public section of
       this derived class so we can use them all in this class. */
};

void derive ::process()
{
    data3 = data2 + getdata1();
}

void derive ::display()
{
    cout << "Value of data1 is: " << getdata1() << endl; // we cannot use data1 member directly as it was private
                                                         // to base class so instead we use another public
                                                         // function that does the same stuff
    cout << "Value of data2 is: " << data2 << endl;
    cout << "Value of data3 is: " << data3 << endl;
}
int main()
{
    derive Dr;
    Dr.setdata();
    Dr.process();
    Dr.display();

    return 0;
}