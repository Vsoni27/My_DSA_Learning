#include <iostream>
using namespace std;

int sum_of_elements(int A[])
/* when array is passed as a functional argument only first element address(or a pointer to that A[0] address)
is copied into the stack memory not the whole array as it may consume a lot of memory for big arrays,
so there is no chance to get the size of array through functional argument.
*/
{
    int sum = 0;
    int size = sizeof(A) / sizeof(A[0]);
    cout << "size of A: " << sizeof(A) << endl;       // 4
    cout << "size of A[0]: " << sizeof(A[0]) << endl; // 4
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int sum_of_elements_corr(int A[], int size) // int A[] points to A[0]
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += A[i]; // here A[i] is *(A+i)
    }
    return sum;
}

// similarly a function to double the elements of array
void double_(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        A[i] = 2 * A[i];
    }
}
int main()
{
    int A[] = {2, 7, 1, 3, 4};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sum_of_elements(A);
    int total_corr = sum_of_elements_corr(A, size);
    cout << total << endl;                            // 2
    cout << total_corr << endl;                       // 17
    cout << "size of A: " << sizeof(A) << endl;       // 20
    cout << "size of A[0]: " << sizeof(A[0]) << endl; // 4
    double_(A, size);
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}
