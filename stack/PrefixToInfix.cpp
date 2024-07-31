```
// Initialize an empty stack to store operands and subexpressions
// Iterate through the prefix expression in reverse order (right to left)
// If the current character is an operand:
//   Convert the character to a single-character string and push it onto the stack
// Else (the character is an operator):
//   Pop the top two operands from the stack
//   Create a new infix expression by combining operands and operator with parentheses
//   Push the newly formed infix expression back onto the stack
// Return the final infix expression that remains at the top of the stack
```


#include <bits/stdc++.h>
using namespace std;
string PreToIn(string exp)
{
    stack<string> st;

    for (int i = exp.size() - 1; i >= 0; i--)
    {
        if (isalnum(exp[i]))
        {
            string ch(1, exp[i]);
            st.push(ch);
        }
        else
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();

            st.push("(" + a + exp[i] + b + ")"); //Note the order
        }
    }

    return st.top();
}
int main()
{
    string exp = "*+PQ-MN";

    cout << PreToIn(exp);

    return 0;
}