#include<iostream>

using namespace std;
int main(){
    int num,digit;
    int rev=0;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    int temp=num;
    while (temp>0){
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if (rev==num){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}