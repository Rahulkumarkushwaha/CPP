#include <iostream>
using namespace std;

#define n 100
// Implementing stack using arrays
class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No elements to pop" << endl;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No elements in stack" << endl;
        }
        return arr[top];
    }

    void empty()
    {
        if(top!=-1){
            cout << "Not empty"<<endl;
        }else {
            cout << "Empty" <<endl;
        }
    }
};

int main()
{
    Stack st;
    st.empty();

    st.push(1);
    st.push(2);
    st.empty();

    cout << st.Top() << endl;
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    // cout << st.empty() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    // cout << st.empty() << endl;
    st.empty();

}