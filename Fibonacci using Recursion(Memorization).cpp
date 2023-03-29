#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;
int A[MAX + 5];

int fib(int n)
{
    if (n <= 1)
    {
        A[n] = n;
        return n;
    }
    else
    {
        if (A[n - 2] == -1)
            A[n - 2] = fib(n - 2);
        if (A[n - 1] == -1)
            A[n - 1] = fib(n - 1);
        A[n] = A[n - 2] + A[n - 1];
        return A[n - 2] + A[n - 1];
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        A[i] = -1;

    fib(n);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}
