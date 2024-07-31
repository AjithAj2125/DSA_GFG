#include<iostream>
using namespace std;
int main()
{
    int a[26]={0};
    int max = INT_MIN;
    char c=CHAR_MAX;
    int i;
   
    string s="cccddd";
    for(int i=0;i<s.length();i++)
    {
        int ind = s[i]-'a';
        a[ind]++;
        if(max <= a[ind]&&s[i]<c)
        {
             c = ind + 'a';
            max = a[ind];
        }

    }
        

    // for(int i=0;i<26;i++)
    // {
    //     if(max<a[i])
    //      {
    //         max=a[i];
    //          c= (i+'a');
    //      }
    // }
    cout<<c;
    return 0;
}