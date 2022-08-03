#include <iostream>
#include <algorithm>
using namespace std;
void bubblesort(int a[], int n)
{
 int i, j;
 for (i = 0; i < n - 1; i++)
  for (j = 0; j < n - i - 1; j++)
   if (a[j] > a[j + 1])
    swap(a[j], a[j + 1]);
}
void printarray(int a[], int n)
{
 for (int i = 0; i < n; i++)
  cout << a[i] << " ";
 cout << endl;
}
int main()
{
 int a[] = {2, 6, 9, 3, 4, 6, 0};
 int n = sizeof(a) / sizeof(a[0]);
 printarray(a, n);
 bubblesort(a, n);
 printarray(a, n);
 return 0;
}