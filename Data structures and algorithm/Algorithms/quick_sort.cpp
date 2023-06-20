#include <bits/stdc++.h>
#define ll long long
using namespace std;

int partition(int *A, int start, int end){
    int pivot = A[end];
    int partitionindex = start;
    for(int i = start;i<end;i++){
        if(A[i]<=pivot){
            swap(A[i], A[partitionindex]);
            partitionindex++;
        }
    }
    swap(A[partitionindex], A[end]);
    return partitionindex;
}

int Quicksort(int *A, int start, int end){
    if(start<end){
        int partitionindex = partition(A, start, end);
        Quicksort(A, start, partitionindex-1);
        Quicksort(A, partitionindex+1, end);
    }
}

int main()
{
    int arr[6] = {5,3,-1, 7, 9, 2};
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Quicksort(arr, 0, 5);
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}