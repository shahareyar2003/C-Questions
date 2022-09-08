#include<iostream>
using namespace std;
int fun(int n){
    if (n==1){
        return 0;
    }
    else{
        return 1+fun(n/2);
    }
}
int main(){
    int x=fun(16);
    cout<<x;
    return 0;
}