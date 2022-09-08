#include<iostream>
using namespace std;
class A{
    public:
        int a=10;
    protected:
        int b=10;
};
class B: public A{
    int d=1;
    protected:
        int c=5;
    public:
        void Data(){
            cout<<c*a<<endl;
            cout<<c*b<<endl;
            cout<<d*b<<endl;}
};
class C : public B{
    int e=0;
    public:
        void Data1(){
            cout<<e*c<<endl;
            cout<<e*a<<endl;
            cout<<e*b<<endl;}
};
int main(){
    C khan;
    khan.Data();
    khan.Data1();
    return 0;
}