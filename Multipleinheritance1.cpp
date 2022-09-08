#include<iostream>
using namespace std;
class A{
    public:
    void P1(){
        cout<<"Base class 1"<<endl;
    }
};
class B{
    public:
        void P2(){
            cout<<"Base class 2"<<endl;
        }
};
class C: public A, public B{
    public:
        void P3(){
            cout<<"derived class"<<endl;
        }
};

int main(){
    C harry;
    harry.P1();
    harry.P2();
    harry.P3();
    return 0;
}