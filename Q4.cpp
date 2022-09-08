//  Ways to remove i’th character from string in C++
#include<iostream>
using namespace std;
int main(){
    string s,r="";
    cout<<"Enter a string : ";
    cin>>s;
    int k;
    cout<<"Enter the character number You want to remove from String "<<s<<" : ";
    cin>>k;
    for(int i=0;i<s.size();i++)
    {
        if (i!=k)
        {
            r=r+s[i];
        }
    }
    cout<<"By removing" <<k<< "character from string"<<endl;
    cout<<r;
    return 0;
}