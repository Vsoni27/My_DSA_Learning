#include <iostream>
using namespace std;

int binarysearch(int arr[], int x, int n,bool flag)
{
    int low = 0;
    int high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
        {
            result = mid;
            if(flag){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else if (x < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

int main()
{
    int arr[10] = {5,6,10,10,10,10,35,46,99,102};
    int re = binarysearch(arr, 10, 10, false);
    if(re == -1){
        cout<<"Item not found"<<endl;
    }
    else{
        cout<<"First occurence found at index: "<<re<<endl;
    }

    return 0;
}