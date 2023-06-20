#include <iostream>
using namespace std;
// more efficient recurive program to calculate the nth term of fibonacci term 

int F[100];// declaring a global array in which we'll store all F[n]'s

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else if (F[n] != -1)// checking whether F[n] is in memory or not ie is in global array or not
    {
        return F[n];
    }
    else
    {
        F[n] = fib(n - 1) + fib(n - 2);// saving F[n] in memory ie in the global array
        return F[n];
    }
}

int main()
{
    int n;
    for (int i = 0; i < 100; i++)
    {
        F[i] = -1;// intiliasing all elements as -1 ie F[n] not in memory
    }
    cout << "Enter: ";
    cin >> n;
    cout << fib(n);
    return 0;
}