#include <iostream>
using namespace std;

enum department
{
    cse,
    ece,
    me,
    ce
};

typedef struct employee
{
    int eid;
    string name;
    float salary;
    enum department de;
} ep;

int main()
{
    // struct employee vivek;
    ep vivek;
    vivek.eid = 2432;
    vivek.name = "vivek";
    vivek.salary = 279764672.32;
    vivek.de = ece;
    cout << vivek.eid << endl;
    cout << vivek.name << endl;
    cout << vivek.salary << endl;
    cout << vivek.de << endl;
    return 0;
}