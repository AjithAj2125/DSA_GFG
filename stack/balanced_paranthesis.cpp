#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool ismatching(char a, char b)
{
 return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

bool isbalanced(string p)
{
 stack<char> s;
 for (int i = 0; i < p.length(); i++)
 {
  if (p[i] == '{' || p[i] == '(' || p[i] == '[')
   s.push(p[i]);
  else
  {
   if (ismatching(s.top(), p[i]))
   {
    if (s.empty() == true)
     return false;
    else if (ismatching(s.top(), p[i]) == true)
     s.pop();
    else
     return false;
   }
  }
 }
 return (s.empty() == true);
}
int main()
{
 string s = "{[()[]]}";
 bool ans = isbalanced(s);
 if (isbalanced(s) == true)
  cout << "balanced";
 else
  cout << "not balanced";
 return 0;
}