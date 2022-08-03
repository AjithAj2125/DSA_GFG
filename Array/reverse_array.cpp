#include <iostream>
#include <algorithm>
using namespace std;
void reverse_Array(int *a, int n)
{
    int start = 0, end = n-1;
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    reverse_Array(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}