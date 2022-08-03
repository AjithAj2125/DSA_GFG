//Given an array find the sum for the queries with ranges of elements given
#include <iostream>
#include <algorithm>
using namespace std;
//Main logic
int query(int pre_sum[], int l, int r)
{
 int sum;
 if (l != 0)
  sum = pre_sum[r] - pre_sum[l - 1];
 else
  sum = pre_sum[r];

 return sum;
}
int main()
{
 int a[] = {2, 8, 3, 9, 6, 5, 4};
 int n = sizeof(a) / sizeof(a[0]);
 int pre_sum[10];
 pre_sum[0] = a[0];
 for (int i = 1; i < n; i++)
 {
  pre_sum[i] = pre_sum[i - 1] + a[i];
 }
 cout << query(pre_sum, 0, 2) << endl;
 cout << query(pre_sum, 1, 3) << endl;
 cout << query(pre_sum, 2, 6) << endl;
 return 0;
}