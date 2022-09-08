#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int digit;
    while(n>0){
        digit=n%10;
        cout<<digit<<" ";
        n=n/10;
    }
}