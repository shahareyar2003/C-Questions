#include<iostream>

using namespace std;
int main(){
    int n, n1=0,n2=1;
    int r;
    cout<<"Enter the length of fabnoccii series:";
    cin>>n;
    while (n>0){
        r=n1+n2;
        cout<<n1<<" ";
        n1=n2;
        n2=r; 
        n=n-1;
    }

    return 0;
}