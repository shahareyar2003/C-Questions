#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter base number m: ";
    cin>>m;
    cout<<"Enter exponent number n: ";
    cin>>n;
    int value=1;
    while (n>0){
        value=value*m;
        n=n-1;
    }
    cout<<"The value of m to power to n: "<<value;

}