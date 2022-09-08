#include<iostream>

using namespace std;

int factorial(int num){
    int fact=1;
    while (num>0)
    {
        fact=fact*num;
        num=num-1;
    }
    return fact;

    
}
int main(){
    int n,digit,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n;
    while (temp>0){
        digit=temp%10;
        sum=sum+factorial(digit);
        temp=temp/10;
    }
    if (n==sum){
        cout<<"Krishnamurthy number"<<endl;
    }
    else{
        cout<<"Not a krishnamurthy number"<<endl;
    }
    return 0;
}