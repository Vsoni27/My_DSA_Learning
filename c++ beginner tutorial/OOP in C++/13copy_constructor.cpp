#include <iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){a = 0;}
    Number(int num){
        a = num;
    }
    //** if no copy constructor is there then compiler supply its own copy constructor
    Number(Number &obj){
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }
    void display(){
        cout<<"the number for this function is: "<<a<<endl;
    }
};

int main()
{
    Number x,y,z(32),z2;
    x.display();
    y.display();
    z.display();

    Number z1(x);// copy constructor is invoked
    z1.display();

    z2 = z;// copy constructor is not called
    z2.display();

    Number z3 = z;
    z3.display();// copy constructor is invoked

    /* whenever we copy an object to another object through copy constructor, both the object will
    be pointing to the same memory so a change in one will be reflected in another object.
    This is known as shallow copy of object
    */
    return 0;
}