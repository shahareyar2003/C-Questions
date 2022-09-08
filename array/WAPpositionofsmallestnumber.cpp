#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"Enter the total length of array: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=arr[0],pos=0;
    for (int j=0;j<n;j++)
    {
        if (arr[j]<min){
            min=arr[j];
            pos=j;
        }
    }
    cout<<"Minimum elements in array: "<<min<<". At index "<<pos;
    return 0;
}
