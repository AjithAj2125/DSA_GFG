#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int max_sum(int a[], int n)
{
 int i;
 int max_ending = a[0];
 int res = a[0];
 for (i = 1; i < n; i++)
 {
  max_ending = max(max_ending + a[i], a[i]);
  res = max(res, max_ending);
 }
 return res;
}
int main()
{
 int a[] = {-3, 8, -2, 4, -5, 6};
 int n = sizeof(a) / sizeof(a[0]);
 int res = max_sum(a, n);
 cout << res;
 return 0;
}