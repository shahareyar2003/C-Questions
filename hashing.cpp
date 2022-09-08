// A hash function maps a big number or string to a small integer that can be used as the index in the hash table. 
#include<iostream>
using namespace std;
void delet(int a[],int i){
    a[i]=0;
}
void insert(int a[],int i){
    a[i]=1;
}
int search(int a[],int i){
    return a[i];
}
int main(){
    int arr[1000];
    insert(arr,10);
    cout<<"arr[10]="<<arr[10]<<endl;
    insert(arr,20);
    cout<<"arr[20]="<<arr[20]<<endl;
    insert(arr,119);
    cout<<"arr[119]="<<arr[119]<<endl;
    int x=search(arr,10);
    cout<<x<<endl;
    int y=search(arr,20);
    cout<<y<<endl;
    delet(arr,119);
    search(arr,119);
    cout<<"arr[119]="<<arr[119]<<endl;

    return 0;
}