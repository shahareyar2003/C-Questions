#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printLinkedList(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
void recursivedisplayLinkedList(Node *n){
    if(n==NULL){
        return ;
    }
    cout<<n->data<<" ";
    recursivedisplayLinkedList(n->next);
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printLinkedList(head);
    cout<<endl;
    recursivedisplayLinkedList(head);
    return 0;
}