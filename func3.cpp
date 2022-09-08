#include<iostream>

using namespace std;

void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}

void swappointer(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void swapreferencevar(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
} 

int main(){
    int a=5,b=4;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b); // This will not swap a and b
    // in swap function x and y make copy of a and b and returns nothing.
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    // swappointer(&a,&b);
    // // This will Swap a and b.
    // cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    swapreferencevar(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
}