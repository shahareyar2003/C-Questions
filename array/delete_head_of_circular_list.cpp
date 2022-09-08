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
void PrintLinkedList(Node *n){
    if(n==NULL)
        return;
    Node*p=n;
    do
    {
        cout<<(p->data)<<" ";
        p=p->next;
    } while (p!=n);
}
Node*delhead(Node*head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    else{
        Node*curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=head->next;
        delete head;
        return (curr->next);
    }
}
int main(){
    Node*head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head;
    cout<<"Before delete head: ";
    PrintLinkedList(head);
    cout<<endl<<"After delete head: ";
    head=delhead(head);
    PrintLinkedList(head);
    return 0;
}