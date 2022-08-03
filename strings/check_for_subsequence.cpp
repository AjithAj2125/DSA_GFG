#include <iostream>
#include <string.h>
using namespace std;
bool check_subsequence(string s, string t)
{
    int n = s.length();
    int m = t.length();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else 
        {
            i++;
        }
    }
    
    return j == m;
}
int main()
{
    string s = "ABCDEF";
    string t = "ABD";
    cout<<boolalpha<<check_subsequence(s, t);
    return 0;
}