#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    int age;

public:
    void getData(){
        cout<<"Name: "<<name<<endl<<"Roll_no: "<<roll_no<<endl<<"Age: "<<this->age<<endl;
    }
    void setData(string input_name, int input_rollno, int input_age){
        name = input_name;
        roll_no = input_rollno;
        age = input_age;
    }
};



int main()
{
    // Student s1;
    // s1.setData("Vivek Soni", 2377, 20);
    // s1.getData();
    return 0;
}