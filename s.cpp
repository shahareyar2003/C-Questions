#include<iostream>

using namespace std;
int main(){
    string a,c;
    a="khan";
    c="pathan";
    char temp;
    temp=a[0];
    a[0]=c[0];
    c[0]=temp;

    cout<<a<<endl;
    cout<<c<<endl;

    return 0;
}
