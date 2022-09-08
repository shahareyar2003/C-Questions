/*
Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there are
chances that the base classes have functions with the same name. So it will confuse derived class to choose from
similar name functions. To solve this ambiguity scope resolution operator is used “::”
*/
#include<iostream>
using namespace std;
class base1{
    public:
        void greet(){
            cout<<"Good Morning"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout<<"Namaste"<<endl;
        }
};
class Derived : public base1, public base2{
    public:
        void greet(){
            base2 :: greet();
        }
};
int main(){
    base1 b1;
    base2 b2;
    b1.greet();
    b2.greet();
    Derived d;
    d.greet();
    return 0;
}