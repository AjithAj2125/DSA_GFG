#include <iostream>
#include <algorithm>
using namespace std;
int countones(int a[], int n)
{
 int i, count = 0, res = 0;
 for (i = 0; i < n; i++)
 {
  if (a[i] == 1)
  {
   count++;
  }
  else
  {
   count = 0;
  }

  res = max(count, res);
 }
 return res;
}
int main()
{
 int a[] = {1, 0, 1, 0, 1, 1, 1, 1};
 int n = sizeof(a) / sizeof(a[0]);
 int ans = countones(a, n);
 cout << ans;
 return 0;
}