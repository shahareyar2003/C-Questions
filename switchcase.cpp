#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;
    cout<<"Enter operator: ( +, -, *, / )\n";
    cin>>op;
    cout<<"\nEnter two operands: ";
    cin>>num1>>num2;
    switch (op)
    {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<< (num1+num2);
        break;
    
    case '-':
        cout<<num1<<" - "<<num2<<" = "<< (num1-num2);
        break;
    
    case '*':
        cout<<num1<<" * "<<num2<<" = "<< (num1*num2);
        break;
    
    case '/':
        cout<<num1<<" / "<<num2<<" = "<< (num1/num2);
        break;
    
    default:
        cout<<"Error! operator is not correct";
        break;
    }
}