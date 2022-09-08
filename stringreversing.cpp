#include<iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    int x=s.size();
    string f;
    f="";
    for (int i=0;i<x;i++){
        f=f+s[x-1-i];
    }
    cout<<f;
    return 0;
}