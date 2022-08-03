#include <iostream>
using namespace std;
bool checkpalindrome(int num)
{
    int org = num, ld, rev = 0;
    
    while (num > 0)
    {
        ld = num % 10;
        rev = rev * 10 + ld;
        num = num / 10;
    }
    if (org == rev)
        return true;
    else
        return false;
}
int main()
{
    int n = 238932;

    if (checkpalindrome(n))
        cout << n << " is a palindrome number";
    else
        cout << n << " is not a palindrome number";
    return 0;
}