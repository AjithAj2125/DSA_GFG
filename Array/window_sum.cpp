//maximum window sum using window sliding technique
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int maxsum(int a[], int n, int k)
{
 int curr_sum = 0;
 for (int i = 0; i < k; i++)
 {
  curr_sum += a[i];
 }
 int max_sum = curr_sum;
 for (int i = k; i < n; i++)
 {
  curr_sum = curr_sum + a[i] - a[i - k];
  max_sum = max(curr_sum, max_sum);
 }
 return max_sum;
}
int main()
{
 int a[] = {1, 8, 30, -5, 20, 7};
 int n = sizeof(a) / sizeof(a[0]);
 int k = 3;
 cout << maxsum(a, n, k);
 return 0;
}