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
//Efficient solution
void middle(Node *head){
    if(head==NULL){
        return ;
    }
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<(slow->data);
}
void PrintLinkedList(Node *n){
    while(n!=NULL){
        cout<<n->data;
        n=n->next;
    }
}
int main(){
    Node *head=new Node(10);
    Node *second=new Node(20);
    head->next=second;
    Node *third=new Node(30);
    second->next=third;
    Node *fourth=new Node(40);
    third->next=fourth;
    Node *fifth=new Node(50);
    fourth->next=fifth;
    Node *sixth=new Node(60);
    fifth->next=sixth;
    middle(head);
    return 0;
}