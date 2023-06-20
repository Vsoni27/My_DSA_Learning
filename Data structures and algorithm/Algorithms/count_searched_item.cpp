#include <iostream>
using namespace std;

int binarysearch(int arr[], int x, int n, bool searchfirst)
{
    int first = 0, last = n - 1;
    int result = -1;
    while (first <= last)
    {
        int mid = first + (last - first) / 2;
        if (x == arr[mid])
        {
            result = mid;
            if (searchfirst)
            {
                last = mid - 1;
            }
            else
            {
                first = mid + 1;
            }
        }
        else if (x < arr[mid])
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return result;
}

int main()
{
    int arr[18] = {1, 2, 4, 4, 4, 5, 6, 6, 6, 6, 6, 7, 7, 10, 16, 23, 23, 90};
    int item;
    cout << "Enter item: ";
    cin >> item;
    int first_index = binarysearch(arr, item, 18, true);
    if (first_index == -1)
    {
        cout << "Item not found" << endl;
    }
    else
    {
        int last_index = binarysearch(arr, item, 18, false);
        cout << "The searched item occured " << (last_index - first_index + 1) << " time." << endl;
    }

    return 0;
}