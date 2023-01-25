#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// 1.
void insertAtTail(Node *&head, int val)
{
    // creating a new node in which data feild will have val and next will point at NULL
    Node *n = new Node(val);

    if (head == NULL)
    {
        // We will not traverse
        head = n;
        return;
    }

    // we can iterate over LL from begin to end with a pointer which will initially point at head
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

// 2.
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);

    // point the newly added node toward head
    n->next = head;
    head = n;
}

// 3.
bool search(Node *head, int key)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
// 5.
void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;

    delete temp;
}

// 4. delete nth node
void deletion(Node *&head, int valToDel)
{
    // val is the value that we want to delete
    Node *temp = head;

    if (head == NULL)
    {
        return;
    }

    if(head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    while (temp->next->data != valToDel)
    {
        // Keep going to next node
        temp = temp->next;
    }

    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev; 
}

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    // display(head);

    // insertAtHead(head, 5);
    // display(head);

    // cout << search(head, 13) << endl;

    // deletion(head, 1);
    // display(head);

    // deleteAtHead(head);
    // display(head);

    Node *printReverse = reverse(head);
    display(printReverse);
}