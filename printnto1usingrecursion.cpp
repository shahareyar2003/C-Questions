#include<iostream>
using namespace std;
void fun_from_last(int n){
    if (n==0){
        return ;
    }
    cout<<n<<" ";
    fun_from_last(n-1);
}
void fun_from_start(int n){
    if(n==0){
        return ;
    }
    fun_from_start(n-1);
    cout<<n<<" ";

}
int main(){
    fun_from_last(5);
    cout<<endl;
    fun_from_start(5);
    return 0;
}