#include <iostream>
using namespace std;
// programme to calculate (x ^ n) % M using recursion

int algo1(int x, int n, int M)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return ((x % M) * (algo1(x, n - 1, M))) % M;
    }
}

int algo2(int x, int n, int M)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        int y = algo2(x, n / 2, M);
        return (y * y) % M;
    }
    else
    {
        return ((x % M) * (algo2(x, n - 1, M))) % M;
    }
}

int main()
{
    int x, n, M;
    cout << "Enter x,n,M: ";
    cin >> x >> n >> M;
    int res1, res2;
    res1 = algo1(x, n, M);
    res2 = algo2(x, n, M);
    cout << "Using algo1: " << res1 << endl;
    cout << "Using algo2: " << res2 << endl;

    return 0;
}