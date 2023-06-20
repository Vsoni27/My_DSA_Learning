#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

void merge(int L[], int R[], int A[], int nl, int nr){
    int i = 0,j = 0,k = 0;
    while(i<nl && j<nr){
        if(L[i]<=R[j]){
            A[k++] = L[i++];
        }
        else{
            A[k++] = R[j++];
        }
    }
    while(i<nl){
        A[k++] = L[i++];
    }
    while(j<nr){
        A[k++] = R[j++];
    }
}

void merge_sort(int arr[],int n){
    if(n<2){
        return;
    }
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for (int i = 0; i <= mid-1; i++)
    {
        left[i] = arr[i];
    }
    for (int i = mid; i <= n-1; i++)
    {
        right[i-mid] = arr[i];
    }
    merge_sort(left, mid);
    merge_sort(right, n-mid);
    merge(left, right, arr, mid, n-mid);
}

int main()
{
    int a[] = {2,4,1,6,8,5,3,7};
    for(int i =0;i<8;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"after merge sort"<<endl;
    merge_sort(a,8);
    for(int i =0;i<8;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}



