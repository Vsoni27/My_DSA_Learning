#include <iostream>
using namespace std;

void sayhi(string name, int age);

double cube(int x){
    return x*x*x;
}

int main(){
    sayhi("vivek", 19);
    sayhi("disha", 17);
    cout<<cube(2)<<endl;

    return 0;
}

void sayhi(string name, int age){
    cout<<"hello Mr "<<name<<" your age is "<<age<<endl;
}