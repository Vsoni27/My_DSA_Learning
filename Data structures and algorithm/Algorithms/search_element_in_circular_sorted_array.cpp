#include <iostream>
using namespace std;

int circulararraysearch(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] <= arr[high])
        {
            if (x > arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        else if (arr[low] <= arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int a[10] = {69, 72, 5, 6, 9, 10, 12, 19, 23, 45};
    int itm;
    cout << "Enter the item to be seached: ";
    cin >> itm;
    int index = circulararraysearch(a, 10, itm);
    if (index == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Item found at index: " << index << endl;
    }

    return 0;
}