#include<iostream>
using namespace std;
void decimal_to_binary(int n){
    if(n==0){
        return ;
    }
    decimal_to_binary(n/2);
    cout<<n%2;
}

void decimal_to_octal(int n){
    if(n==0){
        return ;
    }
    decimal_to_octal(n/8);
    cout<<n%8;
}
int main(){
    int n,t;
    cout<<"Enter a number:- ";
    cin>>n;
    cout<<"For decimal to binary type press 1."<<endl;
    cout<<"For decimal to octal type press 2."<<endl;
    cin>>t;
    if(t==1){
        decimal_to_binary(n);
    }
    else if(t==2){
        decimal_to_octal(n);
    }
    else{
        cout<<"Invalid Choice!";
    }
    return 0;
}
