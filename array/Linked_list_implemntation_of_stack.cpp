#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Mystack{
    Node *head;
    int sze;
    public:
        Mystack(){
            head=NULL;
            sze=0;
        }
        void push(int x){
            Node*temp=new Node(x);
            temp->next=head;
            head=temp;
            sze++;
        }
        int pop(){
            if(head==NULL){
                return INT_MAX;
            }
            int res=head->data;
            Node*temp=head;
            head=head->next;
            delete(temp);
            sze--;
            return res;
        }
        int size(){
            return sze;
        }
        bool isempty(){
            return (head==NULL);
        }
        int peek(){
            if(head==NULL){
                return INT_MAX;
            }
            return head->data;
        }
};
int main(){
    Mystack s;
    s.push(3);
    s.push(6);
    s.push(9);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;// 0 means no 1 means yes.

    return 0;
}