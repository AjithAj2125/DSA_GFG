#include <iostream>
#include <string>
using namespace std;
//fail for "ac" & "bb"
// bool anagram(string a, int m, string b, int n)
// {
//  int count = 0, i;
//  if (n != m)
//   return false;

//  for (i = 0; i < m; i++)
//  {
//   count += a[i];
//  }
//  for (i = 0; i < n; i++)
//  {
//   count -= b[i];
//  }
//  return (count == 0);
// }
bool anagram(string a, int m, string b, int n)
{
 int c[26] = {0};
 int count = 0;
 if (n != m)
 {
  return false;
 }
 for (int i = 0; i < m; i++)
 {
  c[a[i] - 'a']++;
  c[b[i] - 'a']--;
 }
 for (int i = 0; i < 26; i++)
  if (c[i] != 0)
   return false;
 return true;
}
int main()
{
 string a = "hello";
 string b = "olleh";
 int m = a.length();
 int n = b.length();
 cout << boolalpha << anagram(a, m, b, n);
 return 0;
}