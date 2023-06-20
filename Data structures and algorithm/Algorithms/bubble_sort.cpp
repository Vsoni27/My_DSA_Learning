#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int k = 0; k < n - 1; k++)
    {
        int flag = 0;
        for (int i = 0; i < n - k - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
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
    cout<<"after sorting.."<<endl;
    bubblesort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}