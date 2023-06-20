#include <iostream>
using namespace std;

int findrotationcount(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        if (arr[low] <= arr[high])
        {
            return low;
        }
        int mid = (low + high) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
        {
            return mid;
        }
        else if (arr[mid] <= arr[high])
        {
            high = mid - 1;
        }
        else if (arr[mid] >= arr[low])
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int a[10] = {69, 72, 5, 6, 9, 10, 12, 19, 23, 45};
    int count = findrotationcount(a, 10);
    cout << "The array was rotated " << count << " times." << endl;

    return 0;
}