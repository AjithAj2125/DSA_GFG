#include<iostream>
using namespace std;
int main()
{
    int a[10]={4,5,9,1,3,10,4};
    int n=( sizeof(a))/(sizeof(a[0]));
    int max=a[0];
    for(int i=1;i<n;i++)
    {
       if(max<a[i])
        max=a[i];
    }
    cout<<max;
    return 0;
}