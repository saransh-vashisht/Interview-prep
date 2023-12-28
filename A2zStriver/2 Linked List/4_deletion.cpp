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

void insertionAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void deleteAtHead(node *&head)
{
    node *toDelete = head; // Store the head node to delete it
    head = head->next;     // Update the head to the next node
    delete toDelete;       // Delete the original head node
}
void deletion(node *&head, int val)
{
    if (head == NULL)
        return; // If the list is empty, return

    // If there is only one node in the list
    if (head->next == NULL)
    {
        deleteAtHead(head); // Call deleteAtHead function to delete the only node
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next; // Find the node with value 'val'
    }
    node *toDelete = temp->next;   // Store the node to delete
    temp->next = temp->next->next; // Update the pointers to skip the node to delete
    delete toDelete;               // Delete the node with value 'val'
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
    deletion(head, 5);
    display(head);
}