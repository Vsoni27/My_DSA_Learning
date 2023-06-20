#include <iostream>
using namespace std;

void lin_search(int arr[],int n,int item){
    int flag = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] == item){
            flag = i;
        }
    }
    if(flag!=-1){
        cout<<"Element found at index: "<<flag<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}

int main()
{
    int A[10] = {4,0,3,-1,34,8,11,90,101,2};
    int itm;
    cout<<"Enter the item to be searched: ";
    cin>>itm;
    lin_search(A,10,itm);

    return 0;
}