// call by value
#include<iostream>
using namespace std;
void swap_by_value(int n1,int n2){
    int temp=n1;
    n1=n2;
    n2=temp;
    cout<<"a="<<n1<<" b="<<n2;
}
void swap_by_refrence(int *x1,int *x2){
    int temp;
    temp=*x1;
    *x1=*x2;
    *x2=temp;
    cout<<"\n\na="<<*x1<<" b="<< *x2;

}
int main(){
    int a,b;
    cout<<"Enter the value of a and b:- ";
    cin>>a>>b;
    swap_by_value(a,b);
    swap_by_refrence(&a,&b);
    return 0;
}
