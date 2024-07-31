// #include<iostream>
// using namespace std;
// int palinp(string s)
// {
//     int a[26]={0};
//     int c=0;
//     for(int i=0;i<s.length();i++)
//     {
//         int ind=s[i]-'a';
//         a[ind]++;
//     }
//     for(int i=0;i<26;i++)
//     {
//         if(a[i]%2!=0)
//         c++;
//     }
//     return (c<=1);
// }
// int main()
// {
//     string s="racer";
//     if(!palinp(s))
//     cout<<"not possible";
//     else
//     cout<<"possible";
// }
#include <iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    string s="aabbbccc";
    int a[128]={0};
   int c=0;
   char odd=' ';
   int longest = 0;
   string palin="";
   string m="";
    for(int i=0;i<s.length();i++)
    {
         
        a[s[i]]++;
        if(a[s[i]]%2!=0)
            c++;
        else
            c--;
    }
    if(c<=1)
    {
    cout<<"possible"<<endl;
    longest=(s.length()) - c;
    }
    else
    {
    cout<<"not possible"<<endl;
    longest=(s.length()) - c + 1;
    }
    cout<<longest<<endl;
    string mirror="";
    
    for(int i=0;i<128;i++)
    {
        if(a[i] != 0 && a[i]%2)
            odd = i ;
            
        int l=a[i]/2;
        
        while(l--)
            m += i;
    }
    palin=m;
    reverse(m.begin(),m.end());
    palin+=odd+m;
    cout<<palin;
  return 0;  
}
