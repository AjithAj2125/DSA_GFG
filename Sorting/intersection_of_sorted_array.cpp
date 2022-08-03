#include <iostream>
#include <set>
using namespace std;
void intersection(int a[], int m, int b[], int n)
{
    set<int> s;
    for (int i = 0; i < m; i++)
        s.insert(a[i]);
    for (int i = 0; i < n; i++)
    {
        if (s.find(b[i]) != s.end())
        {
            cout << b[i] << " ";
            s.erase(b[i]);
        }
    }
}
int main()
{
    int a[] = {
        1,
        2,
        3,
        4,
        5,
        6,
        6,
        6,
        7,
        7};
    int b[] = {4, 5, 6, 6, 6, 7, 10, 20};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    intersection(a, m, b, n);
    return 0;
}