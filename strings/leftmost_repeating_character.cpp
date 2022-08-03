#include <iostream>
#include <string>
using namespace std;
int leftmost_repeat(string s, int n)
{
 int count[26] = {0};
 for (int i = 0; i < n; i++)
 {
  count[s[i] - 'a']++;
 }
 for (int i = 0; i < n; i++)
 {
  if (count[s[i] - 'a'] > 1)
   return i;
 }
}

int main()
{
 string s = "abbbbcb";
 cout << leftmost_repeat(s, s.length());
 return 0;
}