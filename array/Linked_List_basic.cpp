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

//print Linked list
void print(Node*n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main(){
    Node*head=NULL;
    Node*s=NULL;
    Node*t=NULL;
    head=new Node(3);
    s=new Node(2);
    t=new Node(1);
    head->next=s;
    s->next=t;
    t->next=new Node(0);
    t->next->next=new Node(-1);
    print(head);
    return 0;
}