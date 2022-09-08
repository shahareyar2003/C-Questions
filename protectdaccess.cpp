/*	                        Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited              	Not Inherited           Not Inherited              
Protected members           Protected                   Private                 Protected                    
Public members           	Public	                    Private                 Protected   */               

#include<iostream>
using namespace std;

class Base{
    protected:
        int a=5; 
    private:
        int b=0;
    public:
        int c=1;

};

class Derived: public Base{
   int d=6;
   public:
    void printData(){
        cout<<d*a<<endl;
        cout<<d*c<<endl;
    }
};

int main(){
    Base b;
    Derived d;
    d.printData();
    return 0;
}
