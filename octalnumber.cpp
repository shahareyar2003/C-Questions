#include<iostream>
using namespace std;
void fun(int n){
    if(n==0){
        return ;
    }
    fun(n/8);
    cout<<n%8;
}
int main(){
    fun(444);
    return 0;
}