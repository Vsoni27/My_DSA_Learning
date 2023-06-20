#include <iostream>
using namespace std;

int main(){
    int index = 1;
    while(index<=5){
        cout<<index<<endl;
        index++;// or index+=1
    }
    cout<<"-----------------"<<endl;
    
    int y = 6;
    do{
        cout<<y<<endl;//no matter this part of the code will get executed before checking while condition
        y++;
    }while(y<=5);


    return 0;
}

