// Initialize an empty stack to store operands and subexpressions
// Reverse the prefix expression (operators come first in prefix)
// Iterate through the reversed prefix expression
// If the current character is an operand:
//   Convert the character to a single-character string and push it onto the stack
// Else (the character is an operator):
//   Pop the top two operands from the stack
//   Create a new postfix expression by concatenating operands and operator (operator comes last in postfix)
//   Push the newly formed postfix expression back onto the stack
// Return the final postfix expression that remains at the top of the stack

#include<bits/stdc++.h>
using namespace std;
string PreToPost(string exp){
    stack<string> st;
    reverse(exp.begin(), exp.end());
    for(auto c : exp){
        if(isalnum(c))
        {
            string ch(1,c);
            st.push(ch);
        }
        else{
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();

            st.push(a + b + c);
        }
    }

    return st.top();
}

int main(){
    string exp = "/-AB*+DEF";
    cout<<PreToPost(exp);
    return 0;
}