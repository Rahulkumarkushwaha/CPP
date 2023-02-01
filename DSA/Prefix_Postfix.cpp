#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefixEval(string s)
{
    stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;

            case '-':
                st.push(operand1 - operand2);
                break;

            case '*':
                st.push(operand1 * operand2);
                break;

            case '/':
                st.push(operand1 / operand2);
                break;

            case '^':
                st.push(pow(operand1, operand2));
            }
        }
    }

    return st.top();
}

int postfixEval(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }

        else
        {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;

            case '-':
                st.push(operand1 - operand2);
                break;

            case '*':
                st.push(operand1 * operand2);
                break;

            case '/':
                st.push(operand1 / operand2);
                break;

            case '^':
                st.push(pow(operand1, operand2));
            }
        }
    }
    return st.top();
}

int main()
{
    cout << prefixEval("-+7*45+20") << endl;

    cout << postfixEval("46+2/5*7+") << endl;
}