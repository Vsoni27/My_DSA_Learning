#include <iostream>
using namespace std;

double power(double basenum, int pownum){
    double result = 1;
    for(int i = 1; i<=pownum; i++){
        result = result*basenum;
    }
    return result;
}

int main(){
    int array[] = {3, 9, 20, 32, 222, 83};
    for(int i = 0; i<6; i++){
        cout<<array[i]<<", ";
    }
    // calling a power function made by for loop
    cout<<power(2,3);

    return 0;
}