#include <iostream>
#include <set>
using namespace std;
int find_intersection(int a[], int b[], int n, int m)
{
 set<int> s;
 int i;
 for (i = 0; i < n; i++)
 {
  s.insert(a[i]);
 }
 for (i = 0; i < m; i++)
 {
  s.insert(b[i]);
 }
 return s.size();
}
int main()
{
 int a[] = {1, 2, 4, 5, 6, 7, 8};
 int b[] = {1, 4, 5, 6, 7, 8, 8, 6};
 int n = sizeof(a) / sizeof(a[0]);
 int m = sizeof(b) / sizeof(b[0]);
 cout << find_intersection(a, b, n, m);
 return 0;
}