#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};
void printList(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"NULL";
}
Node*insert_at_begin(Node*head, int x){
    Node*temp=new Node(x);
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    return temp;
}
Node*insert_at_end(Node*head, int x){
    Node*curr=head;
    Node*temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}
int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printList(head);
    int n1;
    cout<<"\nEnter a number u want to add starting DLL: ";
    cin>>n1;
    head=insert_at_begin(head,n1);
    printList(head);
    int n2;
    cout<<"\nEnter a number u want to add at last of DLL: ";
    cin>>n2;
    head=insert_at_end(head,n2);
    printList(head);
    return 0;
}