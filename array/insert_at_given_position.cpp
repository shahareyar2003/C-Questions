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

// Insert from beginning.
Node *insert_from_beginning(Node *head, int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}

// Insert from end.
Node *insert_from_end(Node* head,int x){
    Node*temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    Node*current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=temp;
    return head;
}
// Insert at mid
Node *insert_at_mid(Node*head, int pos, int data){
    Node *temp=new Node(data);
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for(int i=1; i<=pos-2 && curr!=NULL; i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

// length of linked list
int Length_of_Linked_list(Node *head){
    int len=0;    
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

// Print Linked List
void PrintLinkedList(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Node *head=new Node(4);
    Node *second=new Node(5);
    Node *third=new Node(6);
    head->next=second;
    second->next=third;
    PrintLinkedList(head); 
    int x;
    cout<<"\nEnter a number u want to add from beginning in linked list: ";
    cin>>x;
    head=insert_from_beginning(head,x);
    PrintLinkedList(head);
    int y;
    cout<<"\nEnter a number u want to add at end of linked list: ";
    cin>>y;
    head=insert_from_end(head,y);
    PrintLinkedList(head);
    int length=Length_of_Linked_list(head);
    cout<<endl;
    cout<<length;
    cout<<endl;
    int pos,data;
    cout<<"Enter position and data: ";
    cin>>pos>>data;
    head=insert_at_mid(head,pos,data);
    PrintLinkedList(head);
    return 0;
}