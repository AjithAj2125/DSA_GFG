//Find the number which occurs odd number of times.
// ^ = xor
// x ^ x = 0
// x ^ y = y ^ x
// x ^ 0 = x
// x ^ (y ^ z) = (x ^ y) ^ z
#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    return res;
}

int main()
{

    int arr[] = {4, 3, 4, 4, 4, 5, 5, 3, 3}, n = 9;

    cout << findOdd(arr, n);
}