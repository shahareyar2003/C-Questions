#include<iostream>
using namespace std;
int main(){
    string password;
    cout<<"Password length should be 8 or greater than 8."<<endl
        <<"Password should contain a-z, A-Z, 0-9 and symbols(@ # $ % & *)."<<endl;
    cout<<"\nEnter Password: ";
    cin>>password;
    int n=password.size();
    for(int i=0;i<n;i++){
        if(n>8){
            int a;

        }
        else{
            cout<<"Password length should be 8 or greater than 8.";
            break;
        }
    }


    return 0;
}