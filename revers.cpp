#include<iostream>
using namespace std;
int main()
{
    int x=9875;
    int l=sizeof(x);
    int temp=x;
    int rev=0;
    while(l>0){
        int digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
        l=l-1;
    }
    cout<<rev;
    return 0;
}