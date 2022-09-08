#include<iostream>

using namespace std;
int main(){
    int year;
    cin>>year;
    if (year%400==0){
        if (year%4==0){
            if (year%100!=0){
                cout<<"leap";
            }
            else{
                cout<<"not leap";
            }
        }
        else{
            cout<<"not leap";
        }
    }
    else{
            cout<<"not leap";
        }
    return 0;
}