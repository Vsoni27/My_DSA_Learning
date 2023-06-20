#include <iostream>
using namespace std;

class A{
    int a;
    public:
    void setData(int a){
        a = a;
    }
    void setData_upd(int a){
        this->a = a;
        // this is a pointer which points to the object that invokes the member function
    }
    void getData(){
        cout<<"The value of a is: "<<a<<endl;
    }
    
};

int main()
{
    A a;
    a.setData(9);
    a.getData();
    a.setData_upd(9);
    a.getData();   

    return 0;
}