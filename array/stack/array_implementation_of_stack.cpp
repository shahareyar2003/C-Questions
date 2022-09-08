#include<iostream>
using namespace std;
#define n 100
/* Stack stores a list of items in which an item can be added to or removed from the list only at one end.*/
class Mystack{
    int *arr;
    int top;
    public:
        Mystack(){
            arr=new int[n];
            top=-1;
        }
        void push(int x){
            if(top==n-1){
                cout<<"Stack Overflow"<<endl;
                return ;
            }
            top++;
            arr[top]=x;
        }
        void pop(){
            if(top==-1){
                cout<<"no element to pop"<<endl;
                return;
            }
            top--;
        }
        int Top(){
            if(top==-1){
                cout<<"No element in stack";
                return -1 ;
            }
            return arr[top];
        }
        bool empty(){
            return (top==-1);
        }
};
int main(){
    Mystack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    if(st.empty()==1){
        cout<<"Empty stack"<<endl;
    }
    else{
        cout<<"Not an empty stack"<<endl;
    }
    return 0;
}