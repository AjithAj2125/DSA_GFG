#include <iostream>
#include <cmath>
using namespace std;
void generate(string s, int n)
{
 int powsize = pow(2, n);
 for (int count = 0; count < powsize; count++)
 {
  for (int j = 0; j < n; j++)
  {
   if ((count & (1 << j)) != 0)
    cout << s[j];
  }
  cout << " , ";
 }
}
int main()
{
 string s = "abc";
 int n = s.length();
 generate(s, n);
 return 0;
}