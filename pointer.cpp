#include<iostream>

using namespace std;
int main(){
    
    // A Pointer is a variable that stores the memory address of an object.

    int a=3;
    int* b=&a;
    
    // & ---> (Address of) operator
    // * ---> Derefrence operator :- returns the value stored in the address kept in the point variable.
    // Precedence of unary operator is greater than derefrence operator.

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    cout<<"The value at address b is "<<*b<<endl;

    //Pointer to pointer

    int**c=&b;
    cout<<"The address of is "<<&b<<endl;
    cout<<"The address of is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value at (value at c) is "<<**c<<endl;



    return 0;
}