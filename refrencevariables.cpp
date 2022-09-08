#include<iostream>
// when a variable is declared as a refrence, it becomes an alternative name for an existing variable.
// A variable can be declared as a refrence by putting '&' in the declaration. 
using namespace std;
int main(){
    int a=45;
    int &b=a;
    cout<<a<<endl;
    cout<<b<<endl;
    b=4;
    cout<<a<<endl;
    cout<<b<<endl;
}