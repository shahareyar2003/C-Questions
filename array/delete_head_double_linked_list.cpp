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
Node*delete_head(Node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        Node*temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
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
    head=delete_head(head);
    printList(head);
    return 0;
}