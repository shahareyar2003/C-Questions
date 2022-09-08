#include<iostream>
using namespace std;
int main(){

    int N,arr[100];
    cout<<"Enter the total length of array"<<endl;
    cin>>N;
    for (int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for (int j=0;j<N;j++)
    {
        cout<<"arr["<<j<<"]"<<"="<<arr[j]<<endl;
    }
    return 0;
}