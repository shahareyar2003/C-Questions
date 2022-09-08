#include<iostream>

using namespace std;

int add(int a, int b){
    cout<<" By Using two arguments"<<endl;
    return a+b;
}

int add(int a, int b,int c){
    cout<<" By Using three arguments"<<endl;
    return a+b+c;
}

int main(){
    cout<<add(2,4)<<endl;
    cout<<add(2,4,5);

    return 0;
}