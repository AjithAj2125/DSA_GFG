// ^ = xor
// x ^ x = 0
// x ^ y = y ^ x
// x ^ 0 = x 
// x ^ (y ^ z) = (x ^ y) ^ z
#include <iostream>
using namespace std;
int missing_no(int a[], int n)
{
    int i, res = 0;
    for (i = 0; i < n; i++)
    {
        res = res ^ a[i];
    }
    for (i = 0; i <= n; i++)
    {
        res = res ^ (i + 1);
    }
    return res;
}
int main()
{
    int a[] = {2, 1, 3, 4,5,7};
    int n = sizeof(a) / sizeof(a[0]);
    cout << missing_no(a, n);
    return 0;
}