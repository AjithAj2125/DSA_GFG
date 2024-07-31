// Initialize an empty stack to store operands and subexpressions
// Iterate through each character in the postfix expression
// If the character is an operand (a letter or digit):
//   Convert the character to a single-character string and push it onto the stack
// Else (the character is an operator):
//   Pop the top two operands from the stack
//   Create a new infix expression by combining operands, operator, and parentheses
//   Push the newly formed infix expression back onto the stack
// Return the final infix expression that remains at the top of the stack

#include <bits/stdc++.h>
using namespace std;
string PostfixToInfix(string exp)
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
            string b = st.top();
            st.pop();
            string a = st.top();
            st.pop();
            st.push("(" + a + c + b + ")"); // Note the order
        }
    }

    return st.top();
}
int main()
{
    string exp = "abc/-ad/e-*";
    cout << PostfixToInfix(exp);
    return 0;
}