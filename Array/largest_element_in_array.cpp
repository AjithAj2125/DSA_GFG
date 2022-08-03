#include<iostream>
using namespace std;
int find_largest(int a[],int n)
{
    int res = 0;
    for (int i = 0; i < n;i++)
    {
        if(a[i]>a[res])
            res = i;
    }
    return res;
}
int main()
{
    int a[] = {1, 5, 200, 6, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int res = find_largest(a, n);
    cout << " Largest element " << a[res] << " found at " << res;
    return 0;
}