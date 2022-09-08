#include<iostream>

using namespace std;
class Complex{
    int a,b;
    public:
        Complex(void);
        void printNumber(){
            cout<<"Our number is "<<a<<" + "<<b<<"i."<<endl;
        }
};
Complex :: Complex(void){       //  Default Constructor as it takes no parameter.
    a=10;
    b=20;
    cout<<"Hello"<<endl;
}
int main(){
    Complex c1,c2;
    c1.printNumber();
    c2.printNumber();
    Complex c3;
    c3.printNumber();
    return 0;
}
/*
A constructor is a special member function with the same name as the class. 
The constructor doesn’t have a return type.
Constructors are used to initialize the objects of its class.
Constructors are automatically invoked whenever an object is created.
A constructor should be declared in the public section of the class.
Constructor can have default arguments.
We cannot refer to their address.
*/