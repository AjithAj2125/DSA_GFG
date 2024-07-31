#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,4,7,7,5};
    int n=sizeof(a)/sizeof(a[0]);
     int max=a[0];
     int p=0;
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            p=max;
            max=a[i];
        }
        else if(a[i]>p && a[i]!=max)
            p=a[i];
    }
    cout<<p;

    //  int secmax=a[0];
    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]!=max&&secmax<a[i])
    //      secmax=a[i];
    // }
    // cout<<max<<endl;
    // cout<<secmax;  
}