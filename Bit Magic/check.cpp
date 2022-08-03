#include<iostream>
using namespace std;
// struct Result{
//     int output[100];
// };
void check(int n,int a[])
{
    int i, j;
    //Result R;
    int output[10] = {0};
    for (int i = 1; i < n;i++)
    {
        for (int j = 0; j < i;j++)
        {
            if(a[j]>a[i])
              output[i] = output[i] + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }
    
}
int main()
{
    //Result P;
    int a[5] = {5, 4, 3, 2, 1};
    int n = 5;
     check(n, a);
    // for (int i = 0; i < n;i++)
    // {
    //     cout << P.output[i] << " ";
    // }
    return 0;
}
