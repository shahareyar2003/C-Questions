// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.


#include<iostream>
using namespace std;
int main(){
    int n,digit,result=0;
    cout<<"Enter the value of n:";
    cin>>n;
    int i=1;
    int temp=n;
    while (i<temp){
        if (temp%i==0){
            result+=i;
        }
        i+=1;
    }
    if (result==n){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a perfect number";
    }
}