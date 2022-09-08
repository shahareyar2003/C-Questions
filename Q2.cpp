// Write a program to reverse a string a string
#include<iostream>
using namespace std;
int main(){
    string s="Khan";
    string rev="";
    int l=s.size();
    for (int i=0; i<l;i++)
    {
        rev=rev+s[l-1-i];
    }
    cout<<rev;
    return 0;
}