#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "No element in stack" << endl;
            return -1;
        }

        return top->data;
    }

    bool isEmpty()
    {
        return (top == nullptr);
    }

    void display() {
        if(top==nullptr){
            cout<<"Stack is empty" <<endl;
            return;
        }

        Node * current=top;
        cout<< "Stack Elements : ";
        while (current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
    
          cout<<endl;
        }
        
    
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.peek() << endl;
    st.display();
    st.pop();
    cout << st.peek() << endl;
    st.display();
    st.pop();
    st.pop();

    cout << st.isEmpty() << endl;

    return 0;
}