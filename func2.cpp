// A Function prototype is a declaration in c++ of a function,its name,parameters and return typr before its actual declaration. This enables the compiler to perform more robust type checking.

#include<iostream>
using namespace std;

// Function prototype
// type function-name(arguments);
// int sum(int a ,int b);     Acceptable
// int sum(int a ,b);     non- Acceptable
int sum(int ,int );  

int main(){
    cout<<sum(4,5);
    // Here 4 and 5 are actual parameters
    return 0;
}

int sum(int a,int b){
    // a and b is formal parameters
    int c=a+b;
    return c;
}