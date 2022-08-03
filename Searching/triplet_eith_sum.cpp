///////////CHECK
#include <iostream>
using namespace std;
int triplet_sum(int a[], int n, int beg, int end, int target, int first)
{
 while (beg < end)
 {
  if (a[beg] + a[end] == target)
  {
   cout << "a[" << first << "] + "
        << "a[" << beg << "] + a[" << end << "] = " << target << endl;
   return 1;
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
 return 0;
}
int main()
{
 int a[] = {2, 3, 4, 8, 9, 20, 40};
 int n = sizeof(a) / sizeof(a[0]);
 int sum = 32;
 for (int i = 0; i < n; i++)
 {
  if (triplet_sum(a, n, i + 1, n, sum - a[i], a[i]) == 1)
   break;
 }
 return 0;
}