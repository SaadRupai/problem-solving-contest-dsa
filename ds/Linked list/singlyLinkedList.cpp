#include<bits/stdc++.h>
using namespace std;

// Node of Linked List
class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            this->data=val;
            this->next=NULL;
        }
};

// Insertion at beginning
void insertAtFirst(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}

// Insertion at end
void insertAtEnd(Node* &tail, int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

// Displaying Linked List
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    // Created first node
    Node *node1=new Node(5);
    // cout<<node->data<<endl;
    // cout<<node->next<<endl;

    // Head & tail pointed to node1
    Node* head=node1;
    Node* tail=node1;

    // Printing Linked List
    print(head);
    // insertAtFirst(head, 6);
    insertAtEnd(tail, 6);
    print(head);
    // insertAtFirst(head, 7);
    insertAtEnd(tail, 7);   
    print(head);


    return 0;
}
