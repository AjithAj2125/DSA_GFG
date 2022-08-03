//concatinate the origanal string to itself and find if its present.
#include <iostream>
#include <string>
using namespace std;
bool check_rotation(string &s, string &t)
{
 if (s.length() != t.length())
  return false;
 if ((s + s).find(t) != string::npos)
  return true;
 else
  return false;
}

int main()
{
 string s = "ABCD";
 string t = "BDCA";
 cout << boolalpha << check_rotation(s, t);
 return 0;
}
