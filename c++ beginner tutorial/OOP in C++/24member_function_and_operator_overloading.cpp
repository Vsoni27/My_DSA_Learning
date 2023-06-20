#include <iostream>
using namespace std;

template <class T>
void func(T a){
    cout<<"Value = "<<a<<endl;
}

void func(int a){
    cout<<"Input = "<<a<<endl;
}

int main()
{
    func(3);

    return 0;
}