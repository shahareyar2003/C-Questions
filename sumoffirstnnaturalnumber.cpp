#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    int temp=n;
    while (n>0){
        sum=sum+n;
        n-=1;
    }
    cout<<"The Sum of first "<<temp<<" natural number = "<<sum;
}