#include <bits/stdc++.h>
#define ll long long
using namespace std;

int bsearch(vector<int> &arr, int target){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]>target){
            return mid;
        }
        else{
            
        }
    }
}

int ans(vector<int> &A,vector<int> &B,vector<int> &C){
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    int n = A.size();
    for(int j=0;j<n;j++){
        int x = A[j];

    }
}

int main()
{
    

    return 0;
}