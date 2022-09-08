#include<iostream>
using namespace std;
int c=45;
int main(){
    int a,b,c;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"The sum of a and b is "<<c<<endl;
    cout<<"To print global c, we use ::c = "<<::c<<endl;

    return 0;
}