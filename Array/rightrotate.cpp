//Right rotate array by d
// Time Complexity : O(n)
//Space Complecity : O(1)

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int reverse(int a[], int start, int end)
{
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
int rotate(int a[], int n, int d)
{
    reverse(a, 0, n - 1);
    reverse(a, 0, d - 1);
    reverse(a, d, n - 1);
}
int main()
{
    int a[] = {2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int d = 2;
    rotate(a, n, d);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}