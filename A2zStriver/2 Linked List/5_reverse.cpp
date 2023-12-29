#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

node *reversal(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;
    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;
    }

    return prevPtr;
}

node *recursiveReversal(node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *newHead = recursiveReversal(head->next);
    node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

node *reversalBruteForce(node *head)
{
    node *temp = head;
    stack<int> st;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL && !st.empty())
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);
    // node *reverse = reversal(head);
    // display(reverse);
    // node *reverse2 = reversalBruteForce(head);
    // display(reverse2);
    node *reverseRecursive = recursiveReversal(head);
    display(reverseRecursive);
}