#include <iostream>
#include <string>
using namespace std;
bool palindrome(string s, int n)
{
 int start = 0, end = n - 1;
 while (start <= end)
 {
  if (s[start] != s[end])
  {
   return false;
  }
  start++;
  end--;
 }
 return true;
}
int main()
{
 string s = "ABCCBA";
 int n = s.length();
 cout << boolalpha << palindrome(s, n);
 return 0;
}
