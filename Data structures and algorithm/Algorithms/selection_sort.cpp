#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    int imin;
    for (int i = 0; i < n - 1; i++)// we need to do n-1 passes
    {
        imin = i;// ith position: elements from i to n-1 are candidates
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[imin])
            {
                imin = j;// update the index of minimum element
            }
        }
        int temp = arr[i];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    selectionsort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}