#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e8;
int Arr[MAX];

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse(int Arr[], int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
        Swap(&Arr[i], &Arr[j]);
}

void Display(int Arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << Arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> Arr[i];

    Reverse(Arr, n);
    Display(Arr, n);

    return 0;
}