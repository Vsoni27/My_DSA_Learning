#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int item){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;// (start + end) may overflow !!
        if(item == arr[mid]){
            return mid; 
        }
        else if(item>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1; 
}

int main()
{
    int A[10] = {3,4,9,10,13,17,21,32,41,213};
    int search;
    cout<<"Enter the item to be searched: ";
    cin>>search;
    int x = binarysearch(A,10,search);
    if(x==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: "<<x<<endl;
    }

    return 0;
}