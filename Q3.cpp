// Write a program to check whether the string is Symmetrical or Palindrome
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    cin>>s;
    string rev="";
    int l=s.size();
    for (int i=0;i<l;i++)
    {
        rev=rev+s[l-1-i];
    }
    if (rev==s){
        cout<<"Symmetrical String";
    }
    else{
        cout<<"Non-Symmetrical String";
    }
    return 0;
}