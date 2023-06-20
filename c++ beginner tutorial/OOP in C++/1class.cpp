#include <iostream>
using namespace std;

//size of an empty class(with no public or private variables) is 1.

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);//member function
    void getdata()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};

void Employee ::setdata(int a1, int b1, int c1)// :: => scope resolution operator
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    // OOPs - Classes and objects

    // C++ --> intially called --> C with classes
    // class --> extension of structure (in C)
    // structures had limitations
    //          - members are public
    //          - No methods
    // classes --> structure + more
    // classes --> can have methods and properties
    // classes --> can make few memebers as private & few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declaration like this:
    // class Employee
    // {
    //      Class definition
    // } harry, rohan vivek;
    // vivek. salary = 8 makes no sense if salary is private

    Employee Vivek;
    //Vivek.a = 21; -> This will throw error as it is private
    Vivek.d = 34;
    Vivek.e = 73;
    Vivek.setdata(4, 2, 1);
    Vivek.getdata();

    // dynamically object creation
    Employee* E = new Employee();
    E->setdata(9,6,6);
    E->getdata();


    return 0;
}