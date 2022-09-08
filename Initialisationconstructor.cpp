#include<iostream>
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
using namespace std;
class Test{
    int a;
    int b;
    public:
        // Test(int i,int j):a(i), b(j)
        // Test (int i,int j):a(i),b(i+j)
        // Test (int i,int j):a(i),b(2*j)
        // Test (int i,int j):a(i),b(a+j)
        Test(int i, int j):b(j),a(i+b)  //first i is initialise e.g; b=0
        {
            cout<<"Constructor Executed"<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    Test harry(3,5);
    return 0;
}