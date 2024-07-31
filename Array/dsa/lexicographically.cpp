#include<iostream>
using namespace std;
int main()
{
    int a[26]={0};
    
    int i;
    char c;
    string s="bbccbcddd";
     int max=a[0];
for(int i=0;i<26;i++)
    {
         int ind = s[i]-'a';
        a[ind]++;
        if(max<=a[ind])
         {
            max=a[ind];
            c= ind+'a';
        }
    }
    cout<<c;
    return 0;
}