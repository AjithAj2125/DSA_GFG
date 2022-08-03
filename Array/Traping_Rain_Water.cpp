//Trapping Rain Water
#include <iostream>
#include <math.h>
using namespace std;
int unitsofwater(int a[], int n)
{
    int i, j, res = 0, lmax[n], rmax[n];
    lmax[0] = a[0];
    for (i = 1; i < n; i++)
    {
        lmax[i] = max(a[i], lmax[i - 1]);
    }
    rmax[n - 1] = a[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(a[i], rmax[i + 1]);
    }
    for (i = 1; i < n - 1; i++)
        res = res + (min(rmax[i], lmax[i]) - a[i]);

    return res;
}
int main()
{
    int a[] = {3,
               0,
               1,
               2,
               5};
    int n = sizeof(a) / sizeof(a[0]);
    int op = unitsofwater(a, n);
    cout << op;
    return 0;
}