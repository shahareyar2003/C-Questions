#include<iostream>
#include<vector>
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
Node *reverse(Node *head){
    vector<int> arr;
    for(Node* curr=head;curr!=NULL;curr=curr->next){
        arr.push_back(curr->data);
    }
    for(Node*curr=head;curr!=NULL;curr=curr->next){
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}
Node*reverseefficient(Node*head){
    Node*prev=NULL;
    Node*curr=head;
    Node *next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node*recreverseeffi(Node*curr, Node*prev){
    if(curr==NULL){
        return prev;
    }
    Node*next=curr->next;
    curr->next=prev;
    return recreverseeffi(next,curr);
}
void PrintLinkedList(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
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
    // reverse(head);
    head=reverseefficient(head);
    PrintLinkedList(head);

    return 0;
}