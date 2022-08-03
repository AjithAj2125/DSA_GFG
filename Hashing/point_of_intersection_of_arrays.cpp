#include <iostream>
#include <set>
using namespace std;
int find_point(int a[], int b[], int n, int m)
{
 set<int> s;
 int count = 0;
 for (int i = 0; i < n; i++)
 {
  s.insert(a[i]);
 }
 for (int i = 0; i < m; i++)
 {
  if (s.find(b[i]) != s.end())
  {
   count++;
   s.erase(b[i]);
  }
 }
 return count;
}
int main()
{
 int a[] = {1, 2, 4, 5, 6, 7, 8};
 int b[] = {1, 4, 5, 6, 7, 8, 8, 6};
 int n = sizeof(a) / sizeof(a[0]);
 int m = sizeof(b) / sizeof(b[0]);
 cout << find_point(a, b, n, m);
 return 0;
}