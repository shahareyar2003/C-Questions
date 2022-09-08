#include<iostream>
using namespace std;

int power(int x, int y){
    int pow=1;
    for(int i=1;i<=y;i++){
        pow=pow*x;
    }
    return pow;
}

int leng(int num){
    int count=0;
    while (num>0){
        count+=1;
        num=num/10;
    }
    return count;
}


int main(){
    int n,result=0,digit;
    // if a number is an armstrong number then sum of its own digits each raised to the power of the number of digits. E.g; 153=1^3+5^3+3^3
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int temp=n;

    // To find length of number
    while(temp>0){
        digit=temp%10;
        result=result+power(digit,leng(n));
        temp=temp/10;
    }

    // cout<<result<<endl<<n;
    if (result==n){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not a armstrong number";
    }
}