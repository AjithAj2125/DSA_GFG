//Given an array find if sum exist for a given k sonsecutive elements
#include <iostream>
#include <algorithm>
using namespace std;
int findsum(int a[], int k, int s, int n)
{
 int curr_sum = 0, i, ma;
 for (i = 0; i < k; i++)
  curr_sum = curr_sum + a[i];
 for (i = k; i < n; i++)
 {
  curr_sum = curr_sum + a[i] - a[i - k];
  if (curr_sum == s)
  {
   cout << "exist"; 
   return 0;
  }
 }
 cout << "doesnt exist";
 return 0;
}
int main()
{
 int a[] = {1, 8, 30, -5, 20, 7};
 int s = 45;
 int k = 3;
 int n = sizeof(a) / sizeof(a[0]);
 findsum(a, k, s, n);
 return 0;
}