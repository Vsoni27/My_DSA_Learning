#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;
public:
    //Constructor is a special memeber function with the same name as that of the class.
    //It is used to initialize the object of its class.
    //***It is automatically invoked whenever the object is created
    //As soon as we make our own constructor of any type, the default constructor made by the compiler is destroyed

    Complex(void);//constructor declaration

    void printnum()
    {
        cout << "your complex number is: " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void)// ---> default constructor, takes no parameter
{
    a = 3;
    b = 4;
    cout<<"hello your output"<<endl;
}

int main()
{
    Complex c;
    c.printnum();

    return 0;
}

/*
Characterstics of constructor:
1. It should be declared inside the public section of class.
2. They are automatically in invoked whenever the object is created
3. It can have default arguments.
4. We cannot refer to its address
*/