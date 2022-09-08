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
Node *insertbegin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next=head;
    return temp;
}
void print(Node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
int main(){
    Node *head = NULL;
    head=insertbegin(head, 30);
    head=insertbegin(head, 20);
    head=insertbegin(head, 10);
    print(head);
    return 0;
}