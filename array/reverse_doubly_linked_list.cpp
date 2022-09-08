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
Node*reverse(Node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*t=NULL;
    Node*curr=head;
    while(curr!=NULL){
        t=curr->prev;
        curr->prev=curr->next;
        curr->next=t;
        curr=curr->prev;
    }
    return t->prev;
}
int main(){
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *temp3=new Node(40);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    printList(head);
    cout<<endl;
    head=reverse(head);
    printList(head);
    return 0;
}