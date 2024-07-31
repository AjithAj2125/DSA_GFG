#include <bits/stdc++.h>
using namespace std;
string PostToPre(string exp)
{
    stack<string> st;

    for (auto c : exp)
    {
        if (isalnum(c))
        {
            string ch(1, c);
            st.push(ch);
        }
        else
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();

            st.push(c + b + a);
        }
    }
    return st.top();
}
int main()
{
    string ex = "AB-DE+F*/";
    cout << PostToPre(ex);
    return 0;
}