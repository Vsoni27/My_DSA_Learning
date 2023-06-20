#include <iostream>
using namespace std;

// Base Class
class employee
{
public:
    int id;
    int salary;
    employee(){}
    employee(int inpid)
    {
        id = inpid;
        salary = 3400;
    }
};

/*
Derived Class Syntax:
---------------------------------------------------------------------
class {derived-Class-Name} : {visibility-mode} {base-class-name}
{
    classes,member,method etc..
};
---------------------------------------------------------------------

Notes:
1. Default visibilty mode is private
2. Public Visibility mode: Public member of the base class becomes public member of the derived class
3. Private visibilty mode: Public member of the base class becomes private member of the derived class
4***. '''Private member of the base class are never inherited'''
*/

// Creating a programmer class derived from employee class
class programmer : employee
{
public:
    int langcode = 0;
    programmer(int inpid)
    {
        id = inpid;
    }
};

int main()
{
    employee virat(003), sachin(67);
    cout << virat.salary << endl;
    cout << sachin.salary << endl;
    programmer anon(2);
    return 0;
}