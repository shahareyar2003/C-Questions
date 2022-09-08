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
int search(Node *n,int x){
    int pos=1;
    while (n!=NULL)
    {
        if(n->data==x){
            return pos;
        }
        else{
            pos++;
            n=n->next;
        }
    }
    return -1;
}
int recursiveSearch(Node *n, int x){
    if(n->data==x){
        return 1;
    }
    if(n==NULL)
        return -1;
    else{
        int res=recursiveSearch(n->next,x);
        if(res==-1)
            return -1;
        else
            return (res+1);
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);  
    head->next->next = new Node(30);  
    head->next->next->next = new Node(40);  
    int x=20;
    int res= search(head, x); 
    cout<<"Element "<<x<<" is present at position "<<res<<".";
    cout<<endl;
    int res1=recursiveSearch(head, x);
    cout<<"Element "<<x<<" is present at position "<<res1<<".";

    return 0;
}