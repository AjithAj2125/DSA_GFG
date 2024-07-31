#include <iostream>
using namespace std;
int main()
{
    int max;
    int a[10]={1,2,3,4,5};
     max=a[0];
for(int i=1;i<10;i++)
    {
       
        if(a[i]>max)
         {
            max=a[i];
         }
    }
    cout<<max;
    return 0;
}