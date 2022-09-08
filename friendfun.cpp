#include<iostream>

using namespace std;
class Complex{
    int a,b;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        friend Complex sumComplex(Complex o1,Complex o2);
        void printNumber(){
            cout<<"Our number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
// Below function is not in class , it uses class variable by friend function
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));//If we run this function without friend function it will through a error.
    return o3;
}
int main(){
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    sum=sumComplex(c1,c2);
    sum.printNumber();  
    return 0;
}

/*  Properties of friend functions :-
    1. Not in the scope of class.
    2. Since it is not in the scope of class, it cannot be called from the object of that class
        e.g; c1.sumcomplex  is invalid
    3. Can be invoked without the help of any object
    4. Usually contain the objects as arguments
    5. Can be declared inside public or private section of the class.                                 
*/ 