#include <iostream>
using namespace std;
int find_oc(int a[], int n, int s)
{
 int low = 0, high = n - 1;
 while (low <= high)
 {
  int mid = (high + low) / 2;
  if (a[mid] < s)
  {
   low = mid + 1;
  }
  else if (a[mid] > s)
  {
   high = mid - 1;
  }
  else
  {
   if (mid == 0 || a[mid - 1] != a[mid])
   {
    return mid;
   }
   else
   {
    high = mid - 1;
   }
  }
 }
 return -1;
}
int main()
{
 int a[] = {1, 2, 4, 4, 8, 9};
 int n = sizeof(a) / sizeof(a[0]);
 int s = 4;
 cout << find_oc(a, n, s);
 return 0;
}
