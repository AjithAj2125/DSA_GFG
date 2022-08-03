// Given an integer array A and an integer B, a triplet is said to be good if it satisfies:
// 1. |A[i]-A[j]|<=B
// 2. |A[i]-A[k]|<=B
// 3. |A[j]-A[k]|<=B
// Eg : i/p : A = {4,5,6}
//            B =  2.
//      o/p : 1
#include <iostream>
using namespace std;
int find_triplet(int a[], int n, int b)
{
 int count = 0;
 for (int i = 0; i < n - 2; i++)
 {
  for (int j = i + 1; j < n - 1; j++)
  {
   if (abs(a[i] - a[j]) <= b)
   {
    for (int k = j + 1; k < n; k++)
    {
     if ((abs(a[i] - a[k]) <= b) && (abs(a[j] - a[k]) <= b))
      count++;
    }
   }
  }
 }
 return count;
}
int main()
{
 int A[] = {10, 10, 11, 11, 12};
 int n = sizeof(A) / sizeof(A[0]);
 int B = 1;
 cout << find_triplet(A, n, B);
 return 0;
}