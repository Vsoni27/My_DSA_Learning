#include <iostream>
#include <array>
using namespace std;

int main(){
    int num_array[] = {1,3,4,12,32,41};
    cout<<num_array[0]<<endl;
    num_array[0] = 23;
    cout<<num_array[0]<<endl;
    // calculating length of array
    int size = sizeof(num_array);// this will give total size in bytes 4*6=24
    int size_ = sizeof(num_array)/sizeof(num_array[0]);// right way
    cout<<"size of array is: "<<size<<endl;
    cout<<"length of array is: "<<size_<<endl;

    int newarray[10] = {}; //defining an array of length 10
    
    
    return 0;
}