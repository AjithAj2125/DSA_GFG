#include<iostream>
#include<algorithm>
using namespace std;
int remove_dup(int arr[],int n)
{
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }

    return res;
} 
int main()
{
    int a[] = {1, 2, 2, 2, 3, 4, 4, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int res = remove_dup(a, n);
    for (int i = 0; i < res;i++)
    {
        cout << a[i] << " ";
    }
        return 0;
}