#include<bits/stdc++.h>
using namespace std;
vector<int> kadane_range(vector<int>  a)
{
    int curr_sum = 0;
    int max_sum = a[0], max_l = 0, max_r = 0, l=0;
    for(int i=0; i < a.size();i++)
    {
        if(curr_sum < 0)
        {
            curr_sum = 0;
            l = i;
        }

        curr_sum += a[i];
        if(curr_sum > max_sum)
        {
            max_sum = curr_sum;
            max_r = i;
            max_l = l;
        }
    }
    return {max_l,max_r};
}
int kadane_sum(vector<int> a)
{
    int curr_sum = 0, max_sum = a[0];

    for(int i=0;i < a.size();i++)
    {
        if(curr_sum < 0)
            curr_sum = 0;
        curr_sum += a[i];

        max_sum = max(max_sum,curr_sum);
    }

    return max_sum;

}
int main(){
    vector<int> li = {4,-1,2,-7,3,4};
    vector<int> ans = kadane_range(li);
    for(int i : ans)
    {
        cout<< i << " ";
    }
    cout<<endl<<kadane_sum(li);
}