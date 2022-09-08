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
Node*deleteKth(Node*head, int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node*curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=head->next;
        delete head;
        return (curr->next);
    }
    Node*curr=head;
    for(int i=0;i<k-2;i++){
        curr=curr->next;
    }
    Node*temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}
int main(){
    Node*head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head;
    int k;
    cout<<"Enter position from where u want to remove item: ";
    cin>>k;
    head=deleteKth(head,k);
    PrintLinkedList(head);
    return 0;
}