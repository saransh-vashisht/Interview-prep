#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;   // This holds the data for the node
    node *next; // This is a pointer to the next node in the list

    // Constructor to initialize the node with a value
    node(int val)
    {
        data = val;  // Set the data of the node to the provided value
        next = NULL; // Initialize the 'next' pointer to NULL, indicating it doesn't point anywhere yet
    }
};

void insertAtTail(node *&head, int val)
{
    // Create a new node with the provided value
    node *n = new node(val);

    // If the list is empty, make the new node as the head and return
    if (head == NULL)
    {
        head = n;
        return;
    }

    // Traverse the list to find the last node
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Assign the new node as the next node of the last node
    temp->next = n;
}

void display(node *head)
{
    node *temp = head; // Initialize a temporary pointer 'temp' with the head pointer

    // Traverse the linked list and print the data of each node
    while (temp != NULL)
    {
        cout << temp->data << "->"; // Print the data of the current node

        temp = temp->next; // Move to the next node
    }
    cout << "NULL" << endl; // Print 'NULL' after reaching the end of the list
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    return 0;
}