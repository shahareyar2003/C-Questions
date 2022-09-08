#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int x){
            data=x;
            next=NULL;
        }
};
Node *Sorted_insert_in_linked_list(Node* head, int x){
    Node*temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    if(x<head->data){
        temp->next=head;
        return temp;
    }
    Node*curr=head;
    while(curr->next!=NULL && curr->next->data<x){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void PrintLinkedList(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Node *head=NULL;
    head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    int x;
    cout<<"Enter a number u want to add in linked list in sorted order: ";
    cin>>x;
    head=Sorted_insert_in_linked_list(head,x);
    PrintLinkedList(head);

    return 0;
}