#include<iostream>
using namespace std;
int main(){
    /*
    Rules to declare variables:
    1. variables name in C++ can range from 1 to 255 characters.
    2. All variable names must begin with a letter of the alphabet or an underscore(_).
    3. variable names are case sensitive.
    4. No spaces or special characters are allowed.
    5. We cannot use a keyword as a variable name.
    */
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int sum=(a+b);
    cout<<"The Sum of "<<a<<" and "<<b<<" is "<<sum;
    return 0;
}