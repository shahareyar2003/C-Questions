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
Node *InsertAtEnd(Node *head,int x){
    Node*temp=new Node(x);
    if(head==NULL)
        return temp;
    Node *curr=head;
    while (curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head; 
}
void print(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Node *head=NULL;
    head=InsertAtEnd(head,10);
    head=InsertAtEnd(head,20);
    head=InsertAtEnd(head,30);
    head=InsertAtEnd(head,40);
    print(head);
    return 0;
}