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

// Insert at begin.
Node* naive_insert_at_begin(Node*head, int x){
    Node*temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
    }
    else{
        Node*curr=head;
        while (curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
    }
    return temp; 
} 
Node *efficient_insert_at_begin(Node*head, int x){
    Node*temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return head;
    }
}
Node *efficient_insert_at_end(Node*head, int x){
    Node*temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
}
Node *insert_at_end(Node* head, int x){
    Node*temp=new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        Node*curr=head;
        while (curr->next!=head)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }
}
// Print Circular Linked List.
/*void PrintLinkedList(Node *n){
    if(n==NULL)
        return;
    cout<<n->data<<" ";
    for(Node*p=n->next; p!=n;p=p->next)
        cout<<(p->data)<<" ";
}*/
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
int main(){
    Node*head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=head;
    PrintLinkedList(head);
    int x;
    cout<<"\nEnter Number U Want To Add At Starting Pos: ";
    cin>>x;
    head=efficient_insert_at_begin(head,x);
    PrintLinkedList(head);
    cout<<endl;
    int y;
    cout<<"Enter number u want to add at end of linked list: ";
    cin>>y;
    head=efficient_insert_at_end(head,y);
    PrintLinkedList(head);
    return 0;
}