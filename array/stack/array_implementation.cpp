#include<iostream>
using namespace std;
class stack{
    int size;
    int *arr;
    int top;
    public:
        stack(int x){
            size=x;
            arr=new int[size];
            top=-1;
        }
        void push(int a){
            if(top==size-1){
                cout<<"Stack Overflow"<<endl;
                return ;
            }
            top++;
            arr[top]=a;
        }
        void pop(){
            if(top==-1){
                cout<<"No element in stack to pop"<<endl;
                return ;
            }
        }
        int Top(){
            if(top==-1){
                cout<<"No element in stack";
                return -1;
            }
            return arr[top];
        }
        bool empty(){
            return (top==-1);
        }
};
int main(){
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(4);
    s.push(4);

    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    return 0;
}