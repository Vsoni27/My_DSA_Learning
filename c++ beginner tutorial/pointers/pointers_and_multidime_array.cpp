#include <iostream>
using namespace std;

int main()
{
    int B[2][3] = {{2, 3, 6}, {4, 5, 8}};
    int(*p)[3] = B; // writing as int* p = B; will give an error
    /* For 2D array
       B[i][j] = *(B[i] + j)
                 *(*(B + i) + j)
    */
    cout << B << " " << &B[0] << endl;

    cout << *B << " " << B[0] << " " << &B[0][0] << endl;

    cout << B + 1 << " " << &B[1] << endl;

    cout << *(B + 1) << " " << B[1] << " " << &B[1][0] << endl;

    cout << *(B + 1) + 2 << " " << B[1] + 2 << " " << &B[1][2] << endl;

    cout << *(*B + 1) << " " << *(&B[0][1]) << endl;

    return 0;
}