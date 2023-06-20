// pointer are variable that stores address of another variable
/*
Data Type	               Size(in bytes)       Range
short int		           2                    -32,768 to 32,767
unsigned short int		   2                    0 to 65,535
unsigned int		       4                    0 to 4,294,967,295
int		                   4                    -2,147,483,648 to 2,147,483,647
long int		           4                    -2,147,483,648 to 2,147,483,647
unsigned long int		   8                    0 to 4,294,967,295
long long int		       8                    -(2^63) to (2^63)-1
unsigned long long int	   8                    0 to 18,446,744,073,709,551,615
signed char	   	           1                    -128 to 127
unsigned char	           1                    0 to 255
float		               4
double		               8
long double		           12
wchar_t	2 or 4	                                1 wide character
*/
#include <iostream>
using namespace std;

int main()
{
    int a;
    a = 10;
    int *p; // or int* p;
    p = &a;
    cout << "address of p is " << p << endl;
    cout << "value at p is " << *p << endl; // derefrencing of pointer
    // for character variable we use character pointer
    // char c;
    // char *p0;
    int b = 20;
    *p = b;
    cout << "address of p is " << p << endl;
    cout << "value at p is " << *p << endl;
    cout << sizeof(double);

    return 0;
}
