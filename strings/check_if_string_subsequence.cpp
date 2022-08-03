#include <iostream>
#include <string>
using namespace std;
bool subsequence(string a, int m, string b, int n)
{
 int i = 0, j = 0;
 while (i < m && j < n)
 {
  if (a[i] == b[j])
  {
   i++;
   j++;
  }
  else
   i++;
 }
 return (j == n);
}
int main()
{
 string a = "Ajithd";
 string b = "Ajid";
 int m = a.length();
 int n = b.length();
 cout << boolalpha << subsequence(a, m, b, n);
 return 0;
}