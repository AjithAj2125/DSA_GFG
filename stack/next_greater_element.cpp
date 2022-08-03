#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextgreater(int a[], int n)
{
 stack<int> s;
 vector<int> g;
 s.push(a[n - 1]);
 g.push_back(-1);
 for (int i = n - 2; i >= 0; i--)
 {
  while (s.empty() != true && a[i] >= s.top())
   s.pop();
  int ng = s.empty() ? -1 : s.top();
  g.push_back(ng);
  s.push(a[i]);
 }
 reverse(g.begin(), g.end());
 return g;
}
int main()
{
 int a[] = {5, 15, 10, 8, 6, 12, 9, 18};
 int n = sizeof(a) / sizeof(a[0]);
 for (int x : nextgreater(a, n))
  cout << x << " ";

 return 0;
}