#include <iostream>
#include <algorithm>
using namespace std;
string findpair(int a[], int n, int target)
{
 int beg = 0, end = n - 1, i;
 while (beg < end)
 {
  if (a[beg] + a[end] == target)
  {
   cout << "a[" << beg << "] + a[" << end << "] = " << target << endl;
   break;
  }
  else if (a[beg] + a[end] > target)
  {
   end--;
  }
  else if (a[beg] + a[end] < target)
  {
   beg++;
  }
 }
 return "found";
}
int main()
{
 int a[] = {2, 5, 8, 12, 30};
 int n = sizeof(a) / sizeof(a[0]);
 int target = 17;
 cout << findpair(a, n, target);
 return 0;
}