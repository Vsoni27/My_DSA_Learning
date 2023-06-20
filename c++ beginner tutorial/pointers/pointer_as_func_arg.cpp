#include <iostream>
using namespace std;

// this func will not perform our required task
void increment(int a) // called function
{                     // int a >>formal argument
    a = a + 1;
    cout << "address of a in func " << &a << endl;
}

void increment_updated(int *p)
{
    *p = (*p) + 1;
}

void change(char s[]){
    s[1] = 'q';
}

int main() // calling function
{
    // int a;
    // a = 10;
    // increment(a); // a > actual argument
    // // cout<<a<<endl; expected output=>11 but its=>10
    // cout << "address of a in main " << &a << endl;
    // increment_updated(&a); // notice we put address of a here
    // cout << "desired output " << a;

    char s[5];
    cin>>s;
    cout<<s<<endl;
    change(s);
    cout<<s<<endl;

    return 0;
}