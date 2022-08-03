#include <iostream>
#include <set>
using namespace std;
int find_pair(int a[], int n, int s)
{
 int i;
 set<int> S;
 // for (i = 0; i < n; i++)
 // {
 //  S.insert(a[i]);
 // }
 for (i = 0; i < n; i++)
 {
  if (S.find(s - a[i]) != S.end())
  {
   return 1;
  }
  S.insert(a[i]);
 }
 return -1;
}
int main()
{
 int a[] = {1, 3, 4, 5, 6, 7, 7};
 int n = sizeof(a) / sizeof(a[0]);
 int s = 5;
 cout << find_pair(a, n, s);
 return 0;
}