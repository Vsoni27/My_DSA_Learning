#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    // Destructor never takes an argument nor does it return any value
    ~num()
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    // static allocation -> destructor automatically called
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;// constructor invoked and count = 1
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;// constructor invoked and count = 2 then count = 3
        cout<<"Exiting this block"<<endl;
        // destructor is called for obj n3(count = 2) then for obj n2(count = 1)
    }
    cout<<"Back to main"<<endl;
    // finally destructor is called for obj n1(count = 0)

    num *n = new num();
    // for dynamically called objects destructor is manually called

    return 0;
}