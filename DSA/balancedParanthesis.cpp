#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;

    bool ans = true;
    for (int i = 0; i < s.size(); i++)
    {
        // first we have to check if there is opening bracket
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    //if some element is left in the stack that means my brackets are unbalanced
    if(!st.empty()) {
        ans = false;
    }

    return ans;
}

int main()
{
    string s = "[({})]]";

    if(isBalanced(s)){
        cout << "The brackets are balanced " << endl;
    }
    else{
        cout << "The brackets are not balanced " << endl;
    }
}