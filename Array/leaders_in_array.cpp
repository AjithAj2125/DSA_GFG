// A leader is an element which doesnt have a number greater
// that the current element
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {7, 10, 4, 3, 6, 5, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int i, curr_leader, j = 1, leaders[10];
    leaders[0] = curr_leader = a[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        if (curr_leader <= a[i]) // check even for equal eleements
        {
            leaders[j] = curr_leader = a[i];
            // cout << curr_leader << endl;
            j++;
        }
    }
    // cout << j << endl;
    for (i = j - 1; i >= 0; i--)
    {
        cout << leaders[i] << " ";
    }
    return 0;
}