//shift zeroes to the right
#include <iostream>
using namespace std;
int shiftzero(int a[], int n)
{
 int i, count = 0;
 for (i = 0; i < n; i++)
 {
  if (a[i] != 0)
  {
   swap(a[i], a[count]);
   count++;
  }
 }
 for (i = 0; i < n; i++)
  cout << a[i];
 return 0;
}
int main()
{
 int a[] = {2, 0, 0, 3, 0, 4, 5, 0};
 int n = sizeof(a) / sizeof(a[0]);
 shiftzero(a, n);
 return 0;
}