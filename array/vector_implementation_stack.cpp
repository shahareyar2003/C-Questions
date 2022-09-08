#include<iostream>
#include<vector>
using namespace std;
class stack{
    public:
        vector<int> v;
        void push(int x){
            v.push_back(x);
        }
        int pop(){
            int res=v.back();
            v.pop_back();
            return res;
        }
        int size(){
            return v.size();
        }
        bool isEmpty(){
            return v.empty();
        }
        int peek(){
            return v.back();
        }
};
int main(){
    stack s;
    s.push(5);
    s.push(4);
    s.push(8);
    s.push(6);
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    if(s.isEmpty()==0){
        cout<<"Contain Element"<<endl;
    }
    else{
        cout<<"Empty"<<endl;
    }
    return 0;
}