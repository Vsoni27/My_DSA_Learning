#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    // int count; -> will not work as different objects will take their own values
    // for ex if ram will take 1 then shyam will also take 1

public:
    void setdata(void)
    {
        cout << "Enter id: ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "ID of employee no " << count << " is: " << id << endl;
    }
    static int getcount(void)// static function for accessing static members only
    {
        cout<<count<<endl;
        //cout<<id; -> this will throw error as id is not a static member
    }
};

// count is the static data member of class employee
int Employee ::count; // default value is 0

int main()
{
    Employee vivek, jackie, irrfan;

    vivek.setdata();
    vivek.getdata();
    Employee :: getcount();//static function does not need any object name
    jackie.setdata();
    jackie.getdata();
    Employee :: getcount();
    irrfan.setdata();
    irrfan.getdata();
    Employee :: getcount();

    // making objects using array
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();
    }
    

    return 0;
}