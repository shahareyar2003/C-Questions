#include<iostream>
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};
*/

using namespace std;
class Base1{
    int a;
    public:
        Base1(int x){
            a=x;
            cout<<"Base 1 class constructor"<<endl;
        }
        void PrintData1(void){
            cout<<"The value of a is "<<a<<endl;
        }
};
class Base2{
    int b;
    public:
        Base2(int y){
            b=y;
            cout<<"Base 2 class constructor"<<endl;
        }
        void PrintData2(void){
            cout<<"The value of b is "<<b<<endl;
        }
};
class Derived : public Base1 , public Base2{
    int c,d;
    public:
        Derived(int l, int m, int n, int o): Base2(m),Base1(l){
            c=n;
            d=o;
            cout<<"Derived class constructor"<<endl;
        }
        void printdata(void){
            cout<<"The value of c and d is "<<c<<" and "<<d<<endl;
        }
};
int main(){
    Derived harry(1,2,3,4);
    harry.PrintData2();
    harry.PrintData1();
    harry.printdata();
    return 0;
}