#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){
    int value;
    int hole;
    for (int i = 1; i < n; i++)
    {
        value = arr[i];
        hole = i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
}

int main()
{
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    insertionsort(A,n);
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}