#include <iostream>
#include <stack>
#include <string>
using namespace std;
void reverse_str(string str, int low, int high)
{
   while (low <= high)
   {
      swap(str[low], str[high]);
      low++;
      high--;
   }
}
string reverse_words(string str, int n)
{
   int start = 0, end = n - 1;
   for (end = 0; end < n; end++)
   {
      if (str[end] == ' ')
      {
         reverse_str(str, start, end - 1);
         start = end + 1;
      }
   }
   reverse_str(str, start, n - 1);
   reverse_str(str, 0, n - 1);
   return str;
}

int main()
{
   string s = "hello welcome to the jungle";
   int n = s.length();
   cout << reverse_words(s, n);
   return 0;
}