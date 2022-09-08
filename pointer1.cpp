#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<p<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of a is "<<*p<<endl;
    cout<<*p+1<<endl;
    cout<<*p+2<<endl;
    return 0;
}