#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *top = NULL; // Global pointer var to track the top of the stack

bool isEmpty()
{
    if (top == NULL)
        return true;
    else
        return false;
}

void push(int value)
{
    Node *n = new Node();
    n->data = value;
    n->next = top;
    top = n;
}

void pop()
{
    // is there any element currently in the stack?
    if (isEmpty())
    {
        cout << "Stack in empty " << endl;
    }
    else
    {
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}

void Top()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Top element of stack is : " << top->data << endl;
    }
}

void display()
{
    if(isEmpty()){
        cout << "Stack is empty" << endl;
    }
    else{
        Node *temp = top;
        while(temp!= NULL){
            cout << temp->data << "->";
            temp=temp->next;
        }
        cout << "NULL" << endl;
    }
}

int main()
{
    //Create a LL with 4 elements(push)
    //remove the top element and display LL again
    //also print the top element
}