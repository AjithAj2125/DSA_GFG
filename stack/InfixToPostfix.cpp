// Initialize an empty stack for operators.
// Create a map to store operator precedence.
// Initialize an empty string to store the postfix expression.
// Scan the infix expression from left to right.
// If the current character is an operand, append it to the postfix expression.
// If the current character is an opening parenthesis, push it onto the stack.
// If the current character is a closing parenthesis:
//     Pop and append operators from the stack until an opening parenthesis is encountered.
//     Discard the opening parenthesis.
// If the current character is an operator:
//     While the stack is not empty and the precedence of the top operator is greater than or equal to the precedence of the current operator:
//         Pop and append the top operator from the stack to the postfix expression.
//     Push the current operator onto the stack.
// After scanning the entire expression, pop and append any remaining operators from the stack to the postfix expression.

#include <bits/stdc++.h>
using namespace std;
string inftoPos(string exp)
{
    stack<char> st;
    map<char, int> m = {{'^', 3}, {'*', 2}, {'/', 2}, {'+', 1}, {'-', 1}};
    string ans = "";

    for (auto c : exp)
    {
        if (isalnum(c))
            ans += c;
        else if (c != ')')
        {
            while (c != '(' && !st.empty() && m[st.top()] >= m[c])
            {
                ans += st.top();
                st.pop();
            }

            st.push(c);
        }
        else
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
    }

    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}
int main()
{
    string exp = "((A+B))-C*(D/E)+F";

    cout<< inftoPos(exp);

    return 0;
}
