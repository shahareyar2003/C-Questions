#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the vlue of n: ";
    cin>>n;
    int i=2,f=0,m=n/2;
    while (i<=m){
        if (n%i==0){
            cout<<"Number is not prime"<<endl;
            f=1;
            break;
        }
        i+=1;
    }

    if (f==0){
        cout<<"Prime";
    }
}