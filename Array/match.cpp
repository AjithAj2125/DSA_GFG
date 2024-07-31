#include<bits/stdc++.h>
using namespace std;
bool check(string r,string m)
{
      unordered_map<char,int> a;
  for(int i=0;i<m.length();i++)
    {
        a[m[i]]++;
    }
    for(int j=0;j<r.length();j++)
    {
        if(!a[r[j]])
           return false;
        else
                a[r[j]]--;
    }
    return true;
}
bool check1(string r,string m)
{
      unordered_map<char,int> a;
      int k=2;
  for(int i=0;i<m.length();i++)
    {
        a[m[i]]++;
    }
    for(int j=0;j<r.length();j++)
    {  
        
             if(!a[r[j]])
             {
               char c=isupper(r[j]) ? tolower(r[j]):toupper(r[j]);
               if(k>0)
               {
                   if(a[c]>0)
                   {
                       a[c]--;
                       k--;
                   }
                    else
                        return false;
             }
             
            else
               return false;
             }
            a[r[j]]--;
    }
    return true;
}
int main()
{
    //int a[128]={0};
  
    int i,count=0;
    string r="aAbBcc";
    string m="aaBBcc";
    // bool ans = check(r,m);
    // if(ans)
    //     cout<<"true";
    // else
    //     cout<<"false";  
    
    //check(r,m) ? cout<<"true" : cout<<"false";
    cout<< boolalpha<< (check1(r,m)? true : false);
   // cout<<boolalpha<<check(r,m);
    
    return 0;
}