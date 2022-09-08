#include<iostream>
using namespace std;
int main(){
    int arr[100],n,Randno;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        Randno=rand()%n;
        arr[i]=Randno;
    }
    cout<<"The elements of an array is: "<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}