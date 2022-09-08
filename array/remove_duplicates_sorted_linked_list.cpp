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
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
void removeduplicatesfromsortedlist(Node*head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        if(head->next->data==head->data){
            head=head->next;
        }
        head=head->next;
    
    }
    
}
int main(){
    Node*ehad=new Node(10);
    Node *head=new Node(10);
    ehad->next=head;
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
    Node *seventh=new Node(60);
    sixth->next=seventh;
    removeduplicatesfromsortedlist(ehad);
    return 0;
}