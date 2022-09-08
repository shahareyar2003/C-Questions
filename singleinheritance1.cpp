#include<iostream>
using namespace std;

class A{
    public:
        void Printdata(){
            cout<<"Base class"<<endl;
        }

};
class Derived:public A{
    public:
        void Printdata1(){
        cout<<"Derived class"<<endl;
    }

};
int main()
{
    Derived harry;
    harry.Printdata1();
    harry.Printdata();
    return 0;
}