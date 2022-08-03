#include <iostream>
using namespace std;
void merge_sorted(int a[], int m, int b[], int n)
{
 int *c = new int[m + n];
 int i = 0, j = 0, k = 0;
 //cout << m << n << sizeof(c) / sizeof(c[0]);
 while (i < m && j < n)
 {
  if (a[i] < b[j])
  {
   c[k] = a[i];
   i++;
   k++;
  }
  else
  {
   c[k] = b[j];
   j++;
   k++;
  }
 }
 while (i < m)
 {
  c[k] = a[i];
  k++;
  i++;
 }
 while (j < m)
 {
  c[k] = b[j];
  k++;
  j++;
 }

 for (i = 0; i < m + n; i++)
 {
  cout << c[i] << " ";
 }
}
int main()
{
 int a[] = {1, 2, 3, 4, 5};
 int b[] = {4, 5, 10, 20};
 int m = sizeof(a) / sizeof(a[0]);
 int n = sizeof(b) / sizeof(b[0]);
 merge_sorted(a, m, b, n);
 return 0;
}