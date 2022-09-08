#include<iostream>
using namespace std;
int main(){
    int n=10004,c=0;
    while (n>0){
        n=n/10;
        c=c+1;
    }
    cout<<c;
}