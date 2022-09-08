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
    Node*curr=head;
    cout<<curr->data;
    while(curr->next!=head){
        cout<<" "<<curr->next->data;
        curr=curr->next;
    }
}
Node*Insert_at_head(Node*head, int x){
    Node*temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}
Node*Insert_at_end(Node*head, int x){
    Node*temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return head;
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
    temp3->next=head;
    head->prev=temp3;
    printList(head);
    int x,y;
    cout<<"\nEnter a number to add before head: ";
    cin>>x;
    head=Insert_at_head(head,x);
    printList(head);
    cout<<"\nEnter a number to add at last: ";
    cin>>y;
    head=Insert_at_end(head,y);
    printList(head);
    return 0;
}