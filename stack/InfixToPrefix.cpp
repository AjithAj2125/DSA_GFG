#include <bits/stdc++.h>
using namespace std;

string infixToPrefix(string exp) {
    stack<char> st;
    string ans = "";

    // Reverse the infix expression
    reverse(exp.begin(), exp.end());

    // Replace '(' with ')' and vice versa
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '(') {
            exp[i] = ')';
        } else if (exp[i] == ')') {
            exp[i] = '(';
        }
    }

    // Map operators to their precedence
    map<char, int> m = {{'^', 3}, {'*', 2}, {'/', 2}, {'+', 1}, {'-', 1}};

    // Convert the reversed infix expression to postfix
    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (isalnum(c)) {
            ans += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && m[st.top()] >= m[c]) {
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    // Reverse the obtained postfix expression to get the prefix expression
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    string exp = "(A-B/C)*(A/K-L)";
    cout << infixToPrefix(exp) << endl;
    return 0;
}
