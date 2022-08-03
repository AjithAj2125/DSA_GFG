// For a given array print the previous closest greatest elemeent
#include <iostream>
#include <stack>
using namespace std;
void prevgreater(int a[], int n)
{
 stack<int> s;
 s.push(a[0]);
 cout << -1 << " ";
 for (int i = 1; i < n; i++)
 {
  while (s.empty() != true && a[i] >= s.top())
   s.pop();
  int gp = s.empty() ? -1 : s.top();
  cout << gp << " ";
  s.push(a[i]);
 }
}
int main()
{
 int a[] = {20, 30, 10, 5, 15};
 int n = sizeof(a) / sizeof(a[0]);
 prevgreater(a, n);
 return 0;
}