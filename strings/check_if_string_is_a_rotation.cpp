//Naive better approach
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void reverse_string(string &s, int start, int end)
{
 while (start <= end)
 {
  swap(s[start], s[end]);
  start++;
  end--;
 }
}
bool check_string(string s, string t)
{
 int i = 0, n = s.length();
 while (i < n)
 {
  reverse_string(s, 0, i);
  reverse_string(s, i + 1, n - 1);
  reverse_string(s, 0, n - 1);
  if (s == t)
  {
   return true;
  }
  else
  {
   i++;
  }
 }
 return false;
}
int main()
{
 string s = "ABCD";
 string t = "BCDA";
 cout << boolalpha << check_string(s, t);
 return 0;
}