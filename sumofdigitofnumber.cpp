#include<iostream>
using namespace std;
int sum_of_digit(int n){
    if (n<10){
        return n;
    }
    return sum_of_digit(n/10)+n%10;
}
int main(){
    int x=sum_of_digit(23);
    cout<<x;
    return 0;
}