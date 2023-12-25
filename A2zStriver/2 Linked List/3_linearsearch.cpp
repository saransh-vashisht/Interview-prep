#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node * next;
        node(int val){
            data=val;
            next=NULL;
        }
};

void insertAtTail(node * &head, int val){
    node * n = new node(val);
    if(head==NULL){
        head= n;
        return;
    }
    node * temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node * head){
    node * temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

bool linearSearch(node * head, int key){
    node * temp = head;
    while(temp!=NULL){
        if(temp->data==key) return true;
        temp=temp->next;
    }
    return false;    
}

int main(){
    node * head= NULL;
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   insertAtTail(head,4);
   insertAtTail(head,5);
   insertAtTail(head,6);

   display(head);
  cout<< linearSearch(head,7);



}