#include <iostream>
using namespace std;
void merge(int a[], int l, int m, int h)
{
  int *left = new int[m - l + 1];
  int *right = new int[h - m];
  int i = 0, j = 0;
  for (i = 0, j = 0; (i < m - l + 1) && (j < h - m); i++, j++)
  {
    left[i] = a[i];
  }
}
void mergesort(int a[], int l, int r)
{
  while (l < r)
  {
    int mid = (l + r) / 2;
    mergesort(a, l, mid);
    mergesort(a, mid + 1, r);
    merge(a, l, mid, r);
  }
}
int main()
{
  int a[] = {3, 7, 9, 2, 3, 1, 0};
  int n = sizeof(a) / sizeof(a[0]);
  mergesort(a, 0, n);
}