#include <iostream>
using namespace std;
 
int binarysearch_rec(int arr[], int low, int high, int x)
{
    if(low>high){ // Base condition for ending recursion
        return -1;
    }
    int mid = low+(high-low)/2;

    if(x == arr[mid]){ // base condition
        return mid;
    }
    else if(x<arr[mid]){
        return binarysearch_rec(arr, low, mid-1,x);
    }
    else{
        return binarysearch_rec(arr, mid+1, high, x);
    }
}

int main()
{
    int A[10] = {-3,3,9,10,13,17,21,32,41,213};
    int search;
    cin>>search;
    int x = binarysearch_rec(A,1,9,search);
    if(x==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index: "<<x<<endl;
    }

    return 0;
}