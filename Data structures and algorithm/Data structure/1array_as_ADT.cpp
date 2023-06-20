#include <iostream>
using namespace std;

int insert(int arr[], int n, int item, int index)
{
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = item;
    return n;
}

int remove(int arr[], int n, int index)
{
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n - 2;
}

int main()
{
    int max_size = 100;
    int arr[max_size];
    int *p = new int[max_size];
    int end = -1;
    int itm, ind;
    while (true)
    {
        cout << "1. Access" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Remove" << endl;
        cout << "4. Add" << endl;
        int ch;
        cout << "Enter your choice: ";
        cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
            cout << "Enter the index: ";
            cin >> ind;
            cout << "Element at index " << ind << " is: " << arr[ind] << endl;
            break;
        case 2:
            cout << "Enter item and index: ";
            cin >> itm >> ind;
            end = insert(arr, end + 1, itm, ind);
            cout << "Element inserted successfully.." << endl;
            cout << "[ ";
            for (int i = 0; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "]" << endl;
            break;
        case 3:
            cout << "Enter the index you want to delete: ";
            cin >> ind;
            end = remove(arr, end + 1, ind);
            cout << "Element removed successfully.." << endl;
            cout << "[ ";
            for (int i = 0; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "]" << endl;
            break;
        case 4:
            cout << "Enter the item you want to add: ";
            cin >> itm;
            arr[end + 1] = itm;
            end = end + 1;
            cout << endl;
            cout << "[ ";
            for (int i = 0; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << "]" << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}
